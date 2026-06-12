#include <iostream>
#include <vector>
using namespace std;
int main()
{

    string str = "cvbnljdglskASDF";
    vector<int> ans(256, 0);

    for (int i = 0; i < str.length(); i++)
    {

        ans[str[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {

        if (ans[i] > 0)
        {
            cout << char(i) << "->" << ans[i] << endl;
        }
    }

    return 0;
}