#include <iostream>

void update(int *a,int *b) 
{
    // Complete this function
    int c;
    int *pc = &c;

    *pc = *a;

    *a = *a + *b;

    if(*b <= *pc)
        *b = *pc - *b;
    else
        *b = *b - *pc;
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    std::cin >> a >> b;
    
    update(pa, pb);
    
    std::cout << a << '\n' << b;

    return 0;
}
