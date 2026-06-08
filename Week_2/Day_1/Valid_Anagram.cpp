class Solution {
public:
    bool isAnagram(string s, string t) {
        

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        
        // if( s == t){
        //     return true;
        // }
        // else {
        //    return false;
        // }
        


         int freqTable[256]={0};
         for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;
         }//O(n)


        for(int i=0;i<t.size(); i++){
            freqTable[t[i]]--;
         }//O(m)
        
        for(int i=0;i<255 ; i++){
            if(freqTable[i]!=0){
                return false;
            }
        }//255
         return true;

        
    }
};
