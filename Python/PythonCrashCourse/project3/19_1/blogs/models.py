from django.db import models
from django.contrib.auth.models import User


# Create your models here.
class Blog(models.Model):
    name = models.CharField(max_length=100, unique=True)
    description = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True)
    owner = models.ForeignKey(User, on_delete=models.CASCADE)

    def __str__(self):
        return self.name


class Post(models.Model):
    title = models.CharField(max_length=50, unique=True)
    content = models.TextField()
    published_at = models.DateTimeField(auto_now_add=True)
    blog = models.ForeignKey(Blog, on_delete=models.CASCADE)

    class Meta:
        verbose_name_plural = 'posts'

    def __str__(self):
        if len(str(self.content)) > 50:
            return f"{self.content[:50]}..."
        else:
            return self.content
