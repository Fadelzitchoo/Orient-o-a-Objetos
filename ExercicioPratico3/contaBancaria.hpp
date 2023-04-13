#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP

#include"titular.hpp"
#include<string>

using namespace std;

class contaBancaria{
    private:
        Titular titular;
        float saldo;
        int numeroConta;
    public:
        contaBancaria(Titular titular, int numeroConta, float saldo);

        void setTitular(Titular titular);
        Titular getTitular();

        void setNumeroConta(int numero);
        int getNumeroConta();

        void deposito(float valor);                             //Se considera este o "SetSaldo" da classe 
        void setSaldo(float valor);
        float getSaldo();                                       //Visualiza o saldo da conta

        virtual bool saque(float valor) = 0;
};

#endif  