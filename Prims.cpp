#include<bits/stdc++.h>
using namespace std;
void prims(int v,int e,int start,vector<vector<int>>&adj){
    vector<int>vis(v,false);
    vis[start]=true;
    for(int i=0;i<e-1;i++){//no of edges
        int mini=-1;
        int minj=-1;
        int minimum=INT_MAX;
        for(int j=start;j<v;j++){
            if(vis[j]){// if it is visited checkfor any other not visited node nearby
                for(int k=start;k<v;k++){
                    if(adj[j][k]!=0 && !vis[k]){
                        if(minimum>adj[j][k]){
                        mini=j;
                        minj=k;
                        minimum=adj[j][k];
                        }
                    }
                }
            }
        }
        vis[minj]=true;//make the visited node true; 
        cout<<mini<<" "<<minj<<" "<<minimum<<endl;
        
    }
    
}
int main(){
    int v,e,a,b,c;
    cin>>v>>e;
    vector<vector<int>>adj(v,vector<int>(v));
    for(int i=0;i<v;i++){
        cin>>a>>b>>c;
            adj[a][b]=c;
        adj[b][a]=c;
        
    }
    prims(v,e,0,adj);
}
