class Solution {
public:
    
    vector<string> split_words(string &s)
    {
        vector<string> words;
        string word="";
        
        for(auto c:s)
        {
            if(c==' ')
            {
                if(!word.empty())
                {
                    words.push_back(word);
                    word="";
                }
            }
            else
            {
                word+=c;
            }
        }
        
        if(!word.empty())
        {
            words.push_back(word);
        }
        
        return words;
    }
    
    bool areSentencesSimilar(string sentence1, string sentence2) {
        
        vector<string> s1 = split_words(sentence1);
        vector<string> s2 = split_words(sentence2);
        
        if(s1.size()<s2.size()) swap(s1,s2);
        
        int start=0;
        int end=0;
        int n1 = s1.size();
        int n2 = s2.size();
        
        while(start<n2 && s1[start] == s2[start]) start++;
        
        while(end<n2 && s1[n1-end-1] == s2[n2-end-1]) end++;
        
        return (start+end)>=n2;
    }
};