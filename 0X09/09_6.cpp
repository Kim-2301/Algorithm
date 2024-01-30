#include <iostream>
#include <queue>
#include <utility>

using namespace std;
queue<int> Q;
int dist[100002];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin >> n >> k;
    fill(dist,dist+100001,-1);
    dist[n]=0;
    Q.push(n);
    while(dist[k]==-1){
        int cur = Q.front();
        Q.pop();
        for(int i=0; i<3; i++){
            int pos = (i == 0)?cur-1 : (i ==1)?cur+1 : cur*2;
            if(pos<0 || pos>100000) continue;
            if(dist[pos]!=-1) continue;
            dist[pos] = dist[cur]+1;
            Q.push(pos);
        }
    }
    cout << dist[k] << '\n';
}