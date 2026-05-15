class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val map = HashMap<String, MutableList<String>>()
        strs.forEach{str -> 
            val key = str.toCharArray().sorted().joinToString("")
            if(!map.contains(key)){
                map[key] = mutableListOf()
            }
            map[key]!!.add(str)
        }
        return map.values.toList()
    }
}
