from django.db import models
from django.utils import timezone
# Create your models here.


class Pizza(models.Model):
    name = models.CharField(max_length=200)
    date_added = models.DateTimeField(default=timezone.now)

    def __str__(self):
        return self.name


class Topping(models.Model):
    pizza = models.ForeignKey(Pizza, on_delete=models.CASCADE)
    name = models.TextField()
    date_added = models.DateTimeField(default=timezone.now)

    class Meta:
        verbose_name_plural = 'toppings'

    def __str__(self):
        return self.name
