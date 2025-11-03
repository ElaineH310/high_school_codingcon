//2019 資訊學科能力競賽 彰雲嘉區複賽
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
  int n;
  cin >> n;
  vector<double> richter(n);
  
  for (int i = 0; i < n; ++i) {
    cin >> richter[i];
  }
  
  for (int i=0;i<n;i++){
    double E = pow(10, 4.8 + 1.5 * richter[i]);
    double tnt = E / (4.184 * pow(10, 6));
    cout << fixed << setprecision(1) << tnt << '\n';
  }
}
