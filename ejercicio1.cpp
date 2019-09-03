#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef float decimal;
decimal promedio(vector<decimal> &lista){
    decimal ponderado;
    ponderado=0.05*lista[0]+0.1*lista[1]+0.1*lista[2]+0.15*lista[3]+0.2*lista[4]+0.2*lista[5]+0.2*lista[6];
    return ponderado;}

void evento(int nota){
if (18<=nota && nota<=20)
cout<< "UD asistira al ACM-ICPC International Collegiate Programming Contest."<<endl;
if (17.99>=nota&&nota>=15)
cout<<"UD asistira al Imagine Cup."<<endl;
if(12<=nota && nota<=14.99)
cout<<"UD aisistira al Hackathon de Miraflores"<<endl;
if(nota<12)
cout<<"Necesita mejorar"<<endl;
}
void leerConsola(int x){
    int alumnos,PC1,PC2,PC3,PC4,Proyecto,E1,E2;
    decimal nota;
    vector<decimal> notas{0,0,0,0,0,0,0};
    for (int i=1;i<=x;i++){
      cout<<"Alumno numero "<<i<<"\n";
      do{
      cout<<"Practica 1: ";
      cin>>PC1;
      notas[0]=PC1;
      }while(0>PC1 || PC1>20);

       do{
     cout<<"Practica 2 : ";
      cin>>PC2;
      notas[1]=PC2;
      }while(0>PC2 || PC2>20);

      do{
      cout<<"Practica 3: ";
      cin>>PC3;
      notas[2]=PC3;
      }while(0>PC3 || PC3>20);
    
      do{
      cout<<"Practica 4: ";
      cin>>PC4;
      notas[3]=PC4;
      }while(0>PC4 || PC4>20);

      do{
      cout<<"Proyecto 1: ";
      cin>>Proyecto;
      notas[4]=Proyecto;
      }while(0>Proyecto || Proyecto>20);

      do{
      cout<<"Examen 1  : ";
      cin>>E1;
      notas[5]=E1;
      }while(0>E1 || E1>20);

      do{
      cout<<"Examen 2  : ";
      cin>>E2;
      notas[6]=E2;
      }while(0>E2 || E2>20);
      nota=promedio(notas);
      cout<<"Su promedio es "<<nota<<"\n";
      evento(nota);
      };
      
   
    }
int main(){int alumnos;
  do {
          cout << "Numero de alumnos ente 3 y 30:";
          cin >> alumnos;
      }while(alumnos<3||alumnos>30);
      leerConsola(alumnos);
  return 0;
}

