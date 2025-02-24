#include <stdio.h>
int main()
{
    printf("Pointer : Demonstrate the use of & and * operator : \n\n");
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    printf("m = %d\n", m);
    printf("fx = %f\n", fx);
    printf("cht = %c\n\n", cht);
    printf("Using & operator : \n\n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n\n", &cht);
    printf("Using & and * operator : \n\n");
    printf("value at address of m = %d\n", *(&m));
    printf("value of address of fx = %f\n", *(&fx));
    printf("value of address of cht = %c\n\n", *(&cht));
    printf("Using only pointer variable : \n\n");
    int *pt = &m;
    float *fpt = &fx;
    char *cpt = &cht;
    printf("address of m = %p\n", pt);
    printf("address of fx = %p\n", fpt);
    printf("address of cht = %p\n\n", cpt);
    printf("Using only pointer operator : \n\n");
    printf("value at address of m = %d\n", *pt);
    printf("value at address of fx = %f\n", *fpt);
    printf("value at address of cht = %c\n\n", *cpt);
    return 0;
}
