class Solution {
public:


bool check(vector<int>& arr, int mid, int k) {
	
	long long totalHours = 0;
	for (int i = 0; i < arr.size(); i++) {
		totalHours += (arr[i] + mid - 1) / mid;
	}
	
	// return true if total hours needed is within limit
	return totalHours <= k;
}




    int minEatingSpeed(vector<int>& arr, int k) {

        int lo=1;

        	int hi = *max_element(arr.begin(), arr.end());
	int res = hi;
	
	while (lo <= hi) {
		int mid = lo + (hi - lo) / 2;
		
		if (check(arr, mid, k)) {
			// update result and try slower speed
			res = mid;       
			hi = mid - 1;
		} else {
			// need faster speed
			lo = mid + 1;    
		}
	}
	
	return res;
	
	
        
    }
};
