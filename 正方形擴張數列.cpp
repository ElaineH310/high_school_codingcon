#include<bits/stdc++.h>  // 萬用標頭檔
using namespace std;         // 命名空間
void tool(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0);  // 輸出入優化
  ios::sync_with_stdio(false); 
  cin.tie(NULL);
}
int AreaCalc(int i){
  if (i == 1){
    return 1;
  }else{
  return (i*i+(i-1)*(i-1));
  }
}
int ECalc(int i){
  if (i == 1){
    return 4;
  }else{
    return (4+8*(i-1));
  }
}
int main(){
  tool();
  int i;
  cin>>i;
  cout<<AreaCalc(i)<<" "<<ECalc(i);
}
