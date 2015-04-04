#include <iostream>
#include <cmath>
using namespace std;

float suma(float lista[]){
	float s = 0;
	for (int i=0; i<10; i++){
		s = lista[i] + s;
	}
	return s;
}

float ave(float lista[]){
	float average = lista[0], res;
	for (int i=1; i<10; i++){
		average = lista[i] + average;
	}
	res = average / 10;
	return res;
}

float sd (float pres,float lista[]){
	float prom [10],promedio,res;
	for (int i=0; i<10; i++){
		prom[i]= pres - lista [i];
	}
	promedio = pow (prom [0],2);
	for (int i=1; i<10; i++){
		promedio = pow (prom [i],2) + promedio;
	}
	res = promedio /10;
	return res;
}

int main(){
	float list[10], promed;
	cout << "Ingresa 10 numeros: ";
	for (int i=0; i<10; i++){
	cin >> list[i];
	}
	promed = ave(list);
	cout << "La suma es: " << suma(list) << endl;
	cout << "El promedio es: " << promed << endl;
	cout << "La desviación standar es: " << sd(promed, list) << endl;
return 0;
}
