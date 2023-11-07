#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq;

    while(n--){
        string a;
        cin >> a;
        
        if(a=="push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if(a=="push_back"){
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if(a=="pop_front"){
            if(dq.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << dq.front()<<'\n';
                dq.pop_front();
            }
        }
        else if(a=="pop_back"){
            if(dq.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << dq.back()<<'\n';
                dq.pop_back();
            }
        }
        else if(a=="size"){
            cout << dq.size()<<'\n';
        }
        else if(a=="empty"){
            if(dq.empty()){
                cout << 1 << '\n';
            }
            else{
                cout << 0 <<'\n';
            }
        }
        else if(a=="front"){
            if(dq.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << dq.front() << '\n';
            }
        }
        else if(a=="back"){
            if(dq.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << dq.back() << '\n';
            }
        }
    }
}