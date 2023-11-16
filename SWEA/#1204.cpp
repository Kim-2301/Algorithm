#include <iostream>
using namespace std;

int test_case;
int num[101];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> test_case;
    while (test_case--)
    {
        int t,soc,mx=0,cnt=0;
        
        for(int x=0; x<101; x++){
            fill(num, num+101,0);
        }

        cin >> t;

        for(int i=0; i<1000; i++){
            cin >> soc;
            num[soc] += 1;
        }
        
        for(int a=0; a<101; a++){
            if(num[a]>= cnt){
                cnt = num[a];
                mx = a;
            }
        }
        cout << '#' << t << ' ' << mx << '\n';
    }
}