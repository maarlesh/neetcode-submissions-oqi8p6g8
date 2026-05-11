class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val map = hashSetOf<Int>()
        nums.forEach{ num ->
            if(map.contains(num)){
                return true
            }else{
                map.add(num)
            }
        }
        return false
    }
}
