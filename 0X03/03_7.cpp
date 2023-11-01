#include <iostream>
using namespace std;

int main(){
    int N,K,cnt=0;
    int Y[2][7]={};
    cin >> N >> K;

    for(int i=0;i<N;i++){
        int a,b;
        cin >> a >> b;
        Y[a][b]++;
    }

    for(int i=0;i<2;i++){
        for(int j=0; j<7;j++){
            cnt+=Y[i][j]/K;
            if(Y[i][j]%K!=0){
                cnt++;
            }
        }
    }

    cout << cnt;
}