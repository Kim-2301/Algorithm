#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x,y;
    int cnt=0;
    int a[26]={0};
    int b[26]={0};

    cin >> x >> y;
    for(auto c : x){
        a[c-'a']++;
    }
    for(auto c : y){
        b[c-'a']++;
    }

    for(int i=0;i<26;i++){
        //cout << a[i] << " " << b[i] <<'\n';
        cnt += abs(a[i]-b[i]);
    }
    cout << cnt;
}