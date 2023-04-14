#include "contaPoupanca.hpp"

contaPoupanca::contaPoupanca(Titular titular, int numeroConta, float saldo) : contaBancaria(titular, numeroConta, saldo) {}
                                                                                                                            //Rendimento mensal = rendimentoAnul/12
float contaPoupanca::calcularRendimentoMensal(float saldo) {                                                                //Rendimento é dado por saldo * a taxa de juros mensal
    float rendMes = saldo * taxaDejurosAnual / 12;
    return rendMes;
}

void contaPoupanca::modificarTaxaDeJuros(float novaTaxa) {
    taxaDejurosAnual = novaTaxa;
}

float contaPoupanca::pix(float valor){                                                                                         
    if(valor <= getSaldo()){
        float novoSaldo = getSaldo() - valor;
        setSaldo(novoSaldo);
        return valor; 
    }else
        return 0;
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

contaPoupanca::~contaPoupanca(){
    setSaldo(0);                                                                                                    //Quando a conta é desativada o dinheiro acaba some, >:( 
}