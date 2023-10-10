#include <iostream>

using namespace std;

int main()
{   
    float a,b,c;
    cin>>a>>b>>c;
    int v=0; 
    if (a<b+c && b<a+c && c<a+b) 
      if (a==b && b==c) 
        v=3;
      else
        if (a==b ||  a==c  || b==c) 
         v=2;
        else  
         v=1;
    
    cout<<v;
    return 0;
}