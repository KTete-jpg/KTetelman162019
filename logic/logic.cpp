#include <iostream>
#include <iomanip>
#include "condition.hpp"
using namespace std;
int main (void)
{
     cout.setf(ios::scientific);
     cout.precision(10);

     bool t = true;
     bool f = false;
     short a = 1;
     short b = 2;
     short c = 3;
    // complex<double>z -комплесные числа
   // if ((a<b) && f || !f && c >=a)// &  это и, две черточки - или, ! - нет перед логическим значением. Первое выражение = тру, тру и фолс = фолс, фолс или тру = тру,
    //тру и тру = тру.
   // {
   //    cout<< "condition - ";
    //}
    //программа проверяет правильность выражение. если условие не выполняеться, то кондишн не выведеться.

    // int x = a < b ? a : b // тернарный оператор, относится к переменной. Условие, знак вопроса - проверяет условие,если да, х=а, двоеточие - еlse, х=b.
 //Обязательна переменная, просто так функция не запуститься
    //cout<< (a < b ? a : b)<<endl;
    double d1(100-99.90000);
    double d2(10-9.99000);
    if (d1==d2)
     cout << "d1=d2 \n";
    else if (d1>d2)
     cout << "d1>d2 \n";
    else if (d1<d2)
     cout << "d1<d2 \n";\
    cout << d1 <<endl;
    cout << d2<<endl;
    double d = 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;//цифры после знаков округляються. поэтому равенство не соблюдаеться
    cout << boolalpha << (d==1.0)<<endl;
    cout << isEqual(0.01,0.01,0.00001);
     return 0;
}
