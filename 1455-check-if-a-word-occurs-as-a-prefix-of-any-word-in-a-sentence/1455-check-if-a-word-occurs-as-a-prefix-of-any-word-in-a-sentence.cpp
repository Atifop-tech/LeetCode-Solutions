class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int size = searchWord.size();
        stringstream ss(sentence);
        string word = "";
        int i = 0;

        while(ss >> word){
            ++i;
            if(word.size() < size) continue;
            if(word.substr(0, size) == searchWord) return i;
        }

        return -1;
    }
};