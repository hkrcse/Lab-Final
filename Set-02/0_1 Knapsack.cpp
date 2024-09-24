#include<bits/stdc++.h>
using namespace std;

int main()
{

     vector<int>profit = {0,1,2,5,6};
     vector<int>weight = {0,2,3,4,5};

     int m = 8, n= 4;
     int ara[5][9];


     for(int i=0;i<=4;i++)
     {
         for(int j=0;j<=8;j++)
         {
             if(i==0||j==0)
             {
                 ara[i][j] = 0;
             }
             else{

                 if(weight[i] <= j)
                 {

                 }
                 else{
                    
                 }

             }

         }
     }

     for(int i=0;i<=4;i++)
     {
         for(int j=0;j<=8;j++)
         {
             cout<<ara[i][j]<<" ";
         }
         cout<<endl;
     }

     cout<<"Max Profit: "<<ara[4][8]<<endl;

    return 0;
}
