#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<char>> nameshori(N, vector<char>(M, '*'));
    vector<vector<char>> namesvert(M, vector<char>(N, '*'));

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < min((int)row.size(), M); j++) {
            nameshori[i][j] = row[j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            namesvert[j][i] = nameshori[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << namesvert[i][j];
        }
        cout << "\n";
    }

    return 0;
}
//FAIL CODE
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int N, M;

//     cin>> N>>M;
//     vector<vector<char>> nameshori(N, vector<char>(M));
//     vector<vector<char>> namesvert(M, vector<char>(N));
//     for (int i=0; i<N; i++){
//         string row;
//         cin>> row;
//         for (int j = 0; j < M; j++) {
//             nameshori[i][j] = row[j];
//         }
//     }
//     for (int i=0; i<M; i++){
//         for (int j=0; j<N; j++){
//         if (nameshori[i][j] !='\0'){
//             namesvert[j][i] = nameshori[i][j];
//         }else{
//             namesvert[j][i]='*';
//         }
//         }
//     }
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cout << namesvert[i][j];
//         }
//         cout << "\n";
//     }
// }
