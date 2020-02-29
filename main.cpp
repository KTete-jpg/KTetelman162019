
#include "print.hpp"
#include "getImputNumber.hpp"
#include "calc.hpp"
using namespace std;
int main() {
void print();
print();
int getInputNumber();
int add();
int mult();
int diff();
float divise();

int x = getInputNumber();
int y = getInputNumber();

cout<<"You entered"<<x<<","<<y<<endl;
cout<<"sum is"<< x+y <<endl;
cout<<"differenca is"<< x-y<<endl;
cout<<"multiple is"<< x*y<<endl;
cout<<"division is"<< x/y<<endl;
return 0;
}
