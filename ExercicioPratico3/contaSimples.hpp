#ifndef CONTASIMPLES_HPP
#define CONTASIMPLES_HPP

#include "contaBancaria.hpp"

class contaSimples : public contaBancaria{
    private:

    public:
        contaSimples(Titular titular, int numeroConta, float saldo);
        float pix(float valor);
        bool saque(float valor);                                      

};

#endif  