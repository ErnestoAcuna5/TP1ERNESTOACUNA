/*Un colegio desea saber que porcentaje de ni�os y que porcentaje de ni�as hay en el curso actual. Dise�ar un programa para este proposito.
Recuerda que para calcular el porcentaje puedes hacer una regla de 3 simple. El programa debe solicitar al usuario que ingrese la cantidad
total de ni�os y la cantidad total de ni�as que hay en el curso.*/
#include <iostream>
using namespace std;
int main(){
	float hombres,mujeres,total,porchombres=0,porcmujeres=0;
	
	cout<<"Ingrese la cantidad de hombres en el curso: "; cin>>hombres;
	cout<<"Ingrese la cantidad de mujeres en el curso: "; cin>>mujeres;
	
	total=hombres+mujeres;
	porchombres=hombres*100/total;
	porcmujeres=mujeres*100/total;
	
	cout<<"\n\n//El total de alumnos es: "<<total<<", de los cuales el "<<porchombres<<"% de ellos son hombres\n y el "<<porcmujeres<<"% es mujer.//";
	
	return 0;
}
