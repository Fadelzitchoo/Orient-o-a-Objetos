#include"titular.hpp"


void Titular::setNome(string nome){
    this->nome = nome;
}

void Titular::setCpf(int long long cpf){
    this->cpf = cpf;
}

Titular Titular::operator+(const string& pessoa){
    return Titular(nome + ", " + pessoa, cpf);
}

string Titular::getNome(){
    return nome;
}

int long long Titular::getCpf(){
    return cpf;
}