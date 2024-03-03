#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    queue<int> qu;
    for(int i=1;  i<n+1; i++){
        qu.push(i);   
    }

    while(qu.size()>1){
        qu.pop();
        int x;
        x=qu.front();
        qu.pop();
        qu.push(x);
    }
    
    cout << qu.front() << '\n';
}