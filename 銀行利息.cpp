//2018 資訊學科能力競賽 新北區複賽 1
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
  int x,n;
  float r;
  cin>>x>>r>>n;
  int banksum=x+x*(r/100);
  int times=n;
  while (times>0){
    x+=x*(r/n)/100;
    times--;
  }
  cout<<x-banksum;
}
