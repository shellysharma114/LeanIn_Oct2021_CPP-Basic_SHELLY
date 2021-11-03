#include<iostream>
using namespace std;
int main(){
    int n;
    char k='A';
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<k;           
        }k++;
        cout<<"\n";
    }
    return 0;
}
/*
Enter value of n: 5
A
BB
CCC
DDDD
EEEEE  */
