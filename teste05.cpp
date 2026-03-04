#include <iostream>
using namespace std;

int main(){
	int a, cont=0;
	
	cout<< "insira um Nº inteiro: ";
	cin>> a;
	
	if(a>0){
	    for (int i=a; i>0; i--){
	    	cont=cont+i;
		}
	} else{
		for (int i=a; i<0; i++){
	    	cont=cont+i;
		}
	}

	cout<< cont<< endl;
	
    return 0;
}
