#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> st;

    while(n--){
        string l;
        cin >> l;
        if(l=="push"){
            int x;
            cin >> x;
            st.push(x);
        }
        else if(l=="pop"){
            if(st.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if(l=="size"){
            cout << st.size() << '\n';
        }
        else if(l=="top"){
            if(st.empty()){
                cout << -1 << '\n';
            }
            else{
                cout << st.top() << '\n';
            }
        }
        else if(l=="empty")
        {
            if(st.empty()){
                cout << 1 <<'\n';
            }
            else{
                cout << 0 <<'\n';
            }
        }

    }

}