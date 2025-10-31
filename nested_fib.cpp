#include<bits/stdc++.h> 
using namespace std; 
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(0);  
  cout.tie(0); 
  cin.tie(NULL);
}
int fib(int n){
  if(n==0) return 0;
  if(n==1) return 1;
  return fib(n-1)+fib(n-2);
}
int main(){
  best();
  int p,m,n;
  cin>>p;
  int p2=p;
  while(p--){
    cin>>m>>n;
  }
  //F(n) = F(n – 1) + F(n – 2) //(n >= 2)
  while(m--){
    n=fib(n);
  }
  while(p2--){
    cout<<n<<endl;
  }

}
