class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val hashMap = hashMapOf<Int, Int>();
        for(i in nums){
            hashMap[i] = hashMap.getOrDefault(i, 0) + 1
            if ((hashMap[i] ?: 0) > 1){
                return true
            }
        }
        return false
    }
}
