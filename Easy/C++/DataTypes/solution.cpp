#include <iostream>
#include <cstdio>

using namespace std;

int main() 
{
    // Complete the code.
    char ch;
    double d;
    float f;
    int i;
    long l;
    
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    
    printf("%d\n%ld\n%c\n%3f\n%9lf\n", i, l, ch, f, d);
        
    return 0;
}
