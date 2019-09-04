#include<iostream>
#include<vector>
using std::cout;
using std::cin;
using std::vector;
using std::ostream;

int numeros(int g){
  vector<int>mayores;
  int mayor = 0;
  int indice;
  for(int rango=0;rango<g;rango++)
  {
    cout<<"Agregue: ";
    cin>>indice;
    mayores.push_back(indice);
  }
  
  for(auto i:mayores)
  {
    if(i>mayor)
    {
    mayor=i;
    }
  }
  return mayor;
}

int main()
{ 
  int n;
  cout<<"Ingrese la n:";
  cin>>n;
  int mayor_de_la_lista=numeros(n);
  cout<<"El número mayor es: " << mayor_de_la_lista<<"\n";
}
