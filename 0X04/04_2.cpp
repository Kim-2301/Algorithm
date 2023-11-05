#include <iostream>
#include <list>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
   
    for(int x=0; x<N;x++){

        string ll;
        cin >> ll;
        list<char> L;
        list<char>::iterator cursor = L.begin();

        for(auto i : ll) {

            if(i=='<'){
                if(cursor != L.begin()){
                    cursor--;
                }
            }
            else if(i=='>'){
                if(cursor != L.end()){
                    cursor++;
                }
            }
            else if(i=='-'){
                if(cursor != L.begin()){
                    cursor--;
                    cursor = L.erase(cursor);
                }
            }
            else{
                L.insert(cursor,i);
            }
        }
        for(auto a:L){
            cout << a;
        }
        cout << 'n'; 
    }
}