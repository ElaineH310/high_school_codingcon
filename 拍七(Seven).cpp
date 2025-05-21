//https://tpmso.org/toi/wp-content/uploads/question/202303/Seven.pdf
// #include <iostream>
// using namespace std;

// int main() {
//   int s, e, b, k, cnt = 0;
//   cin >> s >> e >> b >> k;

//   for (int i = s; i <= e; i++) {
//     if (i % 10 == b) {
//       cnt++;
//       if (cnt == k) {
//         cout << i << endl;
//         return 0;
//       }
//     }
//   }

//   if (cnt < k) {
//     cout << "-1" << endl;
//   }

//   return 0;
// }
#include <iostream>
using namespace std;

bool iscontain(int num, int b)
{
  while(num != 0) 
  {
    if(num % 10 == b) return true;
    num /= 10;
  }
  return false;
}
int main()
{
  int S, E, B, K;
  cin >> S >> E >> B >> K;
  bool ans = false;
  for(int i=S; i<=E; i++){
    if(i % B == 0 || iscontain(i, B)) {
      K--;
    }
    if(K == 0) {
      cout << i << endl;
      ans = true;
      break;
    }
  }
  if(!ans) cout << -1 << endl;
}
