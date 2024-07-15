#include <iostream>
#include <string>
using namespace std;

struct atleta{
    string nombre;
    string pais;
    string disciplina;
    int nmedallas;
};

int main(){
    int n;
    cout<<"Ingrese el numero de atletas: "; cin>>n;
    atleta A[n];    
	cin.ignore(); 

    for(int i=0; i<n; i++) {
        cout<<endl;
		cout<<"Ingrese el nombre del atleta #"<<i+1<<": ";
        getline(cin, A[i].nombre);

        cout<<"Ingrese el pais del atleta #"<<i+1<<": ";
        getline(cin, A[i].pais);

        cout<<"Ingrese la disciplina del atleta #"<<i+1<<": ";
        getline(cin, A[i].disciplina);

        cout<<"Ingrese el numero de medallas del atleta #"<<i+1<<": ";
        cin>>A[i].nmedallas;
        cin.ignore();
    }
    
    string mpais;
    cout<<endl;
    cout<<"Ingrese el nombre del pais para consultar: ";
    getline(cin, mpais);

	cout<<endl;
	cout<<"----------- REGISTRO DE ATLETAS DE "<<mpais<<" -----------"<<endl<<endl;
	int c=0;
    for(int i=0; i<n; i++){
        if(A[i].pais==mpais){
            cout<<" - Nombre: "<<A[i].nombre<<endl;
            cout<<" - Disciplina: "<<A[i].disciplina<<endl;
            cout<<" - Numero de medallas: "<<A[i].nmedallas<<endl;
            cout<<endl;
		} else
			c=1;
	}
    
	int imax=0;
	for(int i=1; i<n; i++){
        if(A[i].pais==mpais){
			if(A[i].nmedallas>A[imax].nmedallas)
				imax=i;
		}
	}
	
	if(c==0){
		cout<<"---------------------------------------------------"<<endl;
    	cout<<"Atleta de "<<mpais<<" con mas medallas: "<< endl;
		cout<<A[imax].nombre<<endl;
		cout<<"---------------------------------------------------"<<endl;	
	} else
		cout<<"No existen atletas registrados de ese pais."<<endl;
    
    return 0;
}
