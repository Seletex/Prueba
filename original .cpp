#include <iostream>
using namespace std;


struct nodo { 
  string palabra;
  int letras;
  bool fin;
  int puntos_ganar;
  int puntos_bonus;
  int intentos;
  nodo *sig;
};

void menu1();
void jugar();
void admi();

int main() {
  menu1();
}

void menu1(){
  int n;
  cout<<"   Menu de inicial"<<endl;
  cout<<"   Jugador                          1"<<endl;
  cout<<"   Admi                             2"<<endl;
  cout<<"   Ingrese el numero: ";
  cin>>n;
  if(n==1){
    jugar();
  }
  else if(n==2){
    admi();
  }
  else{
    menu1();
  }
}

void jugar(){
  int nivel;
  cout<<"   selecciona el nivel de juego"<<endl;
  cout<<endl;
  cout<<"   Nivel                       Escribe"<<endl;
  cout<<endl;
  cout<<"   Facil                            1"<<endl;
  cout<<"   Medio                            2"<<endl;
  cout<<"   Muy Dificil                      3"<<endl;
  cout<<endl;
  cout<<"   Ingresa el Nivel: ";
  cin>>nivel;
}

void admi(){
  
}