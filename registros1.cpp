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
		
	int imax=0, imin=0;
	
	for(int i=1; i<n; i++){
		if(E[i].sueldo>E[imax].sueldo)
			imax=i;	
		if(E[i].sueldo<E[imin].sueldo)
			imin=i;	
	}
	cout<<endl;
	cout<<"Empleado con mayor salario:"<<endl;
	cout<<"NOMBRE: "<<E[imax].nombre<<endl;
	cout<<"SEXO: "<<E[imax].sexo<<endl;
	cout<<"SUELDO: "<<E[imax].sueldo<<endl;

	cout<<endl;
	cout<<"Empleado con menor salario:"<<endl;
	cout<<"NOMBRE: "<<E[imin].nombre<<endl;
	cout<<"SEXO: "<<E[imin].sexo<<endl;
	cout<<"SUELDO: "<<E[imin].sueldo<<endl;

	return 0;
}
