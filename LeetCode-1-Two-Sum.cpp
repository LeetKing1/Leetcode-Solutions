class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap; 
        int index, key; 
        
        for( index = 0; index < nums.size( ); index++ )
        {
            key = target - nums[ index ];
            
            if( hashMap.count( key ) != 0 )
            {
                return { hashMap[ key ], index };
            }
            
            hashMap.insert( { nums[ index ], index } );
        }
        
        return { -1, -1 };
    }
};
