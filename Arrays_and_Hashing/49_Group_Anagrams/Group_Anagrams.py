def GroupAnagrams1(strs):
    res = []
    for ch in strs:
        if res == []:
            res.append([ch])
            continue

        found = False
        for l in res:
            if sorted(l[0]) == sorted(ch):
                l.append(ch)
                found = True
                break
        if found == False:
            res.append([ch])

    return res

print(GroupAnagrams1(["eat","tea","tan","ate","nat","bat"]))
