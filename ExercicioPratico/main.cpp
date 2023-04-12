#include<iostream>
#include<vector>

#include"disciplina.hpp"
#include"professor.hpp"
#include"aluno.hpp"

using namespace std;

int main(){

    Professor professor1;
    Aluno aluno1;

    professor1.setNome("Fallen");
    professor1.setRa(248);
    aluno1.setNomeAluno("Show");
    aluno1.setRaAluno(233);

    cout << "Teacher: " << professor1.getNome() << endl;
    cout << "Number: " << professor1.getRa() << endl;

    cout << "\nAluno: " << aluno1.getNomeAluno() << endl;
    cout << "Number: " << aluno1.getRaAluno() << endl;

    system("PAUSE");

    return 0;
}