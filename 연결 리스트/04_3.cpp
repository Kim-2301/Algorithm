#include <iostream>
#include <list>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    list<int> L;
    list<int>::iterator it = L.begin();
    
    for(int i=0; i<N; i++){
        L.push_back(i+1);
    }

    cout << '<';
    for(int j=0; j<N; j++){
        for(int i=0; i<K; i++){
            it++;
            if(it == L.end()){
                it=L.begin();
            }
            
        }
        cout << *it ;
        L.erase(it);
        it--;
        if(L.empty()==false){
            cout << ", ";
        }
        
    }
    cout << '>';
}