#include <iostream>
using namespace std;

// Binary Search Function
int BinarySearch(int A[], int low, int high)
{
    int key, mid;
    
    cout << "\nEnter the element to be searched: ";
    cin >> key;
    
    while(low <= high)
    {
        mid = low + (high - low)/2;
                
        if(key == A[mid])
        {
            return mid;
        }
        
        if(key > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main()
{
    int A[100];
    int result = 0, i = 0, j = 0, temp = 0, n;
    
    cout << "Enter number of elements: \n";
    cin >> n;
    
    cout << "Enter the elements: \n";
    for(i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    
    // Bubble Sort Logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }

    cout << "Sorted Array elements: ";
    for(i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
    
    // Binary Search Call
    result = BinarySearch(A, 0, n - 1);
    
    if(result == -1)
    {
        cout << "\nElement not found\n";
    }
    else
    {
        cout << "\nElement found at index: " << result << "\n";
    }
    
    return 0;
}
