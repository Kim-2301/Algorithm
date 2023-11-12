#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r,c;
    cin >> r >> c;
    string arr[1000]={};
    int fv[1000][1000];
    int jv[1000][1000];

    for(int i = 0; i < r; i++){
    fill(jv[i], jv[i]+c, -1);
    fill(fv[i], fv[i]+c, -1);    
  }

    int dx[]={0,1,0,-1};
    int dy[]={-1,0,1,0};

    queue<pair <int, int> >J;
    queue<pair <int, int> >F;

    for(int i=0; i<r; i++){
        cin >> arr[i];
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c ; j++){
            if(arr[i][j]=='J'){
                J.push(make_pair(i,j));
                jv[i][j] = 0;
            }
        
            else if(arr[i][j]=='F'){
                F.push(make_pair(i,j));
                fv[i][j] = 0;
            }
        }
    }

    while(!F.empty()){
        pair<int, int> cur = F.front();
        F.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0 || nx>=r || ny<0 || ny>=c) {continue;}
            if(fv[nx][ny]>=0 || arr[nx][ny]=='#') {continue;}
            fv[nx][ny] = fv[cur.first][cur.second]+1;
            F.push(make_pair(nx,ny));
        }
    }

    while(!J.empty()){
        pair<int, int> cur = J.front();
        J.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx<0 || nx>=r || ny<0 || ny>=c){
                cout <<  jv[cur.first][cur.second]+1;
                return 0;
            }
            if(jv[nx][ny]>=0 || arr[nx][ny]=='#'){continue;}
            if(jv[cur.first][cur.second]+1 >= fv[nx][ny] && fv[nx][ny]!=-1) {continue;}
            jv[nx][ny]=jv[cur.first][cur.second]+1;
            J.push(make_pair(nx,ny));
        }
    }
    cout << "IMPOSSIBLE" <<'\n';
}

