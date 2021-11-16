
#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10], m2[10][10], sum[10][10];
   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;

   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
   cout << "Enter the elements of first matrix(enter first row first): ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>m1[i][j];
     }
   }
   cout << "Enter the elements of second matrix(enter first row first): ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m2[i][j];
     }
   }
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=m1[i][j]+m2[i][j];
      }
   }

      cout<<"Output: ";
      cout<<endl;
      for(int i = 0; i < row; ++i)
        for(int j = 0; j < col; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
            cout << endl;
        }
   return 0;
}
/*
Enter the number of rows(should be >1 and <10): 2
Enter the number of column(should be >1 and <10): 2
Enter the elements of first matrix(enter first row first): 1
2
3
4
Enter the elements of second matrix(enter first row first): 5
6
7
8
Output: 
6  8
10  12  */