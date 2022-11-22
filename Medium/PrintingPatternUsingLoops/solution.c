#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	int i, j;
	int n;
	
	scanf("%d", &n);
	
	int patternSize = 2*n - 1;
	
	// Complete the code to print the pattern.
	for(i = 1; i <= patternSize; i++)
	{
		for(j = 1; j <= patternSize; j++) 
		{
			if(i == n)
			{
				if(j <= n)
					printf("%d ", n - j + 1);
				else
					printf("%d ", j - n + 1);
			} 
			else if(i < n) 
			{
				if((j >= i) && (j < patternSize + 2 - i))
					printf("%d ", n - i + 1);
				else
				{
					if(j <= n)
						printf("%d ", n - j + 1);
					else
						printf("%d ", j - n + 1);
				}
			}
			else
			{
				if(((patternSize - i + 1) <= j) && (j <= i))
					printf("%d ", i - n + 1);
				else
				{
					if(j < n)
						printf("%d ", n - j + 1);
					else
						printf("%d ", j - n + 1);
				}
			}
		}
		
		printf("\n");
	}
	
	return 0;
}
