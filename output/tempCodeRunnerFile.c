#include<stdio.h>

int main(void){
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
}