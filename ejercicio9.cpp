#include <iostream>
#include <vector>
#include<string>
using namespace std;
typedef float decimal;

vector<int> leerConsola(string girl) {int p; int t; vector<int>datos;
do{
cout<<"Escribe los puntos del problema que "<< girl<<"resolvio: " ;
cin>> p;
} while (p<=200 || p>=3500);

do{
cout<<"Tiempo en minutos que demoro "<<girl<<" en resolver el problema: " ;
cin>> t;
} while (t<0 || t>180);
datos.push_back(p);
datos.push_back(t);
return datos;
}

decimal ecuacion(int p, int t){decimal PF; int parte_entera; decimal parte_decimal;decimal real_num;int size;
size= to_string(p).size();

parte_entera= 0.3*p;
parte_decimal= p/(size);
real_num=(decimal)parte_entera+parte_decimal;
PF=real_num - (p*t)/250;
return PF;}

decimal chicas(string girl){ vector<int> x; int p; int t;
x=leerConsola(girl);
p=x[0];
t=x[1];
return ecuacion(p,t);
}

int main(){
  decimal A=chicas("Alessia ");
  decimal J=chicas("Jasmin ");
  if(A==J)
  cout<<"Empate";
  if(A<J)
  cout<<"Jasmin";
  if(A>J)
  cout<<"Alessia";
  return 0;
}                                                                   
                                                                                  
                                                                                  

}
int main() {int dato1; vector<float> vector; float suma1; float suma2;
  dato1=datos();
  vector=leerConsola(dato1);
  suma1=suma(vector);
  suma2=suma_cuadrados(vector);
  cout<<"sd: "<<desviacion_estandar(suma1,suma2,dato1,vector);
  return 0;
}
