#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    string arr[100];
    int vis[100][100]={0};
    
    for(int i=0;i<n;i++){
        cin >> arr[i];        
    }

    queue<pair<int, int> > Q;
    int dx[]={0,1,0,-1};
    int dy[]={-1,0,1,0};
    int cnt=1;
    vis[0][0]=1;
    Q.push(make_pair(0,0));

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m){
                continue;
            }
            if(arr[nx][ny]!='1' || vis[nx][ny]>0){
                continue;
            }            
            vis[nx][ny]=vis[cur.first][cur.second]+1;
            Q.push(make_pair(nx,ny));
        }
    }
    cout << vis[n-1][m-1];  
}