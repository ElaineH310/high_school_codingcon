//2019 資訊學科能力競賽 中投區複賽
#include<bits/stdc++.h>
using namespace std;

float mVel;

int level(float mVel){
  if(mVel>=51.0){
    return 5;
  }else if (50.9>=mVel&&mVel>=32.7){
    return 4;
  }else if(32.6>=mVel&&mVel>=17.2){
    return 3;
  }else if(17.1>=mVel&&mVel>=11.4){
    return 2;
  }else{
    return 1;
  }
}

int main(){
    freopen("in_01.txt","r",stdin);
    while (cin >> mVel) {

        int B=round(pow((mVel/0.836),(2.0/3.0)));
        if (B>17){
        B=17;
        }
        cout<<B<<","<<level(mVel)<<endl;
    }
  }
