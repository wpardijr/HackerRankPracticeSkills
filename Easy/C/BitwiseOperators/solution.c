#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function:
void calculate_the_maximum(int n, int k) 
{
        //Write your code here:
    
        // input parameters
        int a = 0;  // integer k
        int b = 0;  // maximum integer from set S
    
        // results from bitwise operations
        int c = 0;  // a & b
        int d = 0;  // a | b
        int e = 0;  // a ^ b
    
        // maximum values related to results from bitwise operations
        int max_c = 0;
        int max_d = 0;
        int max_e = 0;
    
        if((n >= 2) && (k >= 2))
        {
                for(b = 1; b <= n; b++)
                {
                        for(a = 1; a <= k; a++)
                        {
                                if(a < b)
                                {
                                        c = a & b;
                                        d = a | b;
                                        e = a ^ b;
                    
                                        if(c < k)
                                        {
                                                if(max_c < c)
                                                        max_c = c;
                                        }
                        
                                        if(d < k)
                                        {
                                                if(max_d < d)
                                                        max_d = d;
                                        }
                    
                                        if(e < k)
                                        {
                                              if(max_e < e)
                                                      max_e = e;
                                        }
                                }
                        }
                }
        }
    
        printf("%d\n", max_c);
        printf("%d\n", max_d);
        printf("%d\n", max_e);
}

int main() 
{
        int n, k;
  
        scanf("%d %d", &n, &k);

        calculate_the_maximum(n, k);
 
        return 0;
}
