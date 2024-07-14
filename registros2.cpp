#include <iostream>
#include <string>
using namespace std;

struct persona{
	string nombre;
	int DNI;
	int edad;
};

int main(){
	int n;
	cout<<"Ingrese el numero de personas: "; cin>>n;
	persona P[n];
	
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"Ingrese el nombre de la persona #"<<i+1<<": ";	
		cin.ignore();
		getline(cin, P[i].nombre);
	
		cout<<"Ingrese el DNI de la persona #"<<i+1<<": ";
		cin>>P[i].DNI;
	
		cout<<"Ingrese la edad de la persona #"<<i+1<<": ";
		cin>>P[i].edad;
	}
	
	return 0;
}
