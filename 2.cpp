#include <iostream> 
using namespace std;
int main(int argc, char*argv[])
{
 int total;
 cout << "Ingrese la cantidad de alumnos"<<endl;
 cin>>total;
 float aux,suma=0;
 for (int i = 0; i <total; i++)
 {
    cout << "ingrese las estaturas "<<(i+1)<<" : "<<endl;
    cin >> aux;
    suma+=aux;
 }
 cout<<"El promedio de estatura es: "<<(suma/total)<<endl;
 if ( aux < (suma/total))
 {
    cout << "Estos estan abajo del promedio: "<< aux <<endl;
 }
   else 
      cout<<"Estos estan arriba del promedio: "<< aux <<endl;
      
 }
