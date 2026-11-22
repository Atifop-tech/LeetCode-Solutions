class Solution {
public:
    bool checkString(string s) {
        bool found = 0;
        for(auto ch : s){
            if(ch == 'b') found = 1;
            else if(ch == 'a' && found) return 0;
        }

        return 1;
    }
};