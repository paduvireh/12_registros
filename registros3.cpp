#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombre;
    int dia;
    int mes;
    int ano;
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

        cout<<"Ingrese el dia de nacimiento de la persona #"<<i+1<<": ";
        cin>>P[i].dia;

        cout<<"Ingrese el mes de nacimiento de la persona #"<<i+1<<": ";
        cin>>P[i].mes;

        cout<<"Ingrese el ano de nacimiento de la persona #"<<i+1<<": ";
        cin>>P[i].ano;
    }
    
    int nmes;
    do{
		cout<<endl;
		cout<<"Ingrese un numero de mes para consultar: "; cin>>nmes;
    
		int c=0;    
	    for(int i=0; i<n; i++){
	        if(P[i].mes==nmes){
	            cout<<endl;
				cout<<" - Nombre: "<<P[i].nombre<<endl;
				cout<<" - Fecha de nacimiento: "<<P[i].dia<<" / "<<P[i].mes<<" / "<<P[i].ano<<endl;
	            c++;
		    }
	    } 
		if(c==0)
			cout<<"\n - No existen personas registradas que cumplan anos ese mes."<<endl;
			
	} while(nmes!=0);
        
    return 0;
}
