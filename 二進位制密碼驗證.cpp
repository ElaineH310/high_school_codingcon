//2019 資訊學科能力競賽 新北區複賽
#include<bits/stdc++.h>
using namespace std;
int zeros=0, ones=0;
bool checkfive(string pwd) {
    for (int i = 0; i <= (int) pwd.length() - 3; i++) {
        if (pwd[i] == '1' && pwd[i+1] == '0' && pwd[i+2] == '1') {
            return true;
        }
    }
    return false;
}
void checkall(string pwd){
  if (pwd.length()<8||pwd.length()>12) cout<<2;
  if (zeros<2) cout<<3;
  if (ones<3) cout<<4;
  if ((checkfive(pwd))==false) cout<<5;
  else cout<<0;
}
  
int main(){
;
  string pwd;
  cin>>pwd;
  for (int i=0;i<pwd.length();i++){
    if (pwd[i]=='0'){
      zeros++;
    }else if (pwd[i]=='1'){
      ones++;
    }else{
      cout<<1;
      break;
    }
  }
  checkall(pwd);
  }
