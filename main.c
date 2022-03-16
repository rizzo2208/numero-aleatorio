#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){

    int numValor,numPlayer, puntos=0, bandera=0 ;
    char opc='a';

    do{
        srand(time(NULL));
        numValor= 0+rand()%(1000+1-0); //variable= limite inferior + rand()%(limite superior +1-limite inferior)

        do{
            printf("ingrese un numero:");
            fflush(stdin);
            scanf("%d",&numPlayer);

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
