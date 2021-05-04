#include <iostream>
#include <stdio.h>

using namespace std;

int tam_cad(char c[]){
	int tam=0;
	while(c[tam]!='\0'){
		tam++;
	}
	return tam;

}

int potencia(int a,int b){
	int aux=a;
	if(b==0){return 1;}
	for(int i=0;i<b-1;i++){
		a=a*aux;
	}
	return a;

}

double cad_a_int(char cad[]){
	int tam=tam_cad(cad);
	double  con=0;
	int exp=0;
	for(int i=tam-1;i>=0;i--){
		
		if(cad[i]!=','){con+=potencia(10,exp++)*(cad[i] -'0');cout<<potencia(10,exp)<<endl; }
		else {con/=potencia(10,exp);exp=0;}
	}

	return con;	
			

	}

	


int main(){
	char cad[100] ={"344545642,874"};
	printf("%f\n",cad_a_int(cad));
	return 0;	
}