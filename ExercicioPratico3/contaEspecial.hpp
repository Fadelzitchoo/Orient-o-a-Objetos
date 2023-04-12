#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include"contaBancaria.hpp"

class contaEspecial : public contaBancaria{
    private:
        float limite;
    public:
        contaEspecial(Titular titular, int numeroConta, float saldo, float limite) : contaBancaria(titular, numeroConta, saldo), limite(limite) {}

        void setLimite(float limite);
        float getLimite();                                              
        float saque(float valor);
};


#endif