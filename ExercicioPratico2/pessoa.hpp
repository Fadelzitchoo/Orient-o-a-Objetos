#ifndef PESSOA_HPP
#define PESSOA_HPP

#include "data.hpp"
#include <string>

using namespace std;

class Pessoa {
    private:
        string nome;
        Data dataNascimento;
        const long long int cpf;
    public:
        Pessoa(const long long int cpf, string nome, Data dataNascimento): cpf(cpf), nome(nome), dataNascimento(dataNascimento) {}
        Pessoa(const long long int cpf) : cpf(cpf) {}

        string getNome();
        void setNome(string nome);

        Data getDataNascimento();
        void setDataNascimento(Data dataNascimento);

        long long int getCpf() const { return cpf; } // alterado para long long int
};

#endif
