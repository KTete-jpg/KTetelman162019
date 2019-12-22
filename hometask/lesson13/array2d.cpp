#include<iostream>
using namespace std;
int  getValueFromUser ();// прототип функции
int main ()
{
 const short COUNT =  getValueFromUser ();
 int arr[COUNT][COUNT];// двухмерный массив, состоящий из двух строчек. Значения одинаковые-таблица симетрична, например, таблица 2 на 2.
 for (int i = 0; i < COUNT; i++ )// i - инлдекс первого массива, j- индекс второго массива. Пусть каунт =4. Цикл 1- 0 больше 4, заходим во второй, джи равно 0.
 //значит номер элемента 00 - 0-строчка первая, 0 - элемент первый. Далее 01,02,03. Во второй строчке - 10 - первый элемент строки.
 {
   for(int j = 0; j < COUNT; j++)
    {
     arr[i][j]= 0;//заполняем значение нулем
    }
 }
 return 0;
}
int getValueFromUser () {
    int x = 0;
    cout << "Enter your integer: ";
    cin >> x;
    return x;
}