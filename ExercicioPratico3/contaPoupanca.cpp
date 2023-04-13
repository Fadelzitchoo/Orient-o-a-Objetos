#include "contaPoupanca.hpp"

contaPoupanca::contaPoupanca(Titular titular, int numeroConta, float saldo) : contaBancaria(titular, numeroConta, saldo) {}

float contaPoupanca::calcularRendimentoMensal(float saldo) {
    float rendMes = saldo * taxaDejurosAnual / 12;
    return rendMes;
}

void contaPoupanca::modificarTaxaDeJuros(float novaTaxa) {
    taxaDejurosAnual = novaTaxa;
}

bool contaPoupanca::saque(float valor){
    float saldoRendido = getSaldo() + calcularRendimentoMensal(getSaldo());
    if(valor <= saldoRendido){
        float novoSaldo = getSaldo() - valor;
        setSaldo(novoSaldo);
        return true;
    }else
        return false;
}