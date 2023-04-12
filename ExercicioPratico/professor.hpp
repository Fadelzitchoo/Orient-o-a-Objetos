#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include<string>
using namespace std;

class Professor {
    private:                                //Atributos 
        string nome;
        int ra;
    public:                                 //metodos
        void setNome(string nomep);
        string getNome();

        void setRa(int rap);
        int getRa();
};

#endif
