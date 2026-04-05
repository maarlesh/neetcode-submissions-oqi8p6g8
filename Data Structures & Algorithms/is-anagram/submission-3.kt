class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        if(s.length != t.length) return false
        val hashMap1 = hashMapOf<Char,Int>();
        val hashMap2 = hashMapOf<Char,Int>();
        for(i in s){
            hashMap1[i] = hashMap1.getOrDefault(i, 0) + 1
        }
        for(i in t){
            hashMap2[i] = hashMap2.getOrDefault(i, 0) + 1
        }
        for((key,value) in hashMap1){
            if(hashMap2[key] != value){
                return false
            }
        }
        return true
    }
}
