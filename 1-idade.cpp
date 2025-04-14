#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << "Olá! Insira a sua idade: " << endl;
    int idade = 0;
    cin >> idade;
    
    cout << "Você tem "
    << idade
    << " anos! "
    << endl;
    
    return 0;
}
