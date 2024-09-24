#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>g[10];

int main()
{
 int e,v;
 cin>>v>>e;


//  for(int i=0;i<e;i++)
//  {
//      int u,v,w;
//      cin>>u>>v>>w;

//      g[u].push_back({v,w});
//     g[v].push_back({u,w});

//  }

 for(int i=1;i<=v;i++)
 {
     cout<<i<<"-->";

     for(int j=0;j<g[i].size();j++)
     {
         cout<<"("<<g[i][j].first<<","<<g[i][j].second<<")";
     }
     cout<<endl;
 }

 return 0;
}
