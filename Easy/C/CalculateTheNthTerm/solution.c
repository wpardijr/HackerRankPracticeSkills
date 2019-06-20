#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Complete the following function:
int m = 0;
int sum = 0;

int find_nth_term(int n, int a, int b, int c) 
{
        // Write your code here:
        if(n >= 1)
        {
                m = m + 1;
        
                if(m == 4)
                        sum = a + b + c;
                else if (m == 5)
                {
                        a = sum;
                        sum = a + b + c;
                }
                else if (m == 6)
                {
                        b = a;
                        a = sum;
                        sum = a + b + c;
                }
                else if (m > 6)
                {
                        c = b;
                        b = a;
                        a = sum;
                        sum = a + b + c;
                }    
        
                return find_nth_term(n - 1, a, b, c);
        }
    
        return sum;
}

int main() 
{
        int n, a, b, c;
    
        scanf("%d %d %d %d", &n, &a, &b, &c);
    
        int ans = find_nth_term(n, a, b, c);
 
        printf("%d", ans);
    
        return 0;
}
