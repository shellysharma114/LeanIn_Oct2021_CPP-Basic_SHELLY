#include<iostream>
using namespace std;
 int main(){
    int n;
    int k=1;
    cout<<"Enter value of n";
    cin>>n;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<"\n";
    }
    return 0;
}
/*
Enter value of n5
1
23
456
78910  */
