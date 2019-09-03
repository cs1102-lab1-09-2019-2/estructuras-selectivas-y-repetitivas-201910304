#include <iostream>

using namespace std;
int leerConsola(){char tipo;int cantidad;int extra;int monto;
  do{
    cout<<"ingresa tu tipo de seguro:"<<endl;
    cin>>tipo;}
    while(tipo!='A'&& tipo!='B'&& tipo!='C'&& tipo!='D');
  do{
    cout<<"Cantidad de asegurados: "<<endl;
    cin>>cantidad;
  }while(cantidad <0);
  
  switch(tipo){
   case 'A': 
      if(cantidad>8){
        extra=cantidad-8;
        monto=40+ (extra*7);
      }
      else monto=40;
      break;
   case 'B':
      if(cantidad>6){
        extra=cantidad-6;
        monto=30+ (extra*7);
      }
      else monto=30;
      break;
                  
   case 'C':
      if(cantidad>4){
        extra=cantidad-4;
        monto=20+ (extra*3);
      }
      else monto=20;
      break;
   case 'D':
      if(cantidad>2){
        extra=cantidad-2;
        monto=10+ (extra*3);
      }
      else monto=10;
      break;
  }
  return monto;
}




int main() {
  int xd=leerConsola();
  cout<<xd;
  return 0;
}
