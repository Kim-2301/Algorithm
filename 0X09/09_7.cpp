#include <iostream>
#include <queue>
#include <utility>
using namespace std;

queue <pair<int,int> > Q;
int bc[50][50];
int vis[50][50];
int t,n,m,k,x,y;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dx[4]={1, 0, -1, 0};
    int dy[4]={0, 1, 0, -1};

    cin >> t;
    while(t--){
        for(int i=0;i<n; i++){
            fill(vis[i],vis[i]+m,0);
            fill(bc[i],bc[i]+m,0);
        }
        cin >> m >> n >> k;
        for(int i=0; i<k; i++){
            cin >> x >> y;
            bc[y][x]=1;
        }

        int cnt=0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(vis[i][j]==0 && bc[i][j]==1){
                    Q.push(make_pair(i,j));
                    vis[i][j]=1;
                    while(!Q.empty()){
                        pair<int, int> cur = Q.front();
                        Q.pop();
                    
                        for(int dir=0; dir<4; dir++){
                            int nx = cur.first+dx[dir];
                            int ny = cur.second+dy[dir];

                            if(nx<0 || nx>=50 || ny<0 || ny>=50) continue;
                            if(vis[nx][ny]!=0 || bc[nx][ny]!=1) continue;

                            Q.push(make_pair(nx,ny));
                            vis[nx][ny]=1;
                        }
                    }
                    cnt++;
                }
            }
        }    
        cout << cnt <<'\n';
    }
    
}