#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> m >> n;
    int arr[1000][1000];

    queue <pair<int, int> >Q;
    int vis[1000][1000]={0};
    int dx[]={0,1,0,-1};
    int dy[]={-1,0,1,0};
    int mx=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            cin >> arr[i][j];
            if(arr[i][j]==1){
                Q.push(make_pair(i,j));
            }
            else if(arr[i][j]==0){
                vis[i][j]=-1;
            }
        }
    }

    while(!Q.empty()){
        pair<int, int>cur = Q.front();
        Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0 || nx>=n || ny<0 || ny>=m){
                continue;
            }
            if(vis[nx][ny]>=0){
                continue;
            }
            Q.push(make_pair(nx, ny));
            vis[nx][ny] = vis[cur.first][cur.second]+1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<m ; j++){
            if(vis[i][j]==-1){
                cout << -1 <<'\n';
                return 0;
            }
            mx = max(mx, vis[i][j]);
        }
    }
    cout << mx << '\n';

}

// 1 : 익은 토마토, 0 : 안익은 토마토, -1 : 없음
// 익을때까지 걸리는 날 -> BFS 탐색 횟수 최대값 출력=> vis에 저장
// vis 배열0으로 초기화, 탐색 횟수 저장
// vis range based for문 돌려서 원소 확인, 0 있으면 fail 처리
