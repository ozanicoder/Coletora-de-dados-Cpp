#include<iostream>
using namespace std;

int main(){
    string nm, adrs;
    int id, num;

    cout<<"Insira o nome completo:\n";
    /*std::*/getline(cin,nm);
    cout<<"Insira a idade:\n";
    cin>>id;
    cout<<"insira a sua morada:\n";
    /*std::*/getline (cin >>/*std::*/ws,adrs);
    cout<<"Insira o seu numero telefonico:\n";
    cin>>num;

    cout<<"Nome: "<<nm<<endl<<"Idade: "<<id<<endl<<"Telefone: "<<num<<endl<<"Endereço: "<<adrs;

    return 0;
}
