/*Escribir un programa que calcule el volumen de un cilindro. Para ello se deber� solicitar al usuario que ingrese el radio y la altura/ErnestoAcuna
Mostrar el resultado en pantalla*/
#include <iostream>
using namespace std;
int main(){
	int rc,ac;
	float volumen=0;
	cout<<"Ingrese el radio del cilindro:"<<endl; cin>>rc;
	cout<<"\nIngrese la altura del cilindro:"<<endl; cin>>ac;
	
	volumen=3.1415*rc*rc*ac;
	cout<<"EL VOLUMEN DEL CILINDRO ES:\n\t"<<volumen;
	
	return 0;
}
