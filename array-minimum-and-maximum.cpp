#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, choice;
    int min[2] = {a, b};         //Initilizing Arrays
    int max[2] = {c, d};
     
    cout << "Choice 1 - Find minimum of two numbers" << endl;
    cout << "Choice 2 - Find maximum of two numbers" << endl;
    cout << "Enter choice ";
    cin >> choice;
    
    switch (choice)
    {
    case 1:
    cout << "Enter two values to find minimum ";          
    for (int n = 0; n < 2; n++)                   // Taking user input for arrays
    cin >> min[n];
    
    if (min[0] < min[1])         
    cout << "The minimum value is " << min[0];
    
    else
    cout << "The minimum value is " << min[1];
    break;
    
    case 2:
    cout << "Enter two values to find maximum ";      // Taking user input for arrays
    for (int i = 0; i < 2; i++)
    cin >> max[i];
    
    if (max[0] < max[1])
    cout << "The maximum value is " << max[1];
    
    else
    cout << "The maximum value is " << max[0];
    break;
    }
    
    return 0;
}
