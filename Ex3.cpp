
#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	cout <<"Informe um n�mero: ";
	cin >> n;
	
	if(n >0){
		cout << "Seu n�mero � positivo";
	}
	
	if(n < 0){
		cout << "Seu n�mero � negativo";
	}
	
	if(n == 0){
		cout << "Seu n�mero � neutro";
	}
}
