#include <iostream>

using namespace std;

int main()
{
    int n; 
    cout << "n="; 
    cin >> n; 
    
    cin.clear();
    cin.ignore(32767, '\n');
    
    char S[n]; 
    
    cin.getline(S,n); 
    
    int c_x=0,c_sp=0,i=0;
    
    while ( S[i] != '\0' ) 
     {
         if (S[i] == ' ') 
           { c_sp++; }
         if (S[i] == 'x') 
           { c_x++; }
        i++; 
     }
    cout << "x - "<<c_x<<" space - "<<c_sp;
    return 0;
}