#include <iostream>

using namespace std;


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num;
	
	do {
		
		cout << "Informe um numero entre 1 e 3: ";
		cin >> num;
	
		switch(num){
			
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "turno da manhã\n";
			break;
			
			case 2: cout << "turno da tarde\n";
			break;
			
			case 3: cout << "turno da noite\n";
			break;
		}
	}while (num !=0);
}
