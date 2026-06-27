#include <iostream>
#include <vector>
using namespace std;


int findMaxThaw(const vector<int>& temperatures) {
    int maxLen = 0;
    int currentLen = 0;

    for (int t : temperatures) {
        if (t > 0) {
            ++currentLen;
        } else {
            if (currentLen > maxLen) maxLen = currentLen;
            currentLen = 0;
        }
    }
    
    if (currentLen > maxLen) maxLen = currentLen;

    return maxLen;
}

int main() {
    int N;
    cin >> N;

    vector<int> temps(N);
    for (int i = 0; i < N; ++i) {
        cin >> temps[i];
    }

    int result = findMaxThaw(temps);
    cout << result << endl;

    return 0;
}