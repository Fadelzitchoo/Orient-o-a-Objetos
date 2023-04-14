#include<iostream>
#include<string>
#include<vector>

#include"contaPoupanca.hpp"
#include"titular.hpp"

using namespace std;

float contaPoupanca::taxaDejurosAnual = 0.06;

int main(){
    Titular pessoa1("The Rock", 2304302), pessoa2("Blue Pen", 2304305), pessoa3("Red Pen", 6666666);        //3 Titulares

    pessoa1 = pessoa1 + "tHE rOCK";                                                                         //Esse operador concatena novos nomes a os titulares

    contaPoupanca poupador1(pessoa1, 12, 2000);
    contaPoupanca poupador2(pessoa2, 13, 3000);

    vector<contaPoupanca> poupador3;                                                                        //Poupador 3 possuira 2 contas, uma para deixar o dinheiro guardado

    contaPoupanca conta1(pessoa3, 14, 100);
    contaPoupanca conta2(pessoa3, 15, 200000);                                                              //Possui 200 reais, limite 1000 reais

    poupador3.push_back(conta1);
    poupador3.push_back(conta2);

    cout << "Foi colocado na conta do poupador 1: " << poupador1.getSaldo() << endl;
    cout << "Foi colocado na conta do poupador 2: " << poupador2.getSaldo() << "\n" << endl;
        
    poupador1.setSaldo(poupador1.getSaldo() + poupador1.calcularRendimentoMensal(poupador1.getSaldo()));
    poupador2.setSaldo(poupador2.getSaldo() + poupador2.calcularRendimentoMensal(poupador2.getSaldo()));

    cout << "A conta do Poupador 1 possui no mes 1: " << poupador1.getSaldo() << endl;
    cout << "A conta do Poupador 2 possui no mes 1: " << poupador2.getSaldo() << "\n" << endl;

    contaPoupanca::modificarTaxaDeJuros(0.08);

    poupador1.setSaldo(poupador1.getSaldo() + poupador1.calcularRendimentoMensal(poupador1.getSaldo()));
    poupador2.setSaldo(poupador2.getSaldo() + poupador2.calcularRendimentoMensal(poupador2.getSaldo()));

    cout << "A conta do Poupador 1 possui no mes 2: " << poupador1.getSaldo() << endl;
    cout << "A conta do Poupador 2 possui no mes 2: " << poupador2.getSaldo() << "\n" << endl;

    poupador1.~contaPoupanca();
    poupador2.~contaPoupanca();

    for (int i = 0; i < 1; i++)
    {
        poupador3.at(i).~contaPoupanca();
    }
    
    return 0;
}