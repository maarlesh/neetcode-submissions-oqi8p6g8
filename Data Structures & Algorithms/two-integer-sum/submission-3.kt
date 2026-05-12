class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {
        val map = hashMapOf<Int,Int>()
        for(i in nums.indices){
            val complement = target - nums[i]
            print("Map before : ${map}")
            print("Complement : ${complement}")
            if(map.get(complement) != null){
                return intArrayOf(map[complement]!!, i)
            }else{
                map[nums[i]] = i
            }
            print("Map after: ${map}")
        }
        // print("Map : ${map}")
        return intArrayOf()
    }
}
