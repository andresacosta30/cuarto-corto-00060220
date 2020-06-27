#include <iostream>
using namespace std;
 //Función que nos da el Promedio
float promedio(float nota1,float nota2, float nota3,float nota4, float nota5)
	{float Promedio;
	Promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	return (Promedio);
	} 
int main()
{float nota1, nota2, nota3,nota4,nota5, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos:";
cin>>n;
//de acuerdo a la cantidad de alumnos ingresada, usted metera el dato de sus 5 notas a evaluar.
for (i=1;i<=n;i++)
	{cout<<"Ingrese nota 1: "<<endl;
	cin>>nota1;
	cout<<"Ingrese nota 2: "<<endl;
	cin>>nota2;
	cout<<"Ingrese nota 3: "<<endl;
	cin>>nota3;
    cout<<"Ingrese nota 4: "<<endl;
	cin>>nota4;
    cout<<"Ingrese nota 5: "<<endl;
	cin>>nota5;
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);
    cout <<"Nota final: "<<notafinal<<endl;
	//cabe recalcar que en mi colegio se aprueba con 7 como nota minima por eso he puesto eso como nota minima 
	if (notafinal >= 7)
	{cout<<"El alumno aprobo."<<endl;}
	else
	cout<<"El alumno reprobo."<<endl;}
}