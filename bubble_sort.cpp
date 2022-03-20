#include<iostream>
using namespace std;
int main ()
{
   int a[100], i, j,temp,pass=0,n;
   cout<<"Enter total no. of elements:\n";
   cin>> n;
   cout <<"Input list ...\n";
   for(i = 0; i<n; i++) 
   {
      cin >> a[i];
   }
   cout << "Array before Sorting:\n ";
   for(int i = 0; i<n; i++)
     {
          cout << a[i] << "\t";
      }
    

for(i = 0; i<n; i++)
 {
   for(j = i+1; j<n; j++)
   {
      if(a[j] < a[i]) 
      {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"\nSorted Element List ...\n";
for(i = 0; i<n; i++) 
{
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
return 0;
}