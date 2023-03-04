#include <iostream>

using namespace std;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	string l;
	
	cout << "Informe a letra: ";
	cin >> l;
	
	if (l == "a" or l == "e" or l == "i" or l == "o" or l == "u") {
		cout << "Sua letra é vogal";
	}else {
		cout << "Sua letra é consoante";
	}
}

