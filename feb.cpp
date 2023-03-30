#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count;

    string s;
    cin >> s;

    vector<int> excitement_levels;

    // Iterate over all possible combinations of replacing F with B or E
    for (int mask = 0; mask < (1 << count(s.begin(), s.end(), 'F')); mask++) {
        string t = s;
        int idx = 0;

        // Replace all occurrences of F with B or E according to the current mask
        for (int i = 0; i < n; i++) {
            if (t[i] == 'F') {
                t[i] = (mask & (1 << idx)) ? 'B' : 'E';
                idx++;
            }
        }

        // Compute the excitement level of the current string
        int excitement = 0;
        for (int i = 1; i < n; i++) {
            if ((t[i - 1] == 'B' && t[i] == 'B') || (t[i - 1] == 'E' && t[i] == 'E')) {
                excitement++;
            }
        }

        // Add the excitement level to the vector if it's not already present
        if (find(excitement_levels.begin(), excitement_levels.end(), excitement) == excitement_levels.end()) {
            excitement_levels.push_back(excitement);
        }
    }

    // Output the number of distinct excitement levels and their values
    cout << excitement_levels.size() << endl;
    for (int i = 0; i < excitement_levels.size(); i++) {
        cout << excitement_levels[i] << endl;
    }

    return 0;
}
