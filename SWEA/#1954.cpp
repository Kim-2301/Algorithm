#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int test_case;
int n,cnt;
int arr[100][100];
int vis[100][100];
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> test_case;

    for(int i=1; i<=test_case; i++){
        cin >> n;
        for(int a=0; a<n; a++){
            fill(vis[a],vis[a]+n,0);
        }
        int dir=0;
        cnt=1;
        queue <pair<int,int> >q;
        q.push(make_pair(0,0));
        pair<int, int> cur = q.front();
        q.pop();

        vis[0][0]=cnt++;

        while(1){
            if(dir==0){
                while(cur.second+1 < n && vis[cur.first][cur.second+1] < 1){
                    vis[cur.first][cur.second+1]=cnt++;
                    q.push(make_pair(cur.first,cur.second+1));
                    cur=q.front(); q.pop();
                }
                dir=1;
            }

            else if(dir==1){
                while (cur.first+1 < n && vis[cur.first+1][cur.second] < 1)
                {
                    vis[cur.first+1][cur.second]=cnt++;
                    q.push(make_pair(cur.first+1,cur.second));
                    cur=q.front(); q.pop();
                }
                dir=2;   
            }

            else if(dir==2){
                while (cur.second-1 >= 0 && vis[cur.first][cur.second-1]<1)
                {
                    vis[cur.first][cur.second-1]=cnt++;
                    q.push(make_pair(cur.first,cur.second-1));
                    cur=q.front(); q.pop();
                }
                dir=3;
            }

            else if(dir==3){
                while (cur.first-1 >= 0 && vis[cur.first-1][cur.second]<1)
                {
                    vis[cur.first-1][cur.second]=cnt++;
                    q.push(make_pair(cur.first-1,cur.second));
                    cur=q.front(); q.pop();
                }
                dir=0;
            }

            if(cnt == n*n+1) break;            
        }

        cout << '#' << i << '\n';
        for(int w=0;w<n;w++){
            for(int e=0;e<n;e++){
                cout << vis[w][e] <<' ';
            }
            cout << '\n';
        }

    }

}