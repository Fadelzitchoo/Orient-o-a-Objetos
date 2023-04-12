#include "aluno.hpp"

using namespace std;
#include<string>

void Aluno::setNomeAluno(string nomeP){
    nome = nomeP;
}

string Aluno::getNomeAluno(){
    return nome;
}

void Aluno::setRaAluno(int raP){
    ra = raP;
}

int Aluno::getRaAluno(){
    return ra;
}
