// C++ Program for Bubble Sort

#include <bits/stdc++.h>
using namespace std;

// Bubble Sort
int long *bubbleSort(int long arr[], int long number_of_elements) 
{
    for (int i = 0; i < number_of_elements - 1; i++) 
    {
        for (int j = 0; j < number_of_elements - i - 1; j++)  
        {
            if (arr[j] > arr[j + 1]) 
            {
                // If number is greater than j 
                // swap and continue sorting
                int long temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}


// Function to print array. Array is called by reference
void print_array(int long arr[], int long number_of_elements) 
{
    for (int i = 0; i < number_of_elements; i++) 
        cout << arr[i] << " ";

    cout << endl;
}


int main() 
{
    // Input for # of elements in the array
    int long number_of_elements;
    cin >> number_of_elements;

    // Input for elements of the array to be sorted
    int long arr [number_of_elements];
    for (int i = 0; i < number_of_elements; i++)
        cin >> arr[i];

    int long *ans = bubbleSort(arr, number_of_elements);
    print_array(ans, number_of_elements);

    return 0;
}