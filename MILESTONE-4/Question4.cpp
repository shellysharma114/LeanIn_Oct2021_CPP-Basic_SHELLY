#include<iostream>
using namespace std;

void bubble(int arr[], int n);
void selection(int arr[],int n);
void insertion(int array[], int size);

int main()
{
	int n , size ,a[size];
	cout<< "Enter size: " <<endl;
	cin >> size ;
	cout << "Enter elements: " << endl;
	for (int i =0 ;i<size;i++)
	{
		cin >> a[i];
	}
	cout << "MENU: \n1.bubble sort \n2.selection sort \n3.insertion sort" <<endl;
	cout <<"ENTER YOUR CHOICE: " << endl;
	cin >> n;
	switch(n)
	{
		case 1:
			bubble(a,size);
			break;
		case 2:
			selection(a,size);
			break;
		case 3:
			insertion(a,size);
			break;
	}
	return 0;
}

void bubble(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
			}
		}
	}	
}	

void selection(int arr[],int n)
{
    int i,j,temp,min;
    
    for(i=0;i<n-1;i++)
    {
		min=i;
        for(j=i+1;j<n;j++)
        {
        	if(arr[j]<arr[min])
        	{
        		min=j;
    		}
  		}
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }
    
    cout<<"SORTED ARRAY IN ACCENDING ORDER: ";
   
	for(i=0;i<n;i++) 
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nSORTED ARRAY IN DESCENDING ORDER \n"<<endl;
	for(i=n-1;i>=0;i--) 
	{
		cout<<arr[i]<<" ";
	}
}

void insertion(int array[], int size) 
{
	int key, j;
	for(int i = 1; i<size; i++)
	{
		key = array[i];
    	j = i;
    	while(j > 0 && array[j-1]>key)
		{
        	array[j] = array[j-1];
        	j--;
    	}
    	array[j] = key;  
	}
}
