#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
    
    // inicializo las variables
    
    int numValor,numPlayer, puntos=0; 
    int bandera=0 //bandera para salir del ciclo while del juego. 
    char opc='a'; //bandera para salir del ciclo while del sistema.

    do{
        //genero un numero aleatorio entre 0 y 1000.
        srand(time(NULL));
        numValor= 0+rand()%(1000+1-0); //variable= limite inferior + rand()%(limite superior +1-limite inferior)

        do{
            printf("ingrese un numero:");// pido numero al usuario.
            fflush(stdin);//limpio el buffer.
            scanf("%d",&numPlayer);// escaneo y gaurdo.
            
            //verifico si el numero ingresado es mayo, menor o igual.
            
            if(numPlayer > numValor ){
                printf("\nsu numero es mayor\n!!!");

            }else
                if(numPlayer < numValor){
                    printf("su numero es menor\n!!!");

                }else
                        if(numPlayer == numValor){
                            printf("Felicitaciones el numero correcto es:%d\n",numValor);
                            puntos++;
                            bandera = 1;
                        }
                        system("pause");
                        system("cls");


        }while(bandera != 1);
        bandera=0;
        printf("sus aciertos son:%d\n", puntos);
        printf("desea seguir jugando?, precione N para terminar\n");
        fflush(stdin);
        scanf("%c",&opc);
        system("cls");

    }while(opc != 'n');
}
