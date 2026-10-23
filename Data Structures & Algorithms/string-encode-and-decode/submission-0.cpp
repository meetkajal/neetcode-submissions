class Solution {
public:

    string encode(vector<string>& s) {
          string encoded;

    for (string &str : s) {
        encoded += to_string(str.length()); // store length
        encoded += '#';                     // fixed separator
        encoded += str;                     // actual string
    }

    return encoded;
}

    

    vector<string> decode(string s) {
         vector<string> result;
    int i = 0;
    int n = s.length();

    while (i < n) {
        int len = 0;

        // Extract the length
        while (s[i] != '#') {
            len = len * 10 + (s[i] - '0');
            i++;
        }

        i++; // skip '#'

        // Extract the actual string using the length
        string temp = s.substr(i, len);
        result.push_back(temp);

        i += len;
    }

    return result;

    }
};
