#ifndef DATA_HPP
#define DATA_HPP

#include<ctime>
#include<string>

using namespace std;

class Data{
    private:
        int dia, mes, ano;
    public:
        Data();
        Data(int dia, int mes, int ano) : dia(dia), mes(mes), ano(ano) {}
        
        int getDia();                   //Metodos para Dia
        void setDia(int dia);

        int getMes();                   //Metodos para Mes
        void setMes(int mes);

        int getAno();                   //Metodos para Ano
        void setAno(int ano);
        
        string formatoCompacto();
        string formatoExtenso();

};

#endif