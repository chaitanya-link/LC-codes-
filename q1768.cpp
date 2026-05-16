class Solution {
public:
    string mergeAlternately(string word1, string word2) {
           string word3="";
           int n=min(word1.length(),word2.length());
           //traverssing when equal
           for(int i=0;i<n;i++){
            word3 +=word1[i];
            word3 +=word2[i];
           }

           //rem of word1
           for(int i=n;i<word1.length();i++){
            word3 += word1[i];

           }

           //rem of word2
           for(int i=n;i<word2.length();i++){
            word3 += word2[i];

           }
      
        return word3;
    }
};