class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val hashMap = HashMap<String, MutableList<String>>()
        for(str in strs){
            val key = str.toCharArray().sorted().joinToString("")
            if(!hashMap.contains(key)){
                hashMap[key] = mutableListOf()
            }
            hashMap[key]!!.add(str)
        }
        return hashMap.values.toList()
    }
}