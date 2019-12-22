#include <iostream>

using namespace std;
int void printA() {
    cout << "A" << endl;
}
void printB() {
    cout << "B" << endl;
}
void printAll () {
    printA();
    printB();

}
int main(void) {
    printAll();
    return 0;
}
