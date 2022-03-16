#include<iostream>
using namespace std;
void swapping(int &a, int &b)
//swap the content of a and b
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void display(int *array, int size)
 {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
 }

void selectionSort(int *array, int size) 
{
   int i, j, k;
   for(i = 0; i<size-1; i++) 
   {
      k = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[k])
            k = j;
         //placing in correct position
         swap(array[i], array[k]);
   }
}
int main() 
{
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++)
   {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}