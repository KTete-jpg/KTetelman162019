#include <iostream>
#include <string>
int main() {
      std::string name = "";
      std::cout<< "Enter your name:";
      std::cin >> name;
      std::cout << "Hello, " << name << std::endl;
      return 0;
}
//int main() {

     int x = 3;
     int y = 5;
     cout << x + y << endl;
     string name1 = "7 ";
     string name2 = "9";
     cout << name1 + name2<< endl;
     cout << name1 << name2 << endl;
     bool t = 0; //t ->true
     bool f = 0; //f ->false
     bool ft = bool(y);//  явное приведение к типу данных инт к бул
     bool ft2 = x; //  неявное приведение
     cin >> t;
     cin >> f;
     cout << boolalpha << t<< bool(y)<< ft2 << f << endl;
     cout << noboolalpha << t<< bool(y)<< ft2 << f << endl;*/
return 0;
}
 int main() {
    int x = 10;
    int y = 12;
    int z = 3;
    x += y-x++*z;// += - x+x+y; ++ - инкримент (+1)
    z=--x–y*5;//  -- это х-1
    y/=x+5%z;// /= - деление на последущее, % - остаток от деления

    cout << x<<endl;
    return 0;
}
int main () {
     const double pi = 3.14// переменная константа, не меняеться
     int r = 3
     cout << pi*r*r<<endl;
}
//Напишите программу, которая определяет символ с кодом 88.
int main ( ) {
     cout << (char) 88  << endl;
     return 0;
     cout << (int) 'X' << endl; // программа наоборот. х конвертируется в 88
     int x = 6;// прогамма на определение типа данных
     cout << typeid(x).name()<<endl;// продолжение
return 0;
}
// Сайт step.flow  - правильные примеры//