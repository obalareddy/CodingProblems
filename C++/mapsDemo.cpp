#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<int, int> A;
    A[1] = 100;
    A[2] = -1;
    A[3] = 200;
    A[100003234] = 1;

    map<char, int> cnt;
    string x = "aryan reddy";

    for (char c : x) {
        cnt[c]++;
    }

    cout << cnt['y'] << " " << cnt['d'] << endl;
}