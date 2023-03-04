#include <iostream>

using namespace std;

main (){
	setlocale(LC_ALL,"Portuguese");
	
	int num, qtd;	
	
	cout << "informe o numero entre 1 e 10 para tabuada: ";
	cin >> num;
	
	cout << "informe até quantos numeros é pra ir: ";
	cin >> qtd;
	
	for (int x = 0; x <= qtd; x++){
		cout << 10 << "x" << x << "=" << 10 * x << endl;
}
}
