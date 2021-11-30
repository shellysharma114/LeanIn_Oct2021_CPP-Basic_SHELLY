//program to reverse number
#include <iostream>
using namespace std;

int rever(int n)
{
	int sum=0;
	while(n!=0)
	{
		sum=sum*10 + n%10;
		n=n/10;
	}
	cout<< "Reversed number is: " << sum;
}

int main()
{
	int num;
	cin >> num;
	cout<< "Original number is: " << num ;							//print function
	rever(num);								//calling the function
	
	return 0;
}

/*
54263
Original number is: 54263
Reversed number is: 36245
*/
