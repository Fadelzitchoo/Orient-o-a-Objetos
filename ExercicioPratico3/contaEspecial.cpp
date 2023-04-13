#include"contaEspecial.hpp"

contaEspecial::contaEspecial(Titular titular, int numeroConta, float saldo, float limite) : contaBancaria(titular, numeroConta, saldo), limite(limite) {}

bool contaEspecial::saque(float valor){
    if(valor <= getSaldo() + limite){
        int saldoNovo = getSaldo() - valor;
        setSaldo(saldoNovo);
        return true;
    } 
    else
        return false;
}

void contaEspecial::setLimite(float limite){
    this->limite = limite;
}

float contaEspecial::getLimite(){
    return limite;
}