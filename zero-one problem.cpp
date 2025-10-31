//2022 資訊學科能力競賽 新北區複賽 4
#include<bits/stdc++.h>  // 萬用標頭檔
using namespace std;         // 命名空間
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0);  // 輸出入優化
  cin.tie(NULL);
}
int n;
int n1, n0;
char graph[10][10];

char solve(int i,int j){
  n1=0,n0=0;
  for(int k=0; k<n; k++){
    if (graph[i][k]=='1'){
      n1++;
    }else if (graph[i][k]=='0'){
      n0++;
    }
    if (graph[k][j]=='1'){
      n1++;
    }else if (graph[k][j]=='0'){
      n0++;
    }
  }
  if (n0>n1){
    return '1';
  }else{
    return '0';
  }
}

int main(){
  best();
  cin>>n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cin>>graph[i][j];
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if (graph[i][j]=='b'){
        graph [i][j]=solve (i,j);
      }
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      cout<<graph[i][j]<<" ";
    }
    cout<<endl;
  }
}
