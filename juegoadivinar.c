// stdio.h, que significa "standard input-output header" (cabecera estándar E/S) 
// Tenemos que incluir SOFTWARE relacionado con (entrada/salida) de datos para usar 'printf'.
#include <stdio.h> 
//Para número aleatorio
#include <stdlib.h>
#include <time.h>

// Comienza nuestro programa con lo que tengamos dentro de main(void) { ...}
void main(void){
    //Declaro las variables
    int intentos, num_secreto, num;
    //Intentos
    intentos = 3;
    // Numero secreto
    srand (time(NULL)); 
    num_secreto = rand() % 100; 


    // Función de salida. M--> H 
    printf("Adivina un número entre 1 y 100:");
    // Función de Entrada. M <-- H
    scanf("%d", &num); 

    //printf("El num num=%d , num_secreto=%d \n",num, num_secreto);

    while((num_secreto != num ) && (intentos>1)){
        //Pistas para el usuario
        if(num_secreto > num){
            printf("Es muy alto\n");
        }else{
            printf("Es muy bajo\n");
        }

        intentos--;

        printf("Intentalo de nuevo, te quedan %d intentos \n",intentos);
        scanf("%d", &num); 
    }

    //Finaliza los intentos o acierta
    if(num_secreto == num){
        printf("¡Bien!, adivinaste en %d intentos \n",(4 - intentos));
    }else{
        printf("Lo siento. Has perdido, el número era %d", num_secreto);
    }
    
}

/**
 * Compilar juego y ejecutar
 * 
 * $>gcc juegoadivinar.c -o juego
 * $>./juego
*/
