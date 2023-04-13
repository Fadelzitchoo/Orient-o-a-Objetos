#ifndef CONTAPOUPANCA_HPP
#define CONTAPOUPANCA_HPP

#include "contaBancaria.hpp"

class contaPoupanca : public contaBancaria{
    private:
        static float taxaDejurosAnual;
    public:
        contaPoupanca(Titular titular, int numeroConta, float saldo);
        float calcularRendimentoMensal(float saldo);
        static void modificarTaxaDeJuros(float taxaDeJurosAnual);
        bool saque(float valor);                                      
};

#endif