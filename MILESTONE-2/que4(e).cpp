#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for (m=1;m<=i;m++){
            cout<<"* ";
        }
        cout<<"\n";
	}
    return 0;
}
/*
enter value of n : 5
    *     
   * *    
  * * *   
 * * * *  
* * * * * 
*/
