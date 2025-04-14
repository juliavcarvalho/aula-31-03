#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Olá! Por favor, digite seu salário: " << endl;
    double salario = 0;
    cin >> salario;

    double desconto = salario * 8 / 100;
    double salario_descontado = salario - desconto;


    cout << "Seu salário bruto é de: "
    << "R$ " 
    << salario 
    << " \n "
    << endl; 
    

    cout << "O desconto de 8% é de: " 
    << "R$ " 
    << desconto 
    << " \n "
    << endl;

    cout << "Seu salário líquido é de: " 
    << "R$ " 
    << salario_descontado
    << " \n "
    << endl;

    return 0;
}
