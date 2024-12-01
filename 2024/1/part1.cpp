#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> one; // List one
    vector<int> two; // List two
    int n, l = 0, sum = 0; // Current ID, which list to add, total distance

    ifstream f("input.txt");

    while(f >> n) (l++ % 2 == 0) ? one.push_back(n) : two.push_back(n);

    sort(one.begin(), one.end());
    sort(two.begin(), two.end());

    for(int i = 0; i < one.size(); i++) sum += abs(one[i] - two[i]);

    cout << sum << endl;

    f.close();
}
