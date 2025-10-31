//2021 資訊學科能力競賽 北二區複賽
#include<bits/stdc++.h> 
using namespace std; 
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0); 
  cin.tie(NULL);
}

int main(){
  best();
  int m,n,k;
  int a,b;
  int ans=0;
  cin>>m>>n>>k;
  vector<vector<int>> lawn(m + 1, vector<int>(n + 1, 0));
  
  for (int i=0;i<m;i++){
    lawn[i][n]=1;
    lawn[m][i]=1;
  }
  lawn[m][n] = 1;
  for (int i=0; i<k; i++){
    cin >> a >> b;
    lawn[a][b] = 1;
  }

  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
          if (lawn[i][j] == 0) {
              if (lawn[i][j + 1] == 0) ans++;
              if (lawn[i + 1][j] == 0) ans++;
              if (lawn[i + 1][j + 1] == 0) ans++;
          }
      }
  }
  
  cout<<ans*3;
}
