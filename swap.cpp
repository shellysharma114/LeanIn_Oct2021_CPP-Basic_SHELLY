#include<iostream>
using namespace std;
 
int main(){
   int a, b, temp;
   cout<< "Enter the value of 'a' ";
   cin>>a;
   cout<< "Enter value of 'b'";
   cin>>b;

   /*Swapping logic */ 
   temp=a;
   a=b;
   b=temp;
   
   cout<<"Value of 'a' after swapping"<<a<<endl;
   
   cout<<"Value of 'b'after swapping"<<b<<endl;
   
   return 0;
}

/*Enter value of 'x' 5
Enter value of 'y' 4
Value of 'x' after swapping
4
Value of 'y'after swapping
5*/