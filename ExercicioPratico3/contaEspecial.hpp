#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include"contaBancaria.hpp"
#include<string>

class contaEspecial : public contaBancaria{
    private:
        float limite;
    public:
        contaEspecial(Titular titular, int numeroConta, float saldo, float limite);

        void setLimite(float limite);
        float getLimite();        
        float pix(float valor);
        bool saque(float valor);                                      
};


#endif