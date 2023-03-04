#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	do {
		
		cout << "Informe um numero entre 1 e 5: ";
		cin >> num;
	
		switch(num){
			
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "o numero 1 corresponde a nota A\n";
			break;
			
			case 2: cout << "o numero 2 corresponde a nota B\n";
			break;
			
			case 3: cout << "o numero 3 corresponde a nota C\n";
			break;
			
			case 4: cout << "o numero 4 corresponde a nota D\n";
			break;
			
			case 5: cout << "o numero 5 corresponde a nota F\n";
			break;
		
		}
	}while (num !=0);
	
}
