#include <iostream>
#include <cstdio>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d) 
{
  int ans;
  
  if(a <= b)
  {
      if(b <= c)
      {
            if(c <= d)
                ans = d;
            else
                ans = c;
      }
      else
      {
            if(b <= d)
                ans = d;
            else
                ans = b;
      }
  }
  else
  {
      if(a <= c)
      {
            if(c <= d)
                ans = d;
            else
                ans = c;
      }
      else
      {
            if(a <= d)
                ans = d;
            else
                ans = a;    
      }
  }

  return ans;
}

int main() 
{
    int a, b, c, d;
    
    cin >> a >> b >> c >> d;
    
    int ans = max_of_four(a, b, c, d);
    
    cout << ans;
    
    return 0;
}
