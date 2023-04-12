#include "pessoa.hpp"

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(std::string nome){
    this->nome = nome;
}

Data Pessoa::getDataNascimento(){
    return dataNascimento;
}

void Pessoa::setDataNascimento(Data dataNascimento){
    this->dataNascimento = dataNascimento;
}
