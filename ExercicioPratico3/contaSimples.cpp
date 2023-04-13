#include"contaSimples.hpp"

contaSimples::contaSimples(Titular titular, int numeroConta, float saldo) : contaBancaria(titular, numeroConta, saldo) {}

bool contaSimples::saque(float valor){
    if(valor <= getSaldo()){
        int saldoNovo = getSaldo() - valor;
        setSaldo(saldoNovo);
        return true;
    } else
        return false;
}                                      
