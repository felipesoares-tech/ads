#include <iostream>
using namespace std;

bool primo(int num){
	for(int i = 1,cont=0; i<=num; i++){
		if(num%i == 0)
			cont++;
				
		if(cont>2 || num == 1)
			return false;
	}
	return true;
}
	
int main(int argc, char *argv[]){
	int valor;
	cin >> valor;
	
	if(primo(valor))
		cout << "eh um numero primo" << endl;
	else
		cout << "nao eh um numero primo" << endl;
			
		
	return 0;
}

