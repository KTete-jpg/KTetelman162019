#include <iostream>
#include <cstring>
using namespace std;
int main ()
{   const int number = 10;// лучше задать количество элементов массива через переменную
    char surname[20];
    char name1[number]={'k','a','t','e'};// это массив-набор значений в контейнере. [10] - 10 элементов максимум. просто массив
    char name2[number]={'k','a','t','e','\0'};// \0- типа Enter -завершение строки, в принципе строка, хоть и через массив.
    char name3[]= "kate";// строка через массив
    //cout << strlen(name1)<<endl;// strlen - отображает количество символов в массиве
    //cout << strlen(name2)<<endl;
    //cout << strlen(name3)<<endl;
    cout<< name1<<endl;//отображает содержимое массива
    cout<< name2[2]<<endl;// вывод третьего элемента массива
  //for (int i = 0; i<number; i++)//вар1
  //for (int i = 0; i<strlen(name2); i++)// стрлен не выводит пустые ячейки, только для чар. вар2
   for (int i = 0; i<sizeof(name2); i++)// size of умножает на единицу хранения
   cout <<name2[i]<<endl;// вывод всех элементов
    return 0;
}