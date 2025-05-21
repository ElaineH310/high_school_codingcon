#include <iostream> 
#include <algorithm>
#include <iomanip>
using namespace std;
int main() {
  double R,G,B, h,s,l;
  cin>>R>>G>>B;
  double r=R/255;
  double g=G/255;
  double b=B/255;
  double maxv = max(r, max(g, b));
  double minv = min(r, min(g, b));
  l=(maxv+minv)/2;
  if (maxv==minv){
    h=0;
  }else if (maxv==r && g>=b){
    h=60*(g-b)/(maxv-minv);
  }else if (maxv==r && g<b){
    h=60*(g-b)/(maxv-minv)+360;
  }else if (maxv==g && maxv!=r){
    h=60*(r-g)/(maxv-minv)+120;
  }else{
    h=60*(r-g)/(maxv-minv)+240;
  };
  
  if (l==0 || maxv==minv){
    s=0;
  }else if (0<l<=0.5){
    s=(maxv-minv)/(2*l);
  }else{
    s=(maxv-minv)/(2-2*l);
  };
   cout << setprecision(0) << fixed << h << " " << s * 255 << " " << l * 255 << endl;
  }

    
// #include <iostream> 
// #include <iomanip>
// #include <algorithm>
// using namespace std;
// int main() {
//   int R, G, B, h, s, l;
//   cin >> R >> G >> B;
//   int r = R/255;
//   int g = G/255;
//   int b = B/255;
//   int maxv = max(r, max(g, b));
//   int minv = min(r, min(g, b));
//   l = (maxv + minv) / 2;
//   if (maxv == minv) {
//     h = 0;
//   } else if (maxv == r && g >= b) {
//     h = 60 * (g - b) / (maxv - minv);
//   } else if (maxv == r && g < b) {
//     h = 60 * (g - b) / (maxv - minv) + 360;
//   } else if (maxv == g && maxv != r) {
//     h = 60 * (r - g) / (maxv - minv) + 120;
//   } else {
//     h = 60 * (r - g) / (maxv - minv) + 240;
//   }
//   if (l == 0 || maxv == minv) {
//     s = 0;
//   } else if (0 < l && l <= 0.5) {
//     s = (maxv - minv) / (2 * l);
//   } else {
//     s = (maxv - minv) / (2 * (1 - l));
//   }
//   s *= s;
//   l *= l;
//   cout << h << s << l;
// }
