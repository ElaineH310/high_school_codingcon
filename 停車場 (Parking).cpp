#include <bits/stdc++.h>
using namespace std;

int main()
{
  int S, M, L;
  cin >> S >> M >> L;
  int N;
  cin >> N;
  int ans = 0;
  for(int i=0; i<N; i++) {
    int car;
    cin >> car;
    if(car < 200 && S > 0) {
      ans++;
      S--;
    }
    else if(car < 500 && M > 0) {
      ans++;
      M--;
    }
    else if(L > 0) {
      ans++;
      L--;
    }
  }
  cout << ans << endl;
}
