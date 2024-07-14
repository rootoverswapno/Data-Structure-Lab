#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>graph(vector<vector<int>>&v,int m)
{
    vector<vector<int>>adjMetrix(m,vector<int>(m,0));
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(v[i][j]==1)
            {
                adjMetrix[i][j]=1;
                adjMetrix[j][i]=1;
            }
        }
    }
    return adjMetrix;
}
int main()
{
    vector<vector<int>>v={
       {0,1,0,0},
       {1,0,1,0},
       {0,1,0,1},
       {0,0,1,0},
    };
    int n_vertices=v.size();
    vector<vector<int>>vv=graph(v,n_vertices);
    for(int i=0;i<n_vertices;++i)
    {
        for(int j=0;j<n_vertices;++j)
        {
            cout<<vv[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}