int Solution::solve(string A) {
    int vowels = 0;
    int consonants = 0;
    int vowel_multiplier = 0;
    int consonant_multiplier = 0;
    for(char k : A){
        if(k == 'a' || k == 'e' || k == 'i' || k =='o' || k=='u' ){
            vowel_multiplier++;
            consonants += consonant_multiplier;
        }
        else{
            consonant_multiplier++;
            vowels += vowel_multiplier;
        }
    }
    return (vowels+consonants)%((int)(1e9 + 7));
}
