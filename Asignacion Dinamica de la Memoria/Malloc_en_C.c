#include <stdio.h>

int main(){
    
    int x;
    x = sizeof(int);
    printf("%i\n", x);

    int *a;
    a = malloc(sizeof(int));
    *a = 5;
    printf("%i\n", *a);

    float *b;
    b = malloc(sizeof(float));
    *b = 5.54;
    printf("%.2f\n", *b);

    char *c;
    c = malloc(sizeof(char));
    *c = 'h';
    printf("%c\n", *c);

    return 0;
}
