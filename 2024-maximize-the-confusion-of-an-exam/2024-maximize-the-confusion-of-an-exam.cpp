class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        
        int n = answerKey.size();

        // Case 1: Make all characters T
        int l = 0;
        int r = 0;
        int countF = 0;
        int ansT = 0;

        while (r < n) {

            // F -> T, so count F's
            if (answerKey[r] == 'F') {
                countF++;
            }

            // Too many F's, shrink window
            while (countF > k) {
                if (answerKey[l] == 'F') {
                    countF--;
                }
                l++;
            }

            // Current window is valid
            ansT = max(ansT, r - l + 1);

            r++;
        }


        // Case 2: Make all characters F
        l = 0;
        r = 0;
        int countT = 0;
        int ansF = 0;

        while (r < n) {

            // T -> F, so count T's
            if (answerKey[r] == 'T') {
                countT++;
            }

            // Too many T's, shrink window
            while (countT > k) {
                if (answerKey[l] == 'T') {
                    countT--;
                }
                l++;
            }

            // Current window is valid
            ansF = max(ansF, r - l + 1);

            r++;
        }

        return max(ansT, ansF);
    }
};