import datetime

if __name__ == '__main__':
    print(datetime.date.today().strftime('%d-%m-%Y'))

    birthday = datetime.date(2001, 9, 1)
    print(birthday.strftime('%d//%m//%Y'))
    birthday_next = birthday + datetime.timedelta(days=1)
    print(birthday_next.strftime('%d??%m??%Y'))
    birthday_first = birthday.replace(year=birthday.year + 1)
    print(birthday_first.strftime('%d/%m/%Y'))
