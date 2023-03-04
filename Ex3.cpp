
#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	
	cout <<"Informe um número: ";
	cin >> n;
	
	if(n >0){
		cout << "Seu número é positivo";
	}
	
	if(n < 0){
		cout << "Seu número é negativo";
	}
	
	if(n == 0){
		cout << "Seu número é neutro";
	}
}
