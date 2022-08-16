#include <iostream>

int main(int argc, char *argv[]){
	using namespace std;
		
	int sexo;
	float peso,altura,imc;
		
	cin >> sexo;
	cin >> peso;
	cin >> altura;
	imc = peso/(altura*altura);
		
	
	if(sexo == 1){
		if(imc < 20.7)
			cout << "Abaixo do peso" << endl;
		else if(imc >= 20.8 && imc <= 26.4)
			cout << "Peso ideal" << endl;
		else if(imc >= 26.5 && imc <= 27.8)
			cout << "Um pouco acima do peso" << endl;
		else if(imc >= 27.9 && imc <= 31.1)
			cout << "Acima do peso ideal" << endl;
		else
			cout << "Obeso" << endl;
		
	}else{
		if(imc < 19.1)
			cout << "Abaixo do peso" << endl;
		else if(imc >= 19.1 && imc <= 25.8)
			cout << "Peso ideal" << endl;
		else if(imc >= 25.9 && imc <= 27.3)
			cout << "Um pouco acima do peso" << endl;
		else if(imc >= 27.4 && imc <= 32.3)
			cout << "Acima do peso ideal" << endl;
		else
			cout << "Obeso" << endl;
	}
	
	return 0;
}
