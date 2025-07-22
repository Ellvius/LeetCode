class Solution {
    int merge(vector<int>& arr, int low, int mid, int high){
        int cnt = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && arr[i] > 2LL * arr[j]) {
                j++;
            }
            cnt += (j - (mid + 1));
        }

        vector<int> temp;
        int l = low, r = mid + 1;
        while(l <= mid && r <= high){
            if(arr[l] <= arr[r]){
                temp.push_back(arr[l]);
                l++;
            }
            else {
                temp.push_back(arr[r]);
                r++;
            }
        }

        while(l <= mid){
            temp.push_back(arr[l]);
            l++;
        }

        while(r <= high){
            temp.push_back(arr[r]);
            r++;
        }

        for(int i = low; i <= high; i++){
            arr[i] = temp[i-low];
        }
        return cnt;
    }


    int mergeSort(vector<int>& arr, int low, int high){
        if(low >= high) return 0;
        int cnt = 0;
        int mid = (low + high)/2;
        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += merge(arr, low, mid, high);
        return cnt;
    }
public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};