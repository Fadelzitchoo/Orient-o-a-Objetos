#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Funcionario {
	protected:
		string nome;
		string matricula;
		double salario_base;
	public:
		Funcionario(string nome, string matricula, double salario_base) : nome(nome), matricula(matricula), salario_base(salario_base) {}
		virtual double calcularSalario() = 0;

};

class gerente : public Funcionario{
	public:
		gerente(string nome, string matricula, double salario_base) : Funcionario(nome, matricula, salario_base) {}
		double calcularSalario(){
			double salario = salario_base * 2;
			return salario;
		}
};

class assistente : public Funcionario{
	public:
		assistente(string nome, string matricula, double salario_base) : Funcionario(nome, matricula, salario_base) {}
		double calcularSalario(){
			return salario_base;
		}
};

class vendedor : public Funcionario{
	private:
		double comissao;
	public:
		vendedor(string nome, string matricula, double salario_base, double comissao) : Funcionario(nome, matricula, salario_base), comissao(comissao) {}
		double calcularSalario(){
			double salario = salario_base + comissao;
            return salario;
        }
};


int main(){
	gerente gerente1("Pessoa1", "show", 1500);
	assistente assistente1("Pessoa2", "show", 1500);
	vendedor vendedor1("Pessoa3", "show", 1500, 500);
	
    cout << gerente1.calcularSalario() << endl;
    cout << assistente1.calcularSalario() << endl;
    cout << vendedor1.calcularSalario() << endl;
    
    return 0;
}