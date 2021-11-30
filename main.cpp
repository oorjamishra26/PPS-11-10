#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    int copyarr[n], arr[n];
    
    cout << "Number of elements : ";
    cin >> n;
    cout << "Elements ";
    
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i = i + 2)
    {
        copyarr[i] = arr[i];
    }
    
    for (j = 1; j < n; j = j + 2)
    {
        copyarr[j] = arr[j];
    }
 
    cout << "Coppying array " << "\n";
    
    for (i = 0; i < n; i++)
    {
        cout << copyarr[i] << "\n";
    }
    return 0;
}



