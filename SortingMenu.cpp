#include <iostream>
using namespace std;

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void resetArray(int source[], int temp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        temp[i] = source[i];
    }
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int originalArr[n];
    int workingArr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> originalArr[i];
    }

    int choice;

    do
    {
        cout << "\n=========================" << endl;
        cout << "Current Array: ";
        displayArray(originalArr, n);
        cout << "=========================" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Quick Sort" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        resetArray(originalArr, workingArr, n);

        switch (choice)
        {
            case 1:
                bubbleSort(workingArr, n);
                cout << "\nArray after Bubble Sort: ";
                displayArray(workingArr, n);
                break;

            case 2:
                selectionSort(workingArr, n);
                cout << "\nArray after Selection Sort: ";
                displayArray(workingArr, n);
                break;

            case 3:
                insertionSort(workingArr, n);
                cout << "\nArray after Insertion Sort: ";
                displayArray(workingArr, n);
                break;

            case 4:
                quickSort(workingArr, 0, n - 1);
                cout << "\nArray after Quick Sort: ";
                displayArray(workingArr, n);
                break;

            case 5:
                cout << "\nExiting program..." << endl;
                break;

            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}
