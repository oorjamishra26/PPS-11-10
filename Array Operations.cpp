#include <iostream>

using namespace std;

int main()
{
    int choice2, choice1, i, j, sumDai = 0, sumRow = 0;
    int a[3][3];
    
    cout << "Choice 1 - Form a matrix of order 3x3 " << "\n";
    cout << "Choice 2 - Use a preformed matrix " <<"\n";
    cin >> choice1;
    
    switch (choice1)
    {
    case 1:

    for (int i = 0; i < 3; ++i)
    {
    for (int j = 0; j < 3; ++j)
    {
    cout << "Enter " << i << ", " << j << "\n";
    cin >> a[i][j];
    }
    }
    
    cout << "The Matrix formed - " << "\n";
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
    {
        cout << a[i][j] << "\t";
    }
    cout << "\n";
    }
    
    cout << "Choice 1 - Sum of Elements of each row " << "\n";
    cout << "Choice 2 - Sum of Daigonal elements " << "\n";
    cout << "Choice 3 - Finding Transpose of Matrix " << "\n";
    cin >> choice2;
    
    switch (choice2)
    {
    case 1 :
 
    cout << "Finding Sum of each row:" << "\n";
 
    for (i = 0; i < 3; ++i)             // Finding the row sum
    {
    for (j = 0; j < 3; ++j) 
    {
    sumRow = sumRow + a[i][j];        // Add the element
    }
    cout << "Sum of the row "<< i << " = " << sumRow << endl;      // Print the row sum
    sumRow = 0;
    }
    
    break;
    
    case 2:
    
    cout << "Finding Sum of each Daigonals: " << "\n";
 
    for (i = 0; i < 3; ++i)           // Finding the column sum
    {
    for (j = 0; j < 3; ++j) 
    {
    if ( i == j)
    sumDai = sumDai + a[j][i];           // Add the element
    }
    }
    cout << "Sum of the Daigonal is = " << sumDai << endl;            // Print the column sum
    break;
    
    case 3:
    
    cout << "Transpose of the matrix is " << "\n";
    
    for(i = 0; i < 3; ++i)
    {
    for (j = 0; j < 3; ++j)
    { 
    if (i != j)            //Condition for Transpose
    cout << a[j][i] << "\t";
  
    else
    cout << a[i][j] << "\t";
    }
    cout << "\n";
    }
    break;
    
    default :
    cout << "Enter a valid choice" << "\n";
    break;
    }
    
    break;
    
    case 2:
    
    cout << "Choose one of the following operation to perform on the preformed matrix that is " << "\n";
    
    int b[3][3] = {{7, 3, 5},
                  {1, 6, 9},
                  {8, 3, 2}};
    for (i = 0; i < 3; ++i)
    {
    for (j = 0; j < 3; ++j)
    {
    cout << b[i][j] << "\t";
    }
    cout << "\n";
    }
    
    cout << "Choice 1 - Sum of Elements of each row " << "\n";
    cout << "Choice 2 - Sum of Daigonal elements " << "\n";
    cout << "Choice 3 - Finding Transpose of Matrix " << "\n";
    cin >> choice2;
    
    switch (choice2)
    {
    case 1 :
 
    cout << "Finding Sum of each row:" << "\n";
 
    for (i = 0; i < 3; ++i)             // Finding the row sum
    {
    for (j = 0; j < 3; ++j) 
    {
    sumRow = sumRow + b[i][j];        // Add the element
    }
    cout << "Sum of the row "<< i << " = " << sumRow << endl;      // Print the row sum
    sumRow = 0;
    }
    
    break;
    
    case 2:
    
   //Finding Sum of Daigonals
 
    for (i = 0; i < 3; ++i)           // Finding the column sum
    {
    for (j = 0; j < 3; ++j) 
    {
    if ( i == j)
    sumDai = sumDai + b[i][j];
    }
    }
    cout << "Sum of the daigonal is = " << sumDai << endl;            // Print the daigonal sum
    break;
    
    case 3:
    
    cout << "Transpose of the matrix is " << "\n";
    
    for(i = 0; i < 3; ++i)
    {
    for (j = 0; j < 3; ++j)
    { 
    if (i != j)            //Condition for Transpose
    cout << b[j][i] << "\t";
  
    else
    cout << b[i][j] << "\t";
    }
    cout << "\n";
    }
    break;
    
    default :
    cout << "Enter a valid choice" << "\n";
    break;
    }
    }
    
    return 0;
}

