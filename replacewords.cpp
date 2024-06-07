class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> roots(dictionary.begin(), dictionary.end());
        vector<string> words;
        stringstream ss(sentence);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        for(auto& it:words){
            for(int i =1;i<it.size();i++){
                string prefix=it.substr(0,i);
                if(roots.count(prefix)){
                    it=prefix;
                    break;
                }
            }
        }
        word.clear();
    for(int i=0;i<words.size();i++){
        word+=words[i]+" ";
    }
    if(!word.empty()){
        word.pop_back();
    }
    return word;

    }
};
