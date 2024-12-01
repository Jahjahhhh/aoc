#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> one;
    vector<int> two;
    int n, l = 0, similarity_score = 0;

    ifstream f("input.txt");

    while(f >> n) (l++ % 2 == 0) ? one.push_back(n) : two.push_back(n);

    int m; // I'm never getting hired am I? Nice exponential curve man
    for(int i = 0; i < one.size(); i++) {
        m = 0;
        for(int j = 0; j < two.size(); j++) {
            if(one[i] == two[j]) m++;
        }
        similarity_score += one[i] * m;
    }

    cout << similarity_score << endl;

    f.close();
}
