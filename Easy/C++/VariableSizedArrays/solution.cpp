#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;  // index of outer vector
    int j;  // index of inner vector
    int k;  // number of elements in an array
    int n;  // number of variable-length arrays
    int q;  // number of queries
    
    // Enter number of variable-length arrays and number of queries
    cin >> n >> q;
    
    std::vector <std::vector<int>> array(n);
    
    for(size_t n = 0; n <array.size(); ++n)
    {  
        // Enter the length of each array  
        cin >> k;
        
        array[n].resize(k);
         
        for(size_t k = 0; k < array[n].size(); ++k) 
            cin >> array[n][k];
    } 
    
    for(int t = 0; t < q; ++t)
    {
        cin >> i >> j;
    
        cout << array[i][j] << endl;    
    }
    
    return 0;
}
