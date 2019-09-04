#include<iostream>

using std::cout;
using std::cin;

void imprimir(int n){
  int filas,columnas;
  for(filas=0;filas<n;filas++)
  {
    for(columnas=0;columnas<n;columnas++)
    {
      if (filas%2==0)
      {
        if(columnas%2==0)
          cout<<"#";
        else
           cout<<"@";
      }
      else
      { 
        if(columnas%2==0)
          cout<<"@";
        else
          cout<<"#";
       }
    
    }
    printf("\n");
  }
}

int main()
{ int n;
  cout<<"Ingrese el tamaño de la n:";
  cin>>n;
  imprimir(n);
}

