#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::to_string;
using std::endl;
using std::istringstream;

int SOAT(int numero)
{ string string = to_string(numero);

  if(string[4]%2==0)
      return 1;
  else
     return 0;
   
}
int CITV(int numero)
{ string string=to_string(numero);

  if(string[4]%2==0)
      return 1;
  else
     return 0;
   
}
int AUTORIZADO(int numero)
{ int junto;
  junto=numero%100;
  
  if(junto%3==0)
      return 1;
  else
     return 0;
   
}


int main()
{int numero_identificado; int soat;int citv;int autorizado;
 do{
   cout<<"Ingrese numero de 8 digitos para reconocimiento"<<endl;
   cin>>numero_identificado;
 }while(numero_identificado<11111111 ||numero_identificado>99999999);
 soat=SOAT(numero_identificado);
 citv=CITV(numero_identificado);
 autorizado=AUTORIZADO(numero_identificado);
 if(soat==1){cout<<"SOAT VIGENTE"<<endl;}
 else{cout<<"SOAT NO VIGENTE"<<endl;}
 if(citv==1){cout<<"CITV VIGENTE"<<endl;}
 else{cout<<"CITV NO VIGENTE"<<endl;}
 if(autorizado==1){cout<<"AUTORIZADO"<<endl;}
 else{cout<<"NO AUTORIZADO"<<endl;}
 
 
 
 return 0;
}

