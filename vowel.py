def checkVowel(ch):
    list = [ 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' ]
    if list.__contains__(ch):
        print("vowel")
    else:
        print("not vowel")
        
checkVowel('d')