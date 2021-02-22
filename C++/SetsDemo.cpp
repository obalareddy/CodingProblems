#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;


int main()
{
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(10);

    for (int x: S)
        cout << x << " ";
    cout << endl;

    auto it = S.find(-1);

    auto it2 = S.upper_bound(-1);

    auto it4 = S.upper_bound(10);

    if(it4 == S.end())
    {
        cout << "OOPS";
    }


}