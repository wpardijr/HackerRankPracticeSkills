#include <stdio.h>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int n1, int n2, int n3, int n4)
{
        int max1_2 = 0;
        int max3_4 = 0;
        int max = 0;
    
        if(n1 > n2)
                max1_2 = n1;
        else
                max1_2 = n2;
    
        if(n3 > n4)
                max3_4 = n3;
        else
                max3_4 = n4;
    
        if(max1_2 > max3_4)
                max = max1_2;
        else
              max = max3_4;
              
        return max;
}

int main() 
{
        int a, b, c, d;
    
        scanf("%d %d %d %d", &a, &b, &c, &d);
    
        int ans = max_of_four(a, b, c, d);
    
        printf("%d", ans);
    
        return 0;
}
