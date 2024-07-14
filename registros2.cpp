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
	
	int may50=0, S=0;
	float prom=0;
	
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
		
		S=S+P[i].edad;
		prom=float(S)/n;
	}
	cout<<endl;
	cout<<"La cantidad de personas mayores a 50 anos es: "<<may50<<endl;
	cout<<"El promedio de edades es: "<<prom<<endl<<endl;

	cout<<"-------------------------------------------"<<endl<<endl;
	cout<<"     DATOS DE LAS PERSONAS INGRESADAS     "<<endl;
	for(int i=0; i<n; i++){	
		cout<<endl;
		cout<<"--------------- PERSONA #"<<i+1<<": ---------------"<<endl<<endl;
		cout<<" - Nombre: "<<P[i].nombre<<endl;
		cout<<" - DNI: "<<P[i].DNI<<endl;
		cout<<" - Edad: "<<P[i].edad<<endl;
	}
	cout<<endl;
	cout<<"-------------------------------------------"<<endl<<endl;
	
	return 0;
}
