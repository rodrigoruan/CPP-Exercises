class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr = {};
        string r = "";
        
        for(int i = 0; i < s.size() + 1; i++) {
            if(s[i] == ' ' || i == s.size()) {
                arr.push_back(r);
                r = "";
            }
            else {
                r += s[i];
            }
        }
        
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                if(int(arr[i][arr[i].size() - 1]) > int(arr[j][arr[j].size() - 1])) {
                    string temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }        
            }
        }
           
        string res = "";

        for(string c : arr) res += c.substr(0, c.size() - 1) + " ";
        
        return res.substr(0, res.size() - 1);
    }
};