#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        string p,str;
        int n,error=0;
        deque<int> dq;
        bool rev=false;

        cin >> p;
        cin >> n;
        cin >> str;
        string s="";

        for(auto a : str){
            if(isdigit(a)){
                s += a;
            }
            else{
                if(!s.empty()){
                    dq.push_back(stoi(s));
                    s="";
                }
            }
        }

        for(auto b : p){
            if(b=='R'){
                if(rev){
                    rev = false;
                }
                else{
                    rev = true;
                }
                
            }
            else if(b=='D'){
                if(dq.empty()){
                    error=1;
                    break;
                }
                else{
                    if(rev){
                        dq.pop_back();
                    }
                    else{
                        dq.pop_front();
                    }
                }
            }
        }
        if(error==1){
            cout << "error" << '\n';
        }

        else{
            cout << '[';
            if(!dq.empty()){
                if(rev == false){
                    for(deque<int>::iterator it = dq.begin(); it !=dq.end()-1; it++){
                        cout << *it << ',';
                    }
                    cout << dq.back();
                }
                else{
                    for(deque<int>::iterator itt = dq.end()-1; itt != dq.begin(); itt--){
                        cout << *itt << ',';
                    }
                    cout << dq.front();
                }
            }
            cout << ']' << '\n';
        }

    }
}
//string 돌면서 문자, 숫자 판별
//숫자면 s에 저장, 문자 만나면 s를 형변환 후 덱에 저장하고 s초기화