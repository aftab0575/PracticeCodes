#include <iostream>
using namespace std;

class Solution {
public:
    void merge(int nums1[], int nums2[], int m, int n) {
       
       
       
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (nums1[j] == 0) {
                    nums1[j] = nums2[i];
                    break;
                }
            }
        }

        for (int j = 0; j < m; j++){
            if (nums1[j] >= nums1[j+1])
            {
                nums1[j+1] = nums1[j];
            }
            
        }

        for (int j = 0; j < m; j++)
            cout << nums1[j] <<" ";
    }
};



int main() {

    int nums1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};

    int m = sizeof(nums1)/sizeof(nums1[0]);
    int n = sizeof(nums2)/sizeof(nums2[0]);

    
    Solution obj;
    obj.merge(nums1, nums2, m, n);
     
}
