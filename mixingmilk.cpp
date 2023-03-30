#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ifstream cin("mixmilk.in");
    ofstream cout("mixmilk.out");
    int capacities[3];
    int milk[3];
    for (int i = 0; i < 3; i++) {
        cin >> capacities[i] >> milk[i];
    }
    for (int i = 0; i < 100; i++) {
        int from = i % 3;
        int to = (i + 1) % 3;
        int amount = min(milk[from], capacities[to] - milk[to]);
        milk[from] -= amount;
        milk[to] += amount;
    }
    for (int i = 0; i < 3; i++) {
        cout << milk[i] << endl;
    }
    return 0;
}
