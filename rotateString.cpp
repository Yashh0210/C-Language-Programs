class Solution {
public:
    bool rotateString(string s, string goal) {
        int len1=s.size();
        int len2=goal.size();
        char ch;
        if(len1!=len2) return false;
        if(s==goal) return true;
        int i=len1-2;
        string temp;
        while(i>=0){
            temp=s.substr(1,len1)+s[0];
            if(temp==goal) return true;
            s=temp;
            --i;

        }
        return false;
        
    }
};
