class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        var map = hashMapOf<Int, Int>()
        for(i in nums){
            map[i] = map.getOrDefault(i , 0) + 1
            if(map[i] != null && map.get(i)!! > 1){
                return true
            }
        }
        return false
    }
}
