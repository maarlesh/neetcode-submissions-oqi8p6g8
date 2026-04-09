class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        val arr = IntArray(26)
        for(i in s){
            arr[i-'a']++
        }
        for(j in t){
            arr[j-'a']--
        }
        return arr.all{it == 0}
    }
}
