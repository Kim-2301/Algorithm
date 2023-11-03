#include <iostream>
#include <list>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string init;
    cin >> init;
    list<char> fin;

    for(auto i:init){
        fin.push_back(i);
    }
    list<char>::iterator cursor = fin.end();

    int M=0;
    char a;
    cin >> M;
    while(M--){
        cin >> a;
        if(a=='L'){
            if(cursor != fin.begin()){
                cursor--;
            }
        }
        else if(a=='D'){
            if(cursor != fin.end()){
                cursor++;
            }
        }
        else if(a=='B'){
            if(cursor!= fin.begin()){
                cursor=fin.erase(cursor);
                cursor--;
            }
        }
        else if(a=='P'){
            char b;
            cin >> b;
            fin.insert(cursor,b);
        }
    }
    for(auto i : fin){
        cout << i;
    }
}