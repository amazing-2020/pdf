from django import forms
from .models import Blog, Post


class BlogForm(forms.ModelForm):
    class Meta:
        model = Blog
        fields = ['name', 'description']
        labels = {'name': 'Blog name', 'description': 'Blog description'}


class PostForm(forms.ModelForm):
    class Meta:
        model = Post
        fields = ['title', 'content']
        labels = {'title': '标题', 'content': '正文'}
        widgets = {'text': forms.Textarea(attrs={'cols': 80})}
