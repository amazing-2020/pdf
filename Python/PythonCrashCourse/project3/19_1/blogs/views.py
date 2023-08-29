from django.shortcuts import render, redirect
from django.contrib.auth.decorators import login_required
from .models import Blog, Post
from .forms import BlogForm, PostForm
from django.http import Http404


# Create your views here.

def index(request):
    blog_infos = Blog.objects.all()
    posts = Post.objects.order_by('-published_at')
    context = {'blog_infos': blog_infos, 'posts': posts}
    return render(request, 'blogs/index.html', context)


@login_required
def new_blog(request):
    if request.method != 'POST':
        form = BlogForm()
    else:
        form = BlogForm(data=request.POST)
        if form.is_valid():
            new_blog = form.save(commit=False)
            new_blog.owner = request.user
            new_blog.save()
            return redirect('blogs:index')
    print(request.method)
    context = {'form': form}
    return render(request, 'blogs/new_blog.html', context)


@login_required
def new_post(request, blog_id):
    blog = Blog.objects.get(id=blog_id)
    if request.method != 'POST':
        form = PostForm()
    else:
        form = PostForm(data=request.POST)
        if form.is_valid():
            new_entry = form.save(commit=False)
            new_entry.blog = blog
            check_topic_owner(blog, request)
            new_entry.save()

            return redirect('blogs:index')

    context = {'blog': blog, 'form': form}
    return render(request, 'blogs/new_post.html', context)


@login_required
def edit_post(request, post_id):
    post = Post.objects.get(id=post_id)
    blog = post.blog

    check_topic_owner(blog, request)
    if request.method != 'POST':
        form = PostForm(instance=post)
    else:
        form = PostForm(instance=post, data=request.POST)
        if form.is_valid():
            form.save()
            return redirect('blogs:index')

    context = {'post': post, 'blog': blog, 'form': form}
    return render(request, 'blogs/edit_post.html', context)


def check_topic_owner(blog, request):
    if blog.owner != request.user:
        raise Http404
