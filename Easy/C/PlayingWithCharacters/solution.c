#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 10

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN*2];
    
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
    
    return 0;
}
