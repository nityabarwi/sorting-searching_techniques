#include<iostream>
using namespace std;
int main()
{
    int arr[100], n, i, num;
    cout<<"Enter total number of elements;\n";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0; i<n; i++)
       {
          cin>>arr[i];
       }
    cout<<"Enter element to search:";
    cin>> num;
    
    int temp = -1;

  for (int i = 0; i < n; i++)
   {
    if (arr[i] == num) 
    {

      temp=0;
      cout << "Element found at position: " << i+1  << endl;
      
      break;
    }
  }

  if (temp == -1) 
  {
    cout << "No Element Found" << endl;
  }
  return 0;
}