#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    
    cout << "Olá, vamos fazer o cálculo da média de suas notas!" 
    << " \n "
    << endl;
    
    cout << "Digite sua nota do primeiro bimestre: " << endl;
   float nota1 = 0;
    cin >> nota1;
    
     cout << "Digite sua nota do segundo bimestre: " << endl;
    float nota2 = 0;
    cin >> nota2;
    
     cout << "Digite sua nota do terceiro bimestre: " << endl;
    float nota3 = 0;
    cin >> nota3;
    
     cout << "Digite sua nota do quarto bimestre: "
     << endl;
    float nota4 = 0;
    cin >> nota4;
    
    double media = (nota1 + nota2 + nota3 + nota4) / 4;
    cout << "A média das suas notas é: " << media;

    return 0;
}


4 - SALARIO COM DESCONTO

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
