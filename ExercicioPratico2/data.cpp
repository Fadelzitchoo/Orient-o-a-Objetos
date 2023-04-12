#include "data.hpp"

Data::Data(){                                               //Construtor padrão, atribui o horario atual 
    time_t t = time(nullptr);
    tm* hoje = localtime(&t);
                
    dia = hoje->tm_mday;
    mes = (hoje->tm_mon + 1);
    ano = (hoje->tm_year + 1900);
}

int Data::getDia(){
    return dia;
}

void Data::setDia(int dia){
    this->dia = dia;
}

int Data::getMes(){
    return mes;
}

void Data::setMes(int mes){
    this->mes = mes;
}

int Data::getAno(){
    return ano;
}

void Data::setAno(int ano){
    this->ano = ano;
}

std::string Data::formatoCompacto(){
    std::string DataF;
    DataF = std::to_string(dia) + '/' + std::to_string(mes) + '/' + std::to_string(ano);     //Concatenar o dia, mes e ano e retornar todos juntos
    return DataF;
}

std::string NomeMes(int a){                                                                 //Pegar o numero do mes e trazer o nome do mes respectivo. Ex: Mes 2 = Fevereiro;
    switch (a)
    {
    case 1:
        return "Janeiro";
    case 2:
        return "Fevereiro";
    case 3:
        return "Março";
    case 4:
        return "Abril";
    case 5:
        return "Maio";
    case 6:
        return "Junho";
    case 7:
        return "Julho";
    case 8:
        return "Agosto";
    case 9:
        return "Setembro";
    case 10:
        return "Outubro";
    case 11:
        return "Novembro";
    case 12:
        return "Dezembro";
    default:
        return "Ocorreu um erro com o mes";
    }
}

std::string Data::formatoExtenso(){    
    std::string DataF;
    DataF = std::to_string(dia) + " De " + NomeMes(mes) + " de " + to_string(ano);
    return DataF;
}
