#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include"contaBancaria.hpp"

class contaEspecial : public contaBancaria{
    private:
        float limite;
    public:
        contaEspecial(float l, float saldo) : contaBancaria(saldo) {
            limite = l;
        }
        float getLimite();                                              //Saber o limite da conta, o set do limite é apenas durante a construção
        float saque(float valor);
};


#endif