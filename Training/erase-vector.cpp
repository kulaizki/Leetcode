#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v = {2, 4, 5, 9, 1, 3};

    for (int x : v) { cout << x << ' '; }
    cout <<'\n';

    // remove first
    v.erase(v.begin(), v.begin() + 1);
    for (int x: v) { cout << x << ' '; }
    cout << '\n';

    // remove last
    v.erase(v.begin() + v.size() - 1, v.end());
    for (int x: v) { cout << x << ' '; }
}