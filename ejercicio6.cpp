#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int datos(){int x;
  cout<<"Ingresa el numero de datos que desees: ";
  cin>>x;
  return x;
}
vector<float> leerConsola(int x){ int x_variable; vector<float>vector;
  
  for(int i=1;i<=x;i++){
   cout<<"x"+to_string(i)<<"= ";
   cin>>x_variable;
   vector.push_back(x_variable);
  }
   return vector;
  }
float suma_cuadrados(vector<float>vector){float suma1=0.0;
  for(auto i:vector)
  {
    i=i*i;
    suma1=suma1+i;
  }
  return suma1;
}
  
float suma(vector<float>vector){float suma2=0.0;
  for (auto i:vector)
    suma2=suma2+i;
  return suma2;
}
float desviacion_estandar(float suma1,float suma2, int dato, vector<float>vector){ float DE; float resta;
  suma2=suma2/dato;
  suma1=suma1/dato;
  suma1=pow(suma1,2);
  resta=suma2-suma1;
  DE= pow(resta,0.5);
  return DE;

}
int main() {int dato1; vector<float> vector; float suma1; float suma2;
  dato1=datos();
  vector=leerConsola(dato1);
  suma1=suma(vector);
  suma2=suma_cuadrados(vector);
  cout<<"sd: "<<desviacion_estandar(suma1,suma2,dato1,vector);
  return 0;
}
