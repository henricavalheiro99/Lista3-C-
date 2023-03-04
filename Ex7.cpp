#include <iostream>

using namespace std;

int main() {
	setlocale (LC_ALL,"Portuguese");
	
    char c;
    
    cout << "Digite um caractere: ";
    cin >> c;
    
    if (c >= 'A' && c <= 'Z') {
        cout << "O caractere digitado e uma letra maiuscula\n";
        
    } else if (c >= 'a' && c <= 'z') {
        cout << "O caractere digitado e uma letra minuscula\n";
    } else if (c >= '0' && c <= '9') {
        cout << "O caractere digitado e um numero\n";
    } else {
        cout << "O caractere digitado é um caractere especial\n";
    }
    
    
}
