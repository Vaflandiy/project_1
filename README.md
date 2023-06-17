# project_1
Кто я такой? = Who am i?
---
Всем привет! Меня зовут Даня. Вафиев Даниил Денисович, если быть точнее, но друзья просто зовут "Вафлей". 
Я ученик 10го(Фактически уже 11ого) класса.  
Родился в Калининграде, но фактическое место моего проживания на большую часть года - город Мурманск.  
Мне уже целых 17 лет! Родился 28 марта 2006 года.  

Hello! My name is Danya. Vafiev Daniil Denisoich, if i want to be correct. But more othen, my friends call me "Vafel".  
I am a student of the 10th(Actually already 11th) grade.  
I was born in Kaliningrad, but actually, i live 9 mounth per year in Murmansk.  
I am already 17 years old! I aws born in 28 of march, in 2006.

Чем я увлекаюсь? = What i like to do?
---
Если быть честным, то я - книжный червь, любитель компьютерных игр и практически всего, что с ними связано. Странное сочетание, не правда ли? :D  
Поскольку мне практически всегда нравились книги, а если быть точными, рассказы в жанре "Фантастика" написанные различными авторами, однажды, в моей жизни произошёл переломный момент. Да, я открыл для себя мир иностранной литературы, а затем, после изучения иностранного языка, передо мной открылся и мир игр, не полностью или простно не переведённых на русский язык. 
Читая переведённые на русский язык иностранные произведения, я часто находил хорошие книги, перевод которых, по тем или иным причинам был остановлен. Как читателя, меня это очень сильно раздражжало, а потому, я решил взять всё в свои руки. Примерно в Ноябре 2022 года, я впервые выложил переведённую мной главу.  
На данный момент, я выложил 351 собственноручно переведённых глав, чем я горжусь.  
За время своего пути переводчика, я познакомился со многими людьми, некоторые из которых, стали моими коллегами, вместе с которыми я начал и вместе с которыми, до сих пор перевожу иностранную литературу.  
[Проект, который перевожу я](https://ranobelib.me/white-online?section=info&ui=4690484)  
[Проект, который переводят мои коллеги](https://ranobelib.me/epic-of-ice-dragon-reborn-as-an-ice-dragon-with-a-system?section=info&ui=4690484)  
Забавно, но в нашей небольшой команде собрались представители целых трёх стран.

If I want to be honest, I am a bookworm, computer games enjoyer and almost everything connected with them. Weird combination, isn't it? :D  
Since I almost always liked books, and to be precise, stories in the genre of "Fantasy" written by various authors, one day, a turning point occurred in my life. Yes, I discovered the world of foreign literature, and then, after studying a foreign language, the world of games opened up before me, not fully or simply not translated into Russian.  
Reading foreign works translated into Russian, I often found good books, the translation of which, for one reason or another, was stopped. As a reader, this annoyed me very much, and therefore, I decided to take matters into my own hands. Around November 2022, I posted the chapter I translated for the first time.  
So far, I have posted 351 self-translated chapters, which I am proud of.  
During my journey as a translator, I met many people, some of whom became my comrades, with whom I started and with whom I still translate foreign literature.  
[Project I am translating](https://ranobelib.me/white-online?section=info&ui=4690484)  
[Project translated by my colleagues](https://ranobelib.me/epic-of-ice-dragon-reborn-as-an-ice-dragon-with-a-system?section=info&ui=4690484)  
It's funny, but our small team brought together representatives of three countries.

Почему я решил связать свою жизнь с программированием? = Why I decided to connect my life with programming?
---
Причина до жути проста. Обдумав всё, что я умею и сложив 2 + 2, я осознал, что кроме знания английского языка, математики и информатики, у меня нет будущего в большинстве известных мне наук. Более того, когда в нашем курсе информатики впервые появилось программирование, то я понял, что оно мне нравится.  
Мне нравится разбираться в том, в чём даже машина порой не может разобраться, если код написан некорректно. Мне нравится создавать программы, дабы компьютер решал необходимую мне проблему. Разумеется, я знаю, что программирование - постоянно развивающаяся и совершенствующая наука, с которой нуджно идти в ногу но я готов! В конце концов, кто не рискует, тот не пьёт шампанское! 

The reason is maybe even too simple. Thinking about everything that I can do and adding 2 + 2, I realized that apart from knowing English, mathematics and computer science, I have no future in most of the sciences I know. Moreover, when programming first appeared in our computer science course, I realized that I liked it.   
I like to understand what even a machine sometimes cannot figure out if the code is written incorrectly. I like to create programs so that the computer solves the problem I need him to solve. Of course, I know that programming is a constantly evolving and improving science that you need to keep up with, but I'm ready! In the end, who does not take risks does not drink champagne!  

Материалы, по которым я составил это описание себя. = The materials from which I compiled this description of myself.  
---
[Лайфхакер](https://lifehacker.ru/chto-takoe-markdown/)  
[Руководство по оформление Markdown файлов](https://gist.github.com/timseriakov/3ca738c41e417fde5731e0a97e8c1356)  

Контактные данные = How you can contact with me  
---
[Вконтакте = Vkontakte](https://vk.com/i_am_vaflandiy)  
[Telegram](@Vaflandiy)  
[Discord](vaflandiy)  


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
