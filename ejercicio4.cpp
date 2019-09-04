#include<iostream>
#include <string>
using std::cout;
using std::cin;
using std::to_string;


void precio(float pe,char cl)
{
 if(pe==1 && cl=='N' )
 cout<<"Monto a pagar es 212.0\n ";
 if(pe==1 && cl=='n')
 cout<<"Monto a pagar es 212.0\n ";
 if(pe==1 && cl=='S')
 cout<<"Monto a pagar es " + to_string(212-(212*0.20));
 if(pe==1 && cl=='s')
 cout<<"Monto a pagar es " + to_string(212-(212*0.20));
 if(pe==2 && cl=='N')
 cout<<"Monto a pagar es 170.0\n ";
 if(pe==2 && cl=='n')
 cout<<"Monto a pagar es 170.0\n ";
 if(pe==2 && cl=='S')
 cout<<"Monto a pagar es " + to_string(170-(170*0.20));
 if(pe==2 && cl=='s')
 cout<<"Monto a pagar es " + to_string(170-(170*0.20));
 if(pe==3 && cl=='N')
 cout<<"Monto a pagar es 136.0\n ";
 if(pe==3 && cl=='n')
 cout<<"Monto a pagar es 136.0\n ";
 if(pe==3 && cl=='S')
 cout<<"Monto a pagar es " + to_string(136-(136*0.20));
 if(pe==3 && cl=='s')
 cout<<"Monto a pagar es " + to_string(136-(136*0.20));
 if(pe==4 && cl=='N')
 cout<<"Monto a pagar es 59.0\n ";
 if(pe==4 && cl=='n')
 cout<<"Monto a pagar es 59.0\n ";
 if(pe==4 && cl=='S')
 cout<<"Monto a pagar es " + to_string(59-(59*0.20));
 if(pe==4 && cl=='s')
 cout<<"Monto a pagar es " + to_string(59-(59*0.20));
}


int main()
{ float tipo_entrada; 
 char claro;
 do{
 cout<<"Tipo de entradas\n";
 cout<<"1.Super vip precio 212\n";
 cout<<"2.Vip precio 170\n";
 cout<<"3.Preferencial precio 136\n";
 cout<<"4.General precio 59\n";
 cout<<"Seleccione tipo de entrada: \n";
 cin>>tipo_entrada;
 }while(tipo_entrada<1 || tipo_entrada>4);
 do{
 cout<<" Es cliente de Claro<S,s,N,n \n";
 cin>>claro;
 }while(claro != 'S' && claro != 's' && claro != 'N' && claro != 'n' );
 precio(tipo_entrada,claro);
return 0;}
