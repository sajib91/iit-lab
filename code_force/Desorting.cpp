#include <bits/stdc++.h>
using namespace std;

void temp()
{
    string a;
    string ov, r, w;
    cin >> a;
    int over, ball, run = 0, wicket = 0;
    over = a.length() / 6;
    ball = a.length() % 6;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] >= '0' && a[i] <= '6')
        {
            run = run + a[i] - '0';
        }
        else
            wicket++;
    }
    ov = a.length() > 6 ? "Overs " : "Over ";
    if (run > 1)
        r = " Runs ";
    else
        r = " Run ";
    if (wicket > 1)
        w = " Wickets.\n";
    else
        w = " Wicket.\n";
    cout << over << "." << ball << " " << ov << run << r << wicket << w;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        temp();
    }
    return 0;
}