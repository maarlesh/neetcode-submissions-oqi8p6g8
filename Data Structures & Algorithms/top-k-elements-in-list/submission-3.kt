class Solution {
    fun topKFrequent(nums: IntArray, k: Int): IntArray {
        val hashMap = hashMapOf<Int,Int>()
        val rank = hashMapOf<Int,Int>()
        val result = mutableListOf<Int>()
        for(n in nums){
            hashMap[n] = hashMap.getOrDefault(n, 0) + 1
        }
        val sortedMap = hashMap.toList()
            .sortedByDescending { it.second }
            .toMap()
        var found = 0
        for((key,value) in sortedMap){
            if(result.isNotEmpty() && result[result.size - 1] != key){
                found++
            }
            if(found < k){
                result.add(key)
            }
        }
        return result.toIntArray()
    }
}
