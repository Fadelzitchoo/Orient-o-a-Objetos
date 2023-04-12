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
        contaBancaria(string nome, long long int cpf, int numeroConta, float saldo);
        void setTitular(string nome);
        string getTitular();

        void setNumeroConta(int numero);
        int getNumeroConta();

        void deposito(float valor);                             //Se considera este o "SetSaldo" da classe 
        float getSaldo();                                       //Visualiza o saldo da conta

        virtual float saque(float valor) = 0;                               //Parecido com o getSaldo, mas o saque retira da conta o valor

};

#endif  