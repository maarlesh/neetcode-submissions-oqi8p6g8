class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val set = HashSet<Int>()
        for (i in nums) {
            if (!set.add(i)) return true
        }
        return false
    }
}