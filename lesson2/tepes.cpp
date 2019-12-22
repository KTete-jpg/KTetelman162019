#include <iostream>
#include <typeinfo>
using namespace std;


void doPrint() {
     cout << "In doPrint" << endl;
}
int returnInt () {
     return 8;
}

int main (void) {
     cout << "start main()"<< endl;
     doPrint();
     //cout << returnInt()+2<<endl;
     cout << "end main()"<<endl;
     return 0;
cout << "after return"<< endl;

}
//v2
int x = returnInt ();
cout << x << endl;
cout << "end main()"<< endl

