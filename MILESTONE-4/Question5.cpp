//C++ program by using function to find the largest and second largest element in the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size,i;
	int arr[50];
	int large=0, secondLarge=0;
	cout<<"Enter the number of element in array: ";
	cin>>size;
	cout<<"Enter the elements of array: " ;
	for(i=0; i<size; i++){
	cin>>arr[i];
		if(large<arr[i])
		{
			secondLarge=large;
			large=arr[i];
		}
		else if(secondLarge<arr[i])
		{
			secondLarge=arr[i];
		}
	}
	cout<<large<<" is the largest nunber\n";
	cout<<secondLarge<<" is the second largest nunber";
    return 0;
}
/*
Enter the number of element in array: 5
Enter the elements of array: 45
0
-56
23
45
45 is the largest nunber
45 is the second largest nunber
*/
