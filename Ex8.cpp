#include <iostream>

using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	
	float t, f, KouF;
	
	cout<< "Insira a temperatura: ";
	cin>> t;
	
	cout<<"escolha o sistema ultilizado: \n";
	cout<<"digite 1 para Fahrenheit\n";
	cout<<"digite 2 para Kelvin\n";
	cin>> KouF;
	
	if(KouF==1){
		f = t*1.8+ 32;
		cout<<f<<"ºF";
	}else{
		cout<<t-273<<"ºK";
	}
}
	
