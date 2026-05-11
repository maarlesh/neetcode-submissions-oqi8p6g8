class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        val map = hashMapOf<Char, Int>()
        for(i in s){
            map[i] = map.getOrDefault(i , 0) + 1
        }
        for(j in t){
            val count = map.getOrDefault(j,0)
            if(count == 0){
                return false
            }else{
                map[j] = count - 1
            }
        }
        return map.values.all{it == 0}
    }
}
