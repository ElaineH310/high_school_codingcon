//https://tpmso.org/toi/wp-content/uploads/question/202312-OFFLINE/Game.pdf
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    
using namespace std;

struct Story
{
    string name;
    int money;
    int num;
};

int main()
{
    int N;
    cin >> N;
    vector<Story> stories;
    for (int n = 0; n < N; ++n)
    {
        string S;
        int X;
        int A, B;
        cin >> S >> X;
        cin >> A >> B;
        vector<int> money(B+1);
        for(int i = A; i <= B; ++i)
        {
            cin >> money[i];
        }
        if (A <= X && X <= B)
        {
            stories.push_back({S, money[X], X});
        }
    }
    Story ans = {"", 10000, 0};
    for (int i = 0; i < stories.size(); ++i)
    {
        if (stories[i].num > ans.num)
        {
            ans = stories[i];
        }
        else if (stories[i].num == ans.num && stories[i].money < ans.money)
        {
            ans = stories[i];
        }
        else if (stories[i].num == ans.num && stories[i].money == ans.money && stories[i].name < ans.name)
        {
            ans = stories[i];
        }
    }

    if(stories.size()>0)
        cout << ans.name << endl;
    else
        cout << "Not Found" << endl;
}
