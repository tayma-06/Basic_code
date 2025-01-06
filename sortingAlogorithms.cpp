// Bismillahir Rahmanir Rahim
// Author: Khadiza Sultana
// Date  : 1/6/2025

/*THIS CODE CONSISTS OF DIFFERENT SORTING ALGORITHMS*/

#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> &arr, int n);
void bubbleSort(vector<int> &arr, int n);
void selectionSort(vector<int> &arr, int n);
void insertionSort(vector<int> &arr, int n);

int main()
{
    // Bubble Sort
    vector<int> arr1 = {7, 9, 3, 1, 4, 6, 8, 5};
    int n1 = arr1.size();
    cout << "Before bubbleSort : ";
    printArray(arr1, n1);
    bubbleSort(arr1, n1);
    cout << "After bubbleSort  : ";
    printArray(arr1, n1);
    cout << endl;

    // Selection Sort
    vector<int> arr2 = {7, 9, 3, 1, 4, 6, 8, 5};
    int n2 = arr2.size();
    cout << "Before selectionSort : ";
    printArray(arr2, n2);
    selectionSort(arr2, n2);
    cout << "After selectionSort  : ";
    printArray(arr2, n2);
    cout << endl;

    // Insertion Sort
    vector<int> arr3 = {7, 9, 3, 1, 4, 6, 8, 5};
    int n3 = arr3.size();
    cout << "Before insertionSort : ";
    printArray(arr3, n3);
    insertionSort(arr3, n3);
    cout << "After insertionSort  : ";
    printArray(arr3, n3);
    cout << endl;

    return 0;
}

void printArray(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Bubble Sort
void bubbleSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) /*To sort in descending order use < to push the smallest element*/
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            return;
        }
    }
}

// Selection Sort
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx]) /* for descending use > */
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

// Insertion Sort
void insertionSort(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i], prev = i - 1;
        while (prev >= 0 && arr[prev] > curr) /* for descending arr[prev] < curr */
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}
