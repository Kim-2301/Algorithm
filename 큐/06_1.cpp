#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    queue<int> qu;

    while(N--){
        string a;
        cin >> a;
        if(a == "push"){
            int x;
            cin >> x;
            qu.push(x);
        }
        else if(a == "pop"){
            if(qu.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << qu.front() << '\n';
                qu.pop();
            }
        }
        else if(a=="size"){
            cout << qu.size() << '\n';
        }
        else if(a=="empty"){
            if(qu.empty()){
                cout << 1 <<'\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(a=="front"){
            if(qu.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << qu.front()<< '\n';           
            }
        }
        else if(a=="back"){
            if(qu.empty()){
                cout << -1 <<'\n';
            }
            else{
                cout << qu.back() << '\n';
            }
        }
    }
}