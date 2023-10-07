#include <iostream>
#include <cmath>

using namespace std;

int main()
{   
    float a,b,c;
    cin>>a>>b>>c; 
    float d=b*b-4*a*c; 
    if (d>=0) 
      {
          float y1=(-b-sqrt(d))/(2*a);
          float y2=(-b+sqrt(d))/(2*a);
          bool flag=true; 
          if (y1>=0) { cout << sqrt(y1)<<"; "<<-sqrt(y1)<<endl; flag = false;} 
          if (y2>=0) { cout << sqrt(y2)<<"; "<<-sqrt(y2); flag = false;} 
          if (flag) cout <<"дійсних коренів не має"; 
      }
    else  cout<<"дійсних коренів не має"; 
    return 0;
}