# Generated by Django 4.2.1 on 2023-07-23 12:55

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('pizzas', '0003_alter_topping_options'),
    ]

    operations = [
        migrations.AlterModelOptions(
            name='topping',
            options={'verbose_name_plural': 'toppings'},
        ),
    ]
