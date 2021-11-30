//program to check if given no. is palindrome
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
	return sum;
}
int pal(int n)
{
	int sum=rever(n);		//first we'll reverse a number
	if(sum==n)
	{
		cout << "It is a PALINDROME!" <<endl;
	}
	else
	{
		cout << "It is not a PALINDROME!" <<endl;
	}
}
int main()
{
	int num;
	cin >> num;
	cout<< "Number is: " << num<<endl ;							//print function
	pal(num);								//calling the function
	
	return 0;
}

/*
52625
Number is: 52625
It is a PALINDROME!
*/
