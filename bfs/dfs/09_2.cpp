#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >> m;
    int arr[500][500];
    bool vis[500][500]={0};  
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    queue<pair<int, int> > Q;
    int dx[4]={0,1,0,-1};
    int dy[4]={-1,0,1,0};
    int mx=0,cnt=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1 && vis[i][j]==0){
                cnt++;
                vis[i][j] = 1;
                Q.push(make_pair(i,j));
                int siz=0;
                while(!Q.empty()){
                    siz++;
                    pair<int,int> cur = Q.front();
                    Q.pop();
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.first + dx[dir];
                        int ny = cur.second + dy[dir];
                        if(nx < 0 || nx >=n || ny < 0 || ny >= m){
                            continue;
                        }
                        if(vis[nx][ny]==1 || arr[nx][ny]!=1){
                            continue;
                        }
                        vis[nx][ny] = 1;
                        Q.push(make_pair(nx,ny));
                    }
                }
                mx = max(mx,siz);
            }
        }
    }

    cout << cnt << '\n' << mx;

}