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
			
			case 1: cout << "Domingo ? final de semana\n";
			break;
			
			case 2: cout << "Segunda ? dia ?til\n";
			break;
			
			case 3: cout << "Ter?a ? dia ?til\n";
			break;
			
			case 4: cout << "Quarta ? dia ?til\n";
			break;
			
			case 5: cout << "Quinta ? dia ?til\n";
			break;
			
			case 6: cout << "Sexta ? dia ?til\n";
			break;
			
			case 7: cout << "Sabado ? final de semana\n";
			break;
			
			default: cout <<"Informe um dia v?lido\n";
			break;
		}
		
	}while(dia !=0);
}
