#include <iostream>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,sum=0;
    cin >> k;
    stack<int> st;

    while(k--){
        int x;
        cin >> x;
        if(x==0){
            sum -= st.top();
            st.pop();
        }
        else{
            st.push(x);
            sum += st.top();
        }
    }
    cout << sum;
}