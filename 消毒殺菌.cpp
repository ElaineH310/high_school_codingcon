//2020 資訊學科能力競賽 桃竹苗區複賽
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
  int nEntry, yTime, Ttime, Xunit, total=0;
  cin >> nEntry >> yTime;
  for(int i=0; i<nEntry; i++){
    cin >> Ttime >> Xunit;
    if (i==0){
      yTime+=Ttime;
    }
    int decrease = yTime - Ttime;
    if (decrease >= 0){
      Xunit -= decrease;
      if (Xunit > 0){
        total += Xunit;
      }
    }
  }
  cout << total;
}
