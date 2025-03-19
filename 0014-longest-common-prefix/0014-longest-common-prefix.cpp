class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j=0 ,k=0;
        string prefix = strs[0];
        if(prefix.length()==0) return "";
        for(int i=1; i<strs.size();i++){
             j=0;
            k=0;
            if(prefix[k] != strs[i][j]){
                 return "";
            }
           
                while(k<prefix.length()){
                if(prefix[k] == strs[i][j]){
                    j++;
                    k++;
                }
                else prefix = prefix.substr(0,k);
            }
            
        }
        return prefix;




















    }
};