#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    vector<int> num;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        num.push_back(t);
    }

    sort(num.begin(), num.end());
    
    for(int i=0; i<n; i++){
        cout << num[i] << '\n';
    }

}
