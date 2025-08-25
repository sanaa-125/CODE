#include <stdio.h>

int main (void){
    // Exemple de boucle while
   int j=0;

    while (j<10)
    {
       printf("%d\n",j); 
       j=j+1;
    }
    
     // ===============================
    // 2️⃣ SWITCH
    // ===============================
    // switch = "selon le cas"
    // case   = "cas"
    // default = "par défaut / sinon"
    int jour = 3;
    printf("donner Le Jour de la semaine (1-3) : ");
    scanf("%d", &jour);
    switch (jour) { // selon la valeur de jour
        case 1: // cas où jour == 1
            printf("Lundi\n");
            break;
        case 2: // cas où jour == 2
            printf("Mardi\n");
            break;
        case 3: // cas où jour == 3
            printf("Mercredi\n");
            break;
        default: // sinon (aucun cas trouvé)
            printf("Jour inconnu\n");
    }
    

    // ===============================
    // 3️⃣ WHILE
    // ===============================
    // while = "tant que"
    int i = 0;
    while (i < 5) { // tant que i est plus petit que 5
        printf("while -> i = %d\n", i);
        i++; // incrémenter i (i = i + 1)
    }

    // ===============================
    // 4️⃣ DO...WHILE
    // ===============================
    // do   = "faire"
    // while = "tant que"
    int j = 0;
    do { // faire le bloc suivant
        printf("do...while -> j = %d\n", j);
        j++;
    } while (j < 5); // tant que j est plus petit que 5

    // ===============================
    // 5️⃣ FOR
    // ===============================
    // for = "pour"
    // (initialisation ; condition ; incrémentation)
    for (int k = 0; k < 5; k++) { // pour k allant de 0 à 4
        printf("for -> k = %d\n", k);
    }

    return 0; // return = "retourner"
}


