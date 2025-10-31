//2019 資訊學科能力競賽 新北區複賽
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
  vector <int> weightdbl;
  vector <int> weights(5);
  int sum=0;
  int weight;
  for (int i=0;i<10;i++){
    cin>>weight;
    weightdbl.push_back(weight);
  }
  sort (weightdbl.begin(), weightdbl.end());
  for (int j=0;j<10;j++){
    sum+=weightdbl[j];
  }
  weights[2]=sum/4-(weightdbl.front()+weightdbl.back());
  weights[0]=weightdbl[1]-weights[2];
  weights[1]=weightdbl[0]-weights[0];
  weights[4]=weightdbl[8]-weights[2];
  weights[3]=weightdbl[9]-weights[4];
  cout<<weights[0]<<" "<<weights[1]<<" "<<weights[2]<<" "<<weights[3]<<" "<<weights[4]<<endl;
}
