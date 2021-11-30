#include <iostream>  
using namespace std;  
int main()  
{  
  int decimal[10], num, i;    

  cout << "Enter the number to convert from decimal to binary ";    
  cin >> num;    
  
  for(i=0; num > 0; i++)    
{    
   decimal[i] = num % 2;    
   num = num / 2;  
}    

cout << "Binary of the entered number is ";    

  for(i=i-1 ;i>=0 ;i--)    
{    
  cout << decimal[i];    
}    
}  
