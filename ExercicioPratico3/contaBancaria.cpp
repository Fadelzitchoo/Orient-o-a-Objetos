#include"contaBancaria.hpp"

contaBancaria::contaBancaria(Titular titular, int numeroConta, float saldo) : titular(titular), numeroConta(numeroConta), saldo(saldo) {}

void contaBancaria::setTitular(Titular titular){              
    this->titular = titular;
}

Titular contaBancaria::getTitular(){
    return titular;
}

void contaBancaria::setNumeroConta(int numero){
    numeroConta = numero;
}

int contaBancaria::getNumeroConta(){
    return numeroConta;
}

void contaBancaria::deposito(float valor){
    saldo = saldo + valor;
}

void contaBancaria::setSaldo(float valor){
    saldo = valor;
}

float contaBancaria::getSaldo(){
    return saldo;
}