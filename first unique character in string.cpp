class Solution {
public:

    int firstUniqChar(string s) {
unordered_map<char,int>a;
for(char c:s) a[c]++;
for(int i=0;i<s.length();i++)
    if(a[s[i]]==1) return i;
    return -1;

}
        
    
};


