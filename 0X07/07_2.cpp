#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,cnt=0;;
    deque<int> dq;
    cin >> n >> m;
    for(int i=1; i<n+1; i++){
        dq.push_back(i);
    }
    while(m--){
        int x,idx; 
        cin >> x;
        for(int i=0; i<=dq.size(); i++){
            if(x==dq[i]){
                idx = i;
            }
        }
        while(dq.front() != x){
            if(idx <= dq.size()/2){
                dq.push_back(dq.front());
                dq.pop_front();

            }
            else{
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cnt++;
        }
        dq.pop_front();
    }
    cout << cnt << '\n';
}

