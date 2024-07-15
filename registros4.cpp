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
        cout<<"Ingrese el nombre del atleta #"<<i+1<<": ";
        getline(cin, A[i].nombre);

        cout<<"Ingrese el pais del atleta #"<<i+1<<": ";
        getline(cin, A[i].pais);

        cout<<"Ingrese la disciplina del atleta #"<<i+1<<": ";
        getline(cin, A[i].disciplina);

        cout<<"Ingrese el numero de medallas del atleta #"<<i+1<<": ";
        cin>>A[i].nmedallas;
    }
    return 0;
}
