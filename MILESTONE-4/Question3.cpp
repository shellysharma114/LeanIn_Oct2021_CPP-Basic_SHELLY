//C++ using function to Insert a no. at a given position in an array
#include <iostream>
using namespace std;

int main()
{
	int arr[50], pos, n, val;
	cout<<"Enter number of elements in array: "<<endl;
	cin>>n;
	cout<<"Enter elements: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter location to insert an element: "<<endl;
	cin>>pos;
	cout<<"Enter the value to insert: "<<endl;
	cin>>val;
	for (int i=n-1;i>=pos-1;i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos-1] = val;
    cout<<"Resultant array is: "<<endl;
	for (int i=0;i<=n;i++)
	{
    	cout<<arr[i] << "  "; 
    }
   return 0;
}
/*
Enter number of elements in array: 5
Enter elements: 1 2 3 4 5
Enter the location to insert an element: 1
Enter the value to insert: 0
Resultant array is: 0  1  2  3  4  5   
*/
