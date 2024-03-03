#include <iostream>
#include <queue>
#include <utility>

using namespace std;

queue<pair<int,int> > Q;
char color[101][101];
int vis[101][101];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int n;

void bfs(int x,int y){
    Q.push(make_pair(x,y));
    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            if(nx < 0 || nx >=n || ny <0 || ny >=n) continue;
            if(vis[nx][ny]==1 || color[nx][ny]!= color[x][y]) continue;

            vis[nx][ny] =1;
            Q.push(make_pair(nx,ny));
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int normal=0, blind=0;

    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> color[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]==0){
                normal++;
                bfs(i,j);
            }
        }
    }

    
    for(int i=0;i<n;i++){
        fill(vis[i],vis[i]+n,0);
        for(int j=0;j<n;j++){
            if(color[i][j]=='G') color[i][j]='R';
        }
    }

     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(vis[i][j]==0){
                blind++;
                bfs(i,j);
            }
        }
    }

    cout << normal << " " << blind;

}