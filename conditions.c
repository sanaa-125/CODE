#include<stdio.h>

#include <stdio.h>

int main() {
    int x = 5;

    // ===============================
    // 1️⃣ IF - ELSE IF - ELSE
    // ===============================
    // if   = "si"
    // else = "sinon"
    // else if = "sinon si"
    if (x > 10) { // si x est plus grand que 10
        printf("x est plus grand que 10\n");
    } else if (x == 10) { // sinon si x est égal à 10
        printf("x est exactement 10\n");
    } else { // sinon (toutes les autres possibilités)
        printf("x est plus petit que 10\n");
    }

    /*  EXEMPLE DE CONDITION
    int nombre;

    printf("entrer un nombre: ");
    scanf("%d",&nombre);

    if(nombre>0){
        printf("le nombre est positif\n");
    }
    else if (nombre<0){
        printf("le nombre est negatif\n");
    }
    else {
        printf("le nombre est null\n");
    }
    return 0; */

    /* operateurs logiques
      && (et logique)
      || (ou logique)
      ! (non logique)
    */

    printf("%d\n", 1==1 && 1==0);
    printf("%d\n", 1==1 || 1==0);
    printf("%d\n", 1==1 && 1==0 && (1==1 && 1==0));
    return 0;
}