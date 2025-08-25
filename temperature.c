#include <stdio.h>

int main(void) {
    
    float f;

    printf("Saisissez la temperature en Celsius :\n");
    scanf("%f", &f);

    printf("voici la temperature en Fahrenheit : %2.f", (f*9/5)+32);
    printf("\n");
}
