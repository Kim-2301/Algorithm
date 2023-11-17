#include <iostream>
#include <utility>
using namespace std;

int n,h,mx=0;
int arr[256][1000];

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   for (int t = 1; t <= 10; t++) {
      int cnt = 0;
      cin >> n;

      for (int i = 0; i < 256; i++) {
         fill(arr[i], arr[i] + n, 0);
      }

      for (int i = 0; i < n; i++) {
         cin >> h;
         if (mx <= h) {
            mx = h;
         }
         if (h > 0) {
            for (int x = 0; x < h; x++) {
               arr[x][i] = 1;
            }
         }
      }

      for (int i = 2; i < n-2 ; i++) {
         pair<int, int>cur = make_pair(0, i);
         while (arr[cur.first][cur.second] == 1) {      
            if (arr[cur.first][cur.second - 1] == 0 && arr[cur.first][cur.second - 2] == 0
               && arr[cur.first][cur.second + 1] == 0 && arr[cur.first][cur.second + 2] == 0) {
               cnt++;
            }
            cur.first++;
          }
      }

      cout << '#' << t << ' ' << cnt << '\n';
   }

   
}