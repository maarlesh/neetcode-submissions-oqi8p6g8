class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        if (s.length != t.length) return false

        val map = HashMap<Char, Int>()

        for (i in s) {
            map[i] = map.getOrDefault(i, 0) + 1
        }

        for (i in t) {
            val count = map.getOrDefault(i, 0)
            if (count == 0) return false
            map[i] = count - 1
        }

        return true
    }
}