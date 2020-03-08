#include<iostream>
#include"structure2.hpp"
#include"struct.hpp"
using namespace std;
string get_name(person man)
{
  return man.name;
}
int main(){
person vasiliy;//-объявление переменной. Далее параметры:.Лучше инициализировать.
vasiliy.name = "";
vasiliy.age=21;
vasiliy.height=180;
vasiliy.weight=70;
vasiliy.country="England";
vasiliy.married=false;
person ivan = {"Ivan",20,170,80,"Ukraine",true};//initializing person ivan
cout<< "name ="<<ivan.name <<endl;// нужно обращаться к конкретной переменной
person people[3];
people[0] = {"Ivan",24,170,80,"Ukraine",true};
people[1] = {"julia",25,160,80,"Russia",false};
people[2] = {"Artem",23,170,90,"Armenia",true};
for(int i=0; i<3; i++)
{
cout<<people[i].name<<endl;
// cout<<get_name(people[i])<<endl;//обязательно указывать .имя, .рост
}
cout<<get_name(ivan)<<endl;

car cars[2];

for(int i=0; i<2; i++)
{
cout<<"Введите marka"<<endl;
cin>>cars[i].marka;
cout<<"Введите speed"<<endl;
cin>>cars[i].speed;
cout<<"Данные машины "<<i<<endl;
cout<<"Model "<<i<<" is "<<cars[i].speed<<endl;
cout<<"Speed "<<i<<" is "<<cars[i].marka<<endl;
}
if (cars[0].speed>cars[1].speed)
{cout<<"You'd better choose variant a"<<endl;}
else
{cout<<"You'd better choose variant b"<<endl;}
return 0;
}
