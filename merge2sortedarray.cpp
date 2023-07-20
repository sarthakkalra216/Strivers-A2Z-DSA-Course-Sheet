int i=m-1;
        int j=0;
        while(i>=0&&j<n)
        {
            if(nums1[i]<nums2[j])swap(nums1[i--],nums2[j++]);
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
