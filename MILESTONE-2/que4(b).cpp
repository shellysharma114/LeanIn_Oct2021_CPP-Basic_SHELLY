include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        char k='A';
       for(int j=1;j<=i;j++){
            cout<<k++;
		}
    	cout<<"\n";
	}
    return 0;
 }
/*
Enter value of n: 5
A
AB
ABC
ABCD
ABCDE   */
