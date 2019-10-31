#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c;
    double D, x1, x2;

    do{
        printf("Input Nilai a = ");scanf("%d", &a);
        printf("Input Nilai b = ");scanf("%d", &b);
        printf("Input Nilai c = ");scanf("%d", &c);
    }while(a > 0);

    D = (b * b) - (4 * a * c);

    if (D >= 0){
        x1 = (-b + sqrt(D) / 2 * a);
        x2 = (-b - sqrt(D) / 2 * a);

        printf("\nx1 = %f\n", x1);
        printf("x2 = %f", x2);
    }
    else{
        printf("\nAkar Imajiner");
    }

    getch();
}
