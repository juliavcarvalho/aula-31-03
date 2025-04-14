#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    
    cout << "Olá! Por favor, digite sua idade: " << endl;
    
    int idade = 0;
    cin >> idade;
    int data = 2025 - idade;
    
    cout << "Seu ano de nascimento é: " << data;
    
    return 0;
}
