#ifndef TITULAR_HPP
#define TITULAR_HPP

#include<string>

using namespace std;

class Titular{
    private:
        string nome;
        int long long cpf;
    public:
        void setNome(string nome);
        void setCpf(int long long cpf);

        string getNome();
        int long long getCpf();
};


#endif  