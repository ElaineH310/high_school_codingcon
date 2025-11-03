#include<bits/stdc++.h> 
using namespace std; 
void best(){
  ios::sync_with_stdio(0);  
  cin.tie(NULL);
}
int main(){
  best();
  int n,m;
  cin>>n>>m;
  string line;
  n=line.size();
  vector <int> pos(m);
  cin>>line;
  for (int &w : pos) cin >> w;
  sort(line.begin(),line.end());
  for (int i=0;i<pos.size();i++){
    int a=pos[i];
    cout<<line[a-1];
  }
}
