#include <iostream>
using namespace std;

int main(){
	int a[5], b[5], c[5];
	
    for (int i=0; i<5; i++){
    	cout << "Informe os valores do vetor A: ";
    	cin >> a[i];
	}
	for (int i=0; i<5; i++){
    	cout << "Informe os valores do vetor B: ";
    	cin >> b[i];
	}
	
	cout << "Soma dos vetores: "<< endl;
	
	for (int i=0; i<5; i++){
    	c[i]=a[i]+b[i];
    	cout << c[i] << " ";
	}
	
    return 0;
}
