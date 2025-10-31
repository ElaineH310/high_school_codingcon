//2022 資訊學科能力競賽 桃竹苗區複賽
#include<bits/stdc++.h>  // 萬用標頭檔
using namespace std;         // 命名空間
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0);  // 輸出入優化
  cin.tie(NULL);
}
int main(){
  best();
  int N,K,x;
  vector<int> v;
  cin>>N>>K;
  for (int i=0;i<N;i++){
    cin>>x;
    v.push_back(x);
  }
  int count=0;
  for (int i=0;i<N;i++){
    for (int j=i+1;j<N;j++){
      if (v[i]>v[j]*K){
        count++;
      }
    }
  }
  cout<<count;
}
