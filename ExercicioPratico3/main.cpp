#include<iostream>
#include<string>

#include"contaEspecial.hpp"
#include"titular.hpp"

using namespace std;

int main(){
    Titular pessoa1("Felipe Fadel", 11108925944), pessoa2("OutraPessoa", 33308925944);

    contaEspecial conta1(pessoa1, 24, 1000, 500);
    contaEspecial conta2(pessoa2, 23, 1340, 500);

    
    
    return 0;
}