#include"contaBancaria.hpp"

contaBancaria::contaBancaria(std::string nome, long long int cpf, int numeroConta, float saldo){
    this->titular = titular(nome, cpf);
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

void contaBancaria::setTitular(std::string nome){              
    titular.setNome(nome);
}

std::string contaBancaria::getTitular(){
    return titular.getNome();
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

float contaBancaria::getSaldo(){
    return saldo;
}

float contaBancaria::saque(float valor) {
    if (valor <= saldo) {
        saldo -= valor;                                             //sobrecarga
        return saldo;
    }
    return -1;
}