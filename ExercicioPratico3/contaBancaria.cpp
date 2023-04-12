#include"contaBancaria.hpp"

void contaBancaria::setTitular(std::string nome){                   //TESTAR O FUNCIONAMENTO DISSO
    titular.setNome(nome);
}

std::string contaBancaria::getTitular(){
    return titular.getNome();
}

void contaBancaria::deposito(float valor){
    saldo = saldo + valor;
}

float contaBancaria::getSaldo(){
    return saldo;
}

float contaBancaria::saque(float valor) {
    if (valor <= saldo) {
        saldo -= valor;                             //sobrecarga
        return saldo;
    }
    return -1;
}