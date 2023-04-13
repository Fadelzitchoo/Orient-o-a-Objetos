#include<iostream>
#include<string>

#include"contaBancaria.hpp"
#include"contaEspecial.hpp"
#include"contaSimples.hpp"
#include"contaPoupanca.hpp"
#include"titular.hpp"

using namespace std;

int main(){
    Titular pessoa1("Felipe Fadel", 11108925944), pessoa2("OutraPessoa", 33308925944), pessoa3("Mais Uma pessoa", 534653453);

    contaSimples conta1(pessoa1, 12, 500);
    contaEspecial conta2(pessoa2, 13, 1000, 500);
    contaPoupanca conta3(pessoa3, 14, 1500);

    cout << "Numero Da conta: " << conta1.getNumeroConta() << endl;

    cout << "Saldo: " << conta1.getSaldo() << endl;
    conta1.saque(500);
    cout << "Saldo: " << conta1.getSaldo() << endl;    

    cout << "Numero Da conta: " << conta2.getNumeroConta() << endl;

    cout << "Saldo: " << conta2.getSaldo() << endl;
    conta2.saque(1600);
    cout << "Saldo: " << conta2.getSaldo() << endl;    
        
    return 0;
}