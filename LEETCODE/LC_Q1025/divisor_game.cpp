//first intuition

class Solution {
public:
    bool divisorGame(int n) {
        vector<int> help(n+1,0);
    for (int i = 2; i <= n; i++) {
        for (int div = 1; div <= i / 2 && !help[i]; div++)
            help[i] = (i % div == 0) && !help[i - div];
    }
        return help[n]==1;
    }
};

//better solution  beats-100%
class Solution {
public:
    bool divisorGame(int n) {
        return n%2==0;
    }
};
