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
	
	int may50=0;
	
	for(int i=0; i<n; i++){
		cout<<endl;
		cout<<"Ingrese el nombre de la persona #"<<i+1<<": ";	
		cin.ignore();
		getline(cin, P[i].nombre);
	
		cout<<"Ingrese el DNI de la persona #"<<i+1<<": ";
		cin>>P[i].DNI;
	
		cout<<"Ingrese la edad de la persona #"<<i+1<<": ";
			cin>>P[i].edad;
				
		if(P[i].edad>50)
			may50++;
	}
	cout<<"La cantidad de personas mayores a 50 anos es: "<<may50<<endl;

	return 0;
}
