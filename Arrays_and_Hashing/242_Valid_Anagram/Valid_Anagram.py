def Valid_Anagram(s,t):
    tab2=[t[i] for i in range(len(t))]
    for i in range(len(s)):
        if s[i] not in tab2:
            return False
        else:
            tab2.remove(s[i])
    return True

#testin
s = "anagram"
t = "nagaram"

print(Valid_Anagram(s,t))


s = "rat"
t = "car"

print(Valid_Anagram(s,t))