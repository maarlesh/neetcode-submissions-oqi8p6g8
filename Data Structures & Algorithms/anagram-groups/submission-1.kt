class Solution {
    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        var result = listOf<List<String>>()
        for (i in strs.indices) {
            var li = listOf<String>()
            li = li + strs[i]
            for (j in strs.indices) {
                if (isAnagram(strs[i], strs[j]) && (i != j)) {
                    // if(!li.contains(strs[i])) li = li + strs[i]
                    // if(!li.contains(strs[j]))li = li + strs[j]
                    // li = li + strs[i]
                    li = li + strs[j]
                }
            }
            if(li.isNotEmpty() && !result.any { existing -> existing.sorted() == li.sorted()}) result = result + listOf(li)
        }
        return result
    }

    fun isAnagram(s: String, t: String): Boolean {
        val map = hashMapOf<Char, Int>()
        if (s.length != t.length) return false
        if(s.isEmpty() && t.isEmpty()) return true
        for (i in s) {
            map[i] = map.getOrDefault(i, 0) + 1
        }
        for (i in t) {
            if (map[i] == 0) {
                return false
            }
            map[i] = map.getOrDefault(i, 0) - 1
        }
        return map.values.all { it == 0 }
    }
}