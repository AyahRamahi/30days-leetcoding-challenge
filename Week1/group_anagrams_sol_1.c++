class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> mp;
        int sz=0;
        string temp;
        vector<vector<string>> result;

        for(string str: strs){
            temp = str;
            sort(temp.begin(), temp.end());
            
            if(mp.find(temp) == mp.end()){ // doesn't exist
                vector<string> temp2;
                temp2.push_back(str);
                result.push_back(temp2);
                mp[temp] = sz+1;
                sz++;
            }
            else{ // exists
                result[mp[temp]-1].push_back(str);
            }
        }
        return result;
    }
};