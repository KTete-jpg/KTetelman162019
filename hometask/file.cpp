#include<iostream>
#include<sstream>
int main ()
{
    int v = 0b1111;//бинарная запись
    std::cout<<"The number in octal"<<std::oct<<42<<'\n';
    std::cout<<"The number in octal"<<std::dec<<42<<'\n';
    std::cout<<"The number in octal"<<std::hex<<42<<'\n';
    int n;//=0x2a -> hex
    std::istringstream("2A")>>std::hex>>n;//переброска значений в переменную
    std::cout<<std::dec<<n<<'\n';
    std::cout<<std::hex<<42<<21<<'\n';// переброска значения с десятичной в 16, перевод 42 и 21


}
