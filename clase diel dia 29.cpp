//Escriba un programa para indicar si el numero ingresado por el usuario es par
//and, or, not:: &&, II, !=
#include<iostream>

using namespace std;

int main(){
	int num1;
	
	cout<<"Ingrese un numero: ";
	cin>>num1;
	 
	 if( num1%2==0) {
	 	cout<<"El numero: "<<num1 << "es par"<<endl;
	 } else {
	 	 cout << num1 << " no es un numero par.\n";
	 }
	 
	
	return 0;
}