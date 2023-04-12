#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP

#include"titular.hpp"
#include<string>

using namespace std;

class contaBancaria{
    private:
        Titular titular;
        float saldo;
    public:
        contaBancaria(int s) : saldo(s) {}
        void setTitular(string nome);
        string getTitular();

        void deposito(float valor);                             //Se considera este o "SetSaldo" da classe 
        float getSaldo();                                       //Visualiza o saldo da conta

        virtual float saque(float valor) = 0;                               //Parecido com o getSaldo, mas o saque retira da conta o valor

};

#endif  