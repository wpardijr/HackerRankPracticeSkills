#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	char *s;
	
	s = malloc(1024 * sizeof(char));
	
	scanf("%[^\n]", s);
	
	s = realloc(s, strlen(s) + 1);
	
	// Write your logic to print the tokens of the sentence here:
	int c = 0;
	
	for(int l = strlen(s); l > 0; l--)
	{
		if(s[c] != ' ')
			printf("%c", s[c]);
		else
			printf("\n");
		
		c++;
	}
	
	free(s);
	
	return 0;
}
