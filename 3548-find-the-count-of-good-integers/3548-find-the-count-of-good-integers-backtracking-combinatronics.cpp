class Solution {
    long long factorial(int num){
        long long fact = 1;
        for(int i = 2; i <= num; i++)
            fact *= i;

        return fact;
    }   

    void generatePalindromes(string& current, int index, vector<string>& validPalindromes, int k){
        int length = current.size();
        if(index >= (length + 1)/2){
            if(stoll(current) % k == 0)
                validPalindromes.push_back(current);
            return;
        }

        if(index != 0){
            current[index] = '0';
            current[length - 1 - index] = '0';
            generatePalindromes(current, index + 1, validPalindromes, k);
        }

        for(char c = '1'; c <= '9'; c++){
            current[index] = c;
            current[length - 1 - index] = c;
            generatePalindromes(current, index + 1, validPalindromes, k);
        }
    }
public:
    long long countGoodIntegers(int n, int k) {
        vector<string> validPalindromes;
        string current(n, '0');
        generatePalindromes(current, 0, validPalindromes, k);

        unordered_set<string> patterns;

        for(const string& palindrome: validPalindromes){
            vector<int> frequency(10, 0);
            for(char digit: palindrome)
                frequency[digit - '0']++;

            string unique;
            for(int freq: frequency)
                unique += (char)('a' + freq);

            patterns.insert(unique);
        }

        long long total = 0;
        long long factn = factorial(n);

        for (const string& pattern : patterns) {
            long long totalValid = factn;

            for (char freqCode : pattern)
                totalValid /= factorial(freqCode - 'a');

            if (pattern[0] != 'a') {
                int zeroCount = pattern[0] - 'a' - 1;

                long long permValid = factorial(n - 1);
                for (int j = 1; j < pattern.size(); j++)
                    permValid /= factorial(pattern[j] - 'a');
                permValid /= factorial(zeroCount);

                totalValid -= permValid;
            }

            total += totalValid;
        }

        return total;
    }
};