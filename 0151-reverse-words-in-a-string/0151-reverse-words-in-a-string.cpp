class Solution {
public:
    string reverseWords(string s) {
       string answer = "";
       //setting the correct position
       reverse(s.begin(),s.end());
        //setting the correct order of the word
        for(int i=0;i<s.length();i++){
             string word = "";
            while(i<s.length() && s[i]!=' '){
               word.push_back(s[i]);
               i++;
            }
           reverse(word.begin(),word.end());
           //what if we have extra spaces
           //empty word add = extra space in ans
           if(word.size()>0)
           answer = answer + " " + word;
        }
        return answer.substr(1);

    }
};