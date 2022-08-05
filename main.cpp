#include <iostream>
#include <cstdlib>

using namespace std;
void juego(int,int,int,int,int,int,int,int,int,int);

int main(){
  int men,dif,op,intentos1,intentos2,intentos3,puntos1,puntos2,puntos3,bonus1,bonus2,bonus3;

  cout<<"menu \n 1)jugador \n 2)admin \n ->";
  cin>>men;
  switch (men)
{
   case 1:
      cout<<"nivel de dificultad \n 1)facil \n 2)medio \n 3)alto \n ->";
      cin>>dif;
      juego(dif,4,6,8,1,2,3,1,1,2);
   case 2:      
       cout<<"nivel de dificultad \n 1)facil \n 2)medio \n 3)alto \n ->";
      cin>>dif;
      cout<<"editar";
      cout<<"intentos dificultad 1 (usual 4)\n ->";
      cin>>intentos1;
      cout<<"intentos dificultad 2 (usual 6)\n ->";
      cin>>intentos2;
      cout<<"intentos dificultad 3 (usual 8)\n ->";
      cin>>intentos3; 
      cout<<"puntos dificultad 1 (usual 1)\n ->";
      cin>>puntos1;
      cout<<"puntos dificultad 2 (usual 2)\n ->";
      cin>>puntos2;
      cout<<"puntos dificultad 3 (usual 3)\n ->";
      cin>>puntos3;
      cout<<"bonus dificultad 1 (usual 1)\n ->";
      cin>>bonus1;
      cout<<"bonus dificultad 2 (usual 1)\n ->";
      cin>>bonus2;
      cout<<"bonus dificultad 3 (usual 1)\n ->";
      cin>>bonus3;
      juego(dif,intentos1,intentos2,intentos3,puntos1,puntos2,puntos3,bonus1,bonus2,bonus3);
   default:
    main();
  }
}


void juego(int dif,int intentos1,int intentos2,int intentos3,int puntos1,int puntos2,int puntos3,int bonus1,int bonus2,int bonus3){
    string palabras[3][4] = {{"fumo","come","pizza","pais"},{"banderines","aerolíneas","caracteres","antioquia"},{"absolutistas","astringentes","hamburgueseria","gramaticales"}};
  int errores,puntos = 0;
  string palabra;
  int nivel=dif;
  bool fin=false;
  palabra=palabras[nivel][rand() % 3];
    {
      switch (nivel)
    {
       case 1:
         cout<<"dificultad facil"<<endl;
         errores = 0;
          do
            {
              
              if(errores > intentos1){
                
              }else if(errores == 0){
                
                
              }else{
                
              }
            }while(intentos1 <1);
    
       case 2:
         cout<<"Dificultad media"<<endl;
         errores = 0;
          do
            {
              
            }while(intentos2 <1);
       case 3:
          errores = 0;
         cout<<"dificultad alta"<<endl;
          do
            {
              
            }while(intentos3 <1);
    }
}