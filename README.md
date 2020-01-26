# Describtion of C++ courses and my studying in UIT
### Short describtion
Our course consist of 3 moduls. I study basic syntaxis of C++.
>#### **List of lessons**
 - lessons 1-3
>  Symple comands - *september*
-  lesson 4
> Git - *october*
- lessons 5-6
> Functions -*october*
- lessons 7-9
> - If, for and while p- *november*
- lessons 9-10
> - Do while - *december*
- lessons 11-12
>  Arrays - *december*
- lessons 13-14
> 16,8,10,2-systems - *december*
- lesson 15
> Test - *29.12.2019*


***Useful links***
- [Learn C++ with pleasure!](/https://git-scm.com/book/ru/v2/%D0%92%D0%B2%D0%B5%D0%B4%D0%B5%D0%BD%D0%B8%D0%B5-%D0%9F%D0%B5%D1%80%D0%B2%D0%BE%D0%BD%D0%B0%D1%87%D0%B0%D0%BB%D1%8C%D0%BD%D0%B0%D1%8F-%D0%BD%D0%B0%D1%81%D1%82%D1%80%D0%BE%D0%B9%D0%BA%D0%B0-Git)
- [Learn C++ with pleasure!](/https://code-live.ru/tag/cpp-manual/)
- [Learn C++ with pleasure!](/https://ide.cs50.io/)

![](https://is1-ssl.mzstatic.com/image/thumb/Podcasts113/v4/a6/e2/e9/a6e2e95b-8ff3-1763-6c6d-f94f87feafc3/mza_5641122497518604677.jpg/268x0w.jpg)
> ### Starting programme
       #include <iostream>
       #include <cstdlib> // для system
       using namespace std;

       int main() 
          { 
             cout << "Hello, world!" << endl;
             system("pause"); // Только для тех, у кого MS Visual Studio
             return 0; 
           } 

> ### Compilation
           c++ имя_файла.cpp -o имя_выходного_бинарника # компиляция кода
           ./имя_выходного_бинарника # запуск программы

# **Домашнее задание**

## Список основных команд для гита
1. Git commit into your repository
- git status
> Команда git status показывает состояния файлов в рабочей директории и индексе: какие файлы изменены, но не       > добавлены в индекс; какие ожидают коммита в индексе. Вдобавок к этому выводятся подсказки о том, как изменить     > состояние файлов.
- git add
> Команда git add добавляет содержимое рабочей директории в индекс (staging area) для последующего коммита. По     > умолчанию git commit использует лишь этот индекс, так что вы можете использовать git add для сборки слепка вашего  > следующего коммита.
- git mv
> Команда git mv — это всего лишь удобный способ переместить файл, а затем выполнить git add для нового файла и git > rm для старого.
- git diff
> Команда git diff используется для вычисления разницы между любыми двумя Git деревьями.
- git commit
> Команда git commit берёт все данные, добавленные в индекс с помощью git add, и сохраняет их слепок во внутренней > базе данных, а затем сдвигает указатель текущей ветки на этот слепок.
- git push
- git remote
- git pull origin
- git reset
> Команда git reset, как можно догадаться из названия, используется в основном для отмены изменений. Она изменяет  > указатель HEAD и, опционально, состояние индекса. Также эта команда может изменить файлы в рабочей директории при > использовании параметра --hard, что может привести к потере наработок при неправильном использовании, так что    > убедитесь в серьёзности своих намерений прежде чем использовать его.
2. Configuing example
> Если вы хотите проверить используемую конфигурацию, можете использовать команду git config --list, чтобы показать все настройки,      > которые Git найдёт:

$ git config --list

user.name=John Doe

user.email=johndoe@example.com

color.status=auto

color.branch=auto

color.interactive=auto

color.diff=auto
...

[Источник](https://git-scm.com/book/ru/v2/Appendix-C%3A-%D0%9A%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D1%8B-Git-%D0%9E%D1%81%D0%BD%D0%BE%D0%B2%D0%BD%D1%8B%D0%B5-%D0%BA%D0%BE%D0%BC%D0%B0%D0%BD%D0%B4%D1%8B)

## **Команды для терминала**
-  відобразити вміст папки (показати список файлів і папок)
> ls
-  відобразити вміст папки і додаткову інформацію
> ls –l
-  відобразити також приховані файли.cd : перейти в іншу папку 
> ls –a 
-  перейти в попередню папку (на рівень вище)
> cd .. 
- перейти у папку за шляхом [PATH]
> cd [PATH]
-  створити нову папку із назвою
[DIRECTORY_NAME]
> mkdir [DIRECTORY_NAME] 
- відкрити у текстовому редакторі файл [FILE_NAME]
> gedit [FILE_NAME]
- перместить файл в другой файл
> mv 
- создать файл с расширением срр
> touch 
-  скомпилировать программу
> make 
- скопировать файл в другой файл
> cp


***Источник: лекция Cs50ide***
