#include<bits/stdc++.h>  // 萬用標頭檔
using namespace std;         // 命名空間
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0);  // 輸出入優化
  ios::sync_with_stdio(false); 
  cin.tie(NULL);
}
int main(){
  best();
  int n, ans;
  cin>>n;
  vector <int> s;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    s.push_back(a);
  }
  sort(s.begin(),s.end());
  ans=s[(n+1)/2];
  cout<<ans;
}
