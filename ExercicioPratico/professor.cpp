#include "professor.hpp"

using namespace std;
#include<string>

void Professor::setNome(string nomeP){
    nome = nomeP;
}

string Professor::getNome(){
    return nome;
}

void Professor::setRa(int raP){
    ra = raP;
}

int Professor::getRa(){
    return ra;
}
