#include "contaPoupanca.hpp"

contaPoupanca::contaPoupanca(Titular titular, int numeroConta, float saldo, float taxaDeJurosAnual) : contaBancaria(titular, numeroConta, saldo), taxaDejurosAnual(taxaDejurosAnual) {}
