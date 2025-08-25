#include <stdio.h>

int main(void) {
    
    int annee;
    printf(" entrer une annee : ");
    scanf("%d", &annee);

    if (annee%4==0  && annee%100!=0 || annee%400==0){
        printf("l'annee %d est bissextile\n", annee);
    } else {
        printf("l'annee %d n'est pas bissextile\n", annee);

    }

 
}