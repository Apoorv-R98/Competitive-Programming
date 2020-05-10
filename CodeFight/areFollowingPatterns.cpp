//Given an array strings, determine whether it follows the sequence given in the patterns array. In other words, 
//there should be no i and j for which strings[i] = strings[j] and patterns[i] ≠ patterns[j] or for which 
//strings[i] ≠ strings[j] and patterns[i] = patterns[j].

//Example

//For strings = ["cat", "dog", "dog"] and patterns = ["a", "b", "b"], the output should be
//areFollowingPatterns(strings, patterns) = true;
//For strings = ["cat", "dog", "doggy"] and patterns = ["a", "b", "b"], the output should be
//areFollowingPatterns(strings, patterns) = false.


boolean areFollowingPatterns(String[] strings, String[] patterns) {
    HashMap<String,String>mp = new HashMap<>();

    for(int i=0;i<strings.length;i++){
        if(mp.containsKey(patterns[i])){
            if(!mp.get(patterns[i]).equals(strings[i])) return false;
        }else if(mp.containsValue(strings[i])) return false;

        mp.put(patterns[i], strings[i]);
    }

    return true;
}
