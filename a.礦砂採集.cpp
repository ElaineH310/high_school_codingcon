#include <bits/stdc++.h> 
using namespace std;
int main() {
  int n=0, M=0;
  int w[100];
  int p[1000];
  cin >> n >> M;
  for(int i=0; i<n; i++){
    cin >> w[i] >> p[i];
  }
  
  for(int i=0; i<n-1; i++){                
      for(int j=0; j<n-1-i; j++){               
          if(p[j] < p[j+1]){                                
            swap(p[j], p[j+1]);                
            swap(w[j], w[j+1]);                
          }
      }
  }

  int P=0;
    for(int i=0; i<n; i++){
        if(M-w[i]>=0){
          M-=w[i];
          P+=(p[i]*w[i]);
        }else if(M-w[i]<0)
        {
          P+=(p[i]*M);
          break;
        }
      }
  cout<< P;
}
