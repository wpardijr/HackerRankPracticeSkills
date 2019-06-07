#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float a = 0.0;
    float b = 0.0;
    int c = 0;
    int d = 0;
    
    scanf("%d %d", &c, &d);
    scanf("%f %f", &a, &b);
    
    printf("%d %d\n", c + d, c - d);
    printf("%1.1f %1.1f\n", a + b, a - b);
    
    return 0;
}
