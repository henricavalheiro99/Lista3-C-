#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int dia;
	
	 do {
		
			cout << "Informe o digito da semana: ";
			cin >> dia;
	
		switch(dia){
			case 0: cout << "Saindo do programa";
			break;
			
			case 1: cout << "Domingo é final de semana\n";
			break;
			
			case 2: cout << "Segunda é dia útil\n";
			break;
			
			case 3: cout << "Terça é dia útil\n";
			break;
			
			case 4: cout << "Quarta é dia útil\n";
			break;
			
			case 5: cout << "Quinta é dia útil\n";
			break;
			
			case 6: cout << "Sexta é dia útil\n";
			break;
			
			case 7: cout << "Sabado é final de semana\n";
			break;
			
			default: cout <<"Informe um dia válido\n";
			break;
		}
		
	}while(dia !=0);
}
