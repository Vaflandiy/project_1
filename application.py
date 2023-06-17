# project_1

```
from docxtpl import DocxTemplate

doc = DocxTemplate("Документ для программы.docx")

print('Данная программа поможет вам написать документ о необходимости уйти в отпуск. '
      'Всё, что вам нужно делать - честно отвечать на вопросы')
print('Вы желаете создать документ? Впишите "Да", если хотите продолжить '
      'или любое другое слово, если вы желаете завершить сеcсию')
word = input()
if word == 'Да':
    print('Добро пожаловать! Пожалуйста, введите своё имя.')
    print('Пример: Даниил')
    name = input()
    print(name, 'Пожалуйста, введите своё имя в дательном падеже')
    name_d = input()
    print(name,
          ", Пожалуйста, введите свою фамилию и отчество через запятую в ранее указанном порядкe, в дательном падеже.")
    print('Пример: Вафиеву, Денисовичу')
    familia, otchestvo = input().split(', ')
    print(familia, name_d, otchestvo)
    print('Пожалуйста, укажите занимаемую вами должность.')
    print('Прошу, учитывайте, что о вашей должности будет написаног так: "От *ваша должность*,' 
          '*Ваша фамилия, имя, отчество в родительном падеже*"')
    status = input()
    print('Пожалуйста, введите вашу фамилию, имя и отчество, через запятую, в родительном падеже')
    familia_r, name_r, otchestvo_r = input().split(', ')
    print(name, ", Пожалуйста, введите причину, по которой вам необходимо уйти в отпуск.")
    print('Учтите, что о причине необходимости отпуска будет написано так: "По причине:..."')
    reason = input()
    print("Пожалуйста, введите дату вашего отбытия в отпуск и прибытия из отпуска через запятую в указанном порядке.")
    print('Пример оформления - 28.03.2018, 28.05.2018')
    date_of_departing, date_of_arriving = input().split(', ')
    print('Пожалуйста, укажите продолжительность вашего отпуска в календарных днях.')
    days_off_vacation = int(input())

context = {'status': status, 'familia_r': familia_r, 'name_r': name_r, 'otchestvo_r': otchestvo_r, 'familia': familia,
           'name': name_d, 'otchestvo': otchestvo, 'days_off_vacation':
               days_off_vacation, 'date_of_departing': date_of_departing, "date_of_arriving": date_of_arriving,
           'reason': reason}
doc.render(context)
doc.save("Документ для программы-final.docx")
print('Спасибо, что воспользовались данной программой!' 
    'Прошу заполнить имя, фамилию и должность руководителя самостоятельно!')
print("Готовый файл был сохранён под названием 'Документ для программы-final'")
```
[Документ для программы.docx](https://github.com/Vaflandiy/project_1/files/11778773/default.docx)
