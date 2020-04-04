#include<iostream>
#include<vector>
#include"struct.hpp"
using namespace std;
int main() {
    data_bank person;
    cout<<"Enter your value of credit"<<endl;
    cin>>person.credit;
    person.credit=(person.value+person.value*person.persent)/12;
    cout<<"You need topay each month: "<<person.credit<<endl;
    vector<data_bank>clients;
    addClient();
    Print();
    return 0;
}
 void addClient(vector<auto>&vector)
 {
  data_bank person;
  cout<<"Enter the name: "<<endl;
  cin>>person.name;
  cout<<"Enter the surname: "<<endl;
  cin>>person.surname;
  cout<<"Enter the petronimik: "<<endl;
  cin>>person.petronimik;
  cout<<"Enter the age: "<<endl;
  cin>>person.age;
  cout<<"Enter the date of birth: "<<endl;
  cin>>person.date;
  cout<<"Enter the email: "<<endl;
  cin>>person.e_mail;
  cout<<"Enter your status: "<<endl;
  cin>>person.married;
 }
void Print(vector<auto>&vector)
{ data_bank person;
 cout<<"data about client: "<<endl;
 cout<<person.name<<endl;
 cout<<person.surname<<endl;
 cout<<person.age<<endl;
 cout<<person.date<<endl;
 cout<<person.married<endl;
}
void Choice {
    cout<<"menu, print your choice"<<endl;
    string choice="";
    cout<<"Print"<<endl;
    cout<<"addClient"<<endl;
    cin>>choice;
    if (choice=="Print")
    {Print()};
    if (choice=="addClient")
    {addClient()};

}
