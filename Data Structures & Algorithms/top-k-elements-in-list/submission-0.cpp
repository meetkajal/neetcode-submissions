class Solution {
   public:

   static bool compare(pair<int, int> &p1, pair<int, int> &p2) {

    // Prioritise element's value incase their frequency was same
    if (p1.second == p2.second)
        return p1.first > p2.first;

    // Sort on the basis of decreasing order
    // of frequencies
    return p1.second > p2.second;
}
    vector<int> topKFrequent(vector<int>& arr, int k) {
          unordered_map<int, int>mp;

    int n=arr.size();

    for(int i=0;i<n;i++){

        mp[arr[i]]++;

    }

    vector<pair<int, int>> freq={mp.begin(), mp.end()};

    sort(freq.begin(), freq.end(), compare);

    vector<int >res;

    for(int i=0;i<k;i++){

         res.push_back(freq[i].first);
    }

    return res;
    }

      
};
