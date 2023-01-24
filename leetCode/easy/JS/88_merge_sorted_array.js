// had to look at my old python code from 2022

var merge = function(nums1, m, nums2, n) {
    // checking both ends
    while (m > 0 && n > 0){
        // if nums1 end is larger than nums2 end
        if (nums1[m-1] > nums2[n-1]){
            nums1[m+n-1] = nums1[m-1]
            m -= 1
        } else { // else if nums2[x] > nums1[y] 
            nums1[m+n-1] = nums2[n-1]
            n -= 1
        }
    }
    // catches any left over num2 values and insert them into num1
    while (n > 0){
        nums1[n-1] =nums2[n-1]
        n -= 1
    }
};