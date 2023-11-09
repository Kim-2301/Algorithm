#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int board[100][100];    //1은 파란칸, 0은 빨간칸
bool vis[100][100];   //방문 여부 확인용 배열

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};     //상하좌우 표시용

int main(){
    queue<pair<int,int> >Q;
    vis[0][0]=1;  //시작점 방문 표시
    Q.push(make_pair(0,0));  //큐에 시작점 push

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();     //현위치 저장 후 큐에서 삭제
        Q.pop();
        
        for(int dir=0 ; dir<4 ; dir++ ){
            //현위치 주변 상하좌우 좌표 확인
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];

            //범위 밖일 경우 확인
            if(nx < 0 || nx >= 100 || ny < 0 || ny >= 100){
                continue;   //loop의 끝으로 이동
            }
            //이미 방문 했거나 빨간 칸인 경우 확인
            if(vis[nx][ny] || board[nx][ny]!=1){
                continue;
            }
            vis[nx][ny] = 1;
            Q.push(make_pair(nx,ny));   //조건에 맞는 좌표 방문 표시 후, 삽입
        }
    }
    
}