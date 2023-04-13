#include"contaSimples.hpp"

contaSimples::contaSimples(Titular titular, int numeroConta, float saldo) : contaBancaria(titular, numeroConta, saldo) {}

float contaSimples::pix(float valor){                                                                                         
    if(valor <= getSaldo()){
        float novoSaldo = getSaldo() - valor;
        setSaldo(novoSaldo);
        return valor; 
    }else
        return 0;
}

bool contaSimples::saque(float valor){
    if(valor <= getSaldo()){
        int saldoNovo = getSaldo() - valor;
        setSaldo(saldoNovo);
        return true;
    } else
        return false;
}                                      
