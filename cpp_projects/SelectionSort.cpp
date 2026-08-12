#include <iostream>
using namespace std;

int main()
{
    int A[5], i, j, min, temp;

    cout << "Enter 5 elements: ";
    for(i = 0; i < 5; i++)
    {
        cin >> A[i];
    }

    for(i = 0; i < 4; i++)
    {
        min = i;
        for(j = i + 1; j < 5; j++)
        {
            if(A[j] < A[min])
            {
                min = j;
            }
        }
        
        temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }

    cout << "Sorted array: ";
    for(i = 0; i < 5; i++)
    {
        cout << A[i] << "\t";
    }

    return 0;
}
