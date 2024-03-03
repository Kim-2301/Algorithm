#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> st;
    int cnt=1;
    string ans;

    while(n--){
        int k;
        cin >> k;

        while(cnt <= k){
            st.push(cnt);
            cnt++;
            ans += "+\n";
        }
        if(st.top()!=k){
            cout << "NO";
            return 0;
        }
        st.pop();
        ans += "-\n";
        
    }
    cout << ans;
}