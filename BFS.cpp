Problem Link: https://www.hackerrank.com/challenges/bfsshortreach/problem

#include <bits/stdc++.h>

using namespace std;
vector<int> adjlist[1000];
int main(){
    int q;
    cin>>q;
    while (q--){
        int n,m,x,y,s,k;
        cin>>n>>m;
        for(int i = 0;i<n+3;i++){
            adjlist[i].clear();
        }
        for(int i = 0;i<m;i++){
            cin>>x>>y;
            adjlist[x].push_back(y);
            adjlist[y].push_back(x);
        }
        list<int>que;
        cin>>s;
        bool visited[n+1] = {false};
        int distance[n+1] = {0};
        que.push_back(s);
        visited[s] = true;
        distance[s] = 0;
        while(!que.empty()){
            k = que.front();
            que.pop_front();
            for(int i = 0; i<adjlist[k].size();i++){
                int v = adjlist[k][i];
                if(!visited[v]){
                    visited[v] = true;
                    que.push_back(v);
                    distance[v] = distance[k] + 6;
                }
            }
        }
        for (int i = 1; i<=n;i++){
            if(i!=s){
                if(distance[i]==0)
                        cout<<"-1 ";
            else
                    cout<<distance[i]<<" ";
            }
        }
        
    cout<<endl;
    }
    return 0;
}
