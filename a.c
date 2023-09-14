#include <stdio.h>
#include <math.h>

void main(){
    int a;
    int b;
    int c;

    scanf ("%d %d %d", &a, &b, &c);

    int d=sqrt(b*b-4*a*c);
    int x1=((-1)*b+d)/(2*a);
    int x2=((-1)*b-d)/(2*a);
    printf("%d\n", x1);
    printf("%d\n", x2);
}
