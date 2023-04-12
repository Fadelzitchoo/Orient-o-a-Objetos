#include<iostream>
#include<vector>
#include"data.hpp"
#include"pessoa.hpp"

using namespace std;

void comandosBasicos(){                                                 //Função para imprimir os comandos basicos e não poluir a main()
    cout << "Para cadastrar uma pessoa digite 'cad' " << endl;
    cout << "Para consultar uma pessoa digite 'con' " << endl;
    cout << "Para remover uma pessoa digite   'rem' " << endl;
    cout << "Para finalizar o programa digite 'fim' \n" << endl;
}

void encontrarPessoa(vector<Pessoa> &listaPessoa, long long int cpf){
    int tamLista = listaPessoa.size(), i;
    bool naoEnc = false;
    for (i = 0; i < tamLista; i++)
    {
        Pessoa pessoaY = listaPessoa.at(i);
        Data pessoaNas= pessoaY.getDataNascimento();
        if(pessoaY.getCpf() == cpf)
        {
            cout << "O cpf: " << pessoaY.getCpf() << endl;
            cout << "Possuindo nome: " << pessoaY.getNome() <<endl;
            cout << "Nascido(a) em: " << pessoaNas.formatoExtenso() << endl;
            naoEnc = true;  
        }
    }
    if(!naoEnc){
        cout << "CPF nao encontrado: " << endl;
    }

    system("pause");
}

vector<Pessoa> removerPessoa(vector<Pessoa>& listaPessoa, long long int cpf) {
    vector<Pessoa> novaLista;
    int i, tamLista = listaPessoa.size();
    
    for (i = 0; i < tamLista; i++)
    {
        Pessoa pessoaY = listaPessoa.at(i);
        if(pessoaY.getCpf() == cpf)
        {
            cout << "CPF encontrado" << endl;
        }
        else
        {
            novaLista.push_back(pessoaY);
        }
    }
    cout << "CPF removido com sucesso0" << endl;
    return novaLista;
}

int main(){

    bool stateProgam = true;
    string comando, nomeX;

    vector<Pessoa> listaPessoa;
    int diaX, mesX, anoX;
    long long int cpfX;

    while (stateProgam)
    {
        comandosBasicos();

        cin >> comando;
        if(comando == "cad"){
            cout << "\nDigite o Cpf da pessoa: " << endl;
            cin >> cpfX;
            cin.ignore();
            Pessoa pessoaX(cpfX);

            cout << "\nDigite o Nome da pessoa: " << endl;
            getline(cin, nomeX);
            pessoaX.setNome(nomeX);

            cout << "\nDigite o Dia de nascimento da pessoa: " << endl;
            cin >> diaX;
            cout << "\nDigite o Mes de nascimento da pessoa: " << endl;
            cin >> mesX;
            cout << "\nDigite o Ano de nascimento da pessoa: " << endl;
            cin >> anoX;
            Data dataX(diaX, mesX, anoX);
            pessoaX.setDataNascimento(dataX);

            listaPessoa.push_back(pessoaX);
        }   
        if(comando == "con"){
            cout << "\nDigite o cpf da pessoa que deseja consultar:" << endl;
            cin >> cpfX;
            encontrarPessoa(listaPessoa, cpfX);
        }
        if(comando == "rem"){
            cout << "\nDigite o cpf da pessoa que deseja remover:" << endl;
            cin >> cpfX;
            listaPessoa = removerPessoa(listaPessoa, cpfX);
            system("pause");
        }
        if(comando == "fim"){
            stateProgam = false;
        }
        system("cls||clear");
    }
    

    return 0;
}