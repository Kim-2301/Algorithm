#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int dp[12];
  
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;

    for(int i=4; i<12; i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }

    while(t--){
        int n;
        cin >> n;
        cout << dp[n]<<'\n';

    }
}

/*
dp[1] = 1 => 1
dp[2] = 1+1, 2 => 2
dp[3] = 1+1+1, 1+2, 2+1, 3 => 4
dp[4] = 1+1+1+1, 1+1+2, 1+2+1, 1+3, 2+1+1, 2+2, 3+1 =>7
dp[n] = dp[n-1] + dp[n-2] + dp[n-3]
*/