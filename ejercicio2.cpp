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
        if(columnas==filas || columnas==0 || columnas==n-1 ||filas==0 || filas==n-1)
          cout<<"*";
        else
           cout<<" ";
      }
      else
      { 
        if(columnas==filas || columnas==0 || columnas==n-1 ||filas==0 || filas==n-1)
          cout<<"*";
        else
          cout<<" ";
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
  return 0;
}
