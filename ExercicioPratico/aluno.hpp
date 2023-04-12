#ifndef ALUNO_HPP
#define ALUNO_HPP

#include<string>
using namespace std;
        
class Aluno {
    private:                                //Atributos 
        string nome;
        int ra;
    public:                                 //metodos
        void setNomeAluno(string nomep);
        string getNomeAluno();

        void setRaAluno(int rap);
        int getRaAluno();
};

#endif