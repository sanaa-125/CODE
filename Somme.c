#include<stdio.h>

int main(void){
    int a,i,somme;
    somme = 0;
    printf("entrer la valeur de a: ");
    scanf("%d",&a);
    for (i=0;i<= a; i++){
        somme += i;
    }
   printf("la somme de 0 a %d = %d\n", a, somme);
   return 0;

}