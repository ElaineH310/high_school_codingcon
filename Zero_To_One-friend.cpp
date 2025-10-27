#include <bits/stdc++.h>
using namespace std;
vector<int> pal [1000000];
int N,K;
int main() {
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
      int a,b;
      cin >> a>>b;
      pal[a].push_back(b);
      pal[b].push_back(a);
    }//connect friend a with friend b (mutuals)
  
    for (int i = 1; i <= N; i++){
      sort(pal[i].begin(),pal[i].end());
    }//sort
    for (int i = 1; i <= N; i++){ //from person 1
      for (int j=0; j<pal[i].size(); j++){//from person 1's friend 1
        if (j!=0) cout << " ";//space between numbers!
        cout << pal[i][j];
      }
      cout <<"\n";
    }
}
