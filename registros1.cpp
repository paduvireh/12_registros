#include <iostream>
#include <string>
using namespace std;

struct empleado{
	string nombre;
	char sexo;
	float sueldo;
};

int main(){
	int n;
	cout<<"Ingrese el numero de empleados: "; cin>>n;
	empleado E[n];
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el nombre del empleado "<<i+1<<": ";	
		cin.ignore();
		getline(cin, E[i].nombre);
	
		cout<<"Ingrese el sexo del empleado "<<i+1<<" (M/F): ";
		cin>>E[i].sexo;
	
		cout<<"Ingrese el sueldo del empleado "<<i+1<<": ";
		cin>>E[i].sueldo;
	}
		
	int imax=0;
	
	for(int i=1; i<n; i++){
		if(E[i].sueldo>E[imax].sueldo)
			imax=i;	
	}
	cout<<endl;
	cout<<"MAYOR SUELDO: "<<E[imax].sueldo<<endl;

	return 0;
}
