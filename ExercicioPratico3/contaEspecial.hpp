#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP

#include"contaBancaria.hpp"

class contaEspecial : public contaBancaria{
    private:
        float limite;
    public:
        contaEspecial(Titular titular, int numeroConta, float saldo, float limite);

        void setLimite(float limite);
        float getLimite();        
        bool saque(float valor);                                      
};


#endif