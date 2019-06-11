#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{	
        int div = 0;
        int n;
        int sum = 0;

        scanf("%d", &n);
    
        //Complete the code to calculate the sum of the five digits on n.
        while(n > 0)  // until it remains the first digit
        {
                div = n % 10;  // gets the last digit of number n
        
                sum = sum + div;
        
                n = n/10;  // discards one digit, from the last to the first    
        }
    
        printf("%d\n", sum);
    
        return 0;
}
