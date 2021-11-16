#include<iostream>
 
using namespace std;

int main() {
   int i,n,sum=0;
   int arr[]={0,4,1,6,2};
   n=5;
   for(i=0;i<n;i++) {
      sum+=arr[i];
   }
   cout<<"Sum of the numbers in the array: ";
   cout<<sum;
   return 0;
}
/*
Sum of the numbers in the array: 13 
*/