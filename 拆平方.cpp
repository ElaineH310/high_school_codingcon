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
  int n,a;
  cin>>n;
  a=1;
  for (int i=2; i<=sqrt(n); i++){
    while(n%(i*i)==0){
      a*=i;
      n/=i*i;
    }
  }
  if (a>1) {
      cout<<a<<" ";
  }
  if (n>1){
    cout<<"sqrt("<<n<<")";
  }
}
