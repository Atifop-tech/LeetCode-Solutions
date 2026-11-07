class Solution {
public:
    bool checkIfPangram(string sentence) {
        bitset<26> b;

        for(auto c : sentence)
            b.set(c - 'a');
        
        return b.all();
    }
};