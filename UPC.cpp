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
  int n;
  cin>>n;
  while (n--) {
    int sum=0;
    string code_str;
    cin >> code_str;
    
    if (code_str.size() != 11) {
        cout << -1;
        continue;
    }
    //handling wrong input
    
    vector <int> code(11);
    for (int i=0;i<11;i++){
      code[i]=code_str[i]-'0';
    }
    for (int i = 0; i < 11; i++) {
        if (i % 2 == 0)
            sum += 3 * code[i];
        else
            sum += code[i];
    }
    //add till x11
    //this part was fixed by AI for like 5 times
    
    int check_digit = (10 - (sum % 10)) % 10;
    cout << check_digit << "\n";
  } 
}

//一○八學年度高級中學資訊學科能力競賽 彰雲嘉區複賽程式設計試題(一)
