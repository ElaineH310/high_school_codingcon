//https://tpmso.org/toi/wp-content/uploads/question/202504/Examination.pdf
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int score[6];
    for (int i = 0; i < 6; ++i)
    {
        cin >> score[i];
    }    
    int standard[5];
    for (int k = 0; k < 6; ++k)
    {
        for (int i = 0; i < 5; ++i)
        {
            cin >> standard[i];
        }
        if (score[k] == 0)
        {
            cout << "X" << endl;
            continue;
        }
        for (int i = 0; i < 5; ++i)
        {
            if (score[k] >= standard[i])
            {
                cout << char('A' + i) << endl;
                break;
            }
            else if (i == 4)
            {
                cout << "F" << endl;
            }
        }
    }
    return 0;
}
