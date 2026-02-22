//3477

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int unplaced = 0;

        vector<bool> used(n, false);
        if (fruits.size() != baskets.size()) {
            return -1;
        }
        for (int i = 0; i < n; i++) {
            bool placed = false;

            for (int j = 0; j < n; j++) {
                if (used[j] == false && fruits[i] <= baskets[j]) {
                    placed = true;

                    used[j] = true;
                    break;
                }
            }
            if (placed == false) {
                unplaced++;
            }
        }
        return unplaced;
    }
};