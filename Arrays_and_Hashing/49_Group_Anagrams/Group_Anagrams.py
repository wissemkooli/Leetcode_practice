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


def GroupAnagrams2(strs):
    d = {}
    for s in strs:
        key = ''.join(sorted(s))
        if key not in d:
            d[key] = []
        d[key].append(s)
    
    return list(d.values())











print(GroupAnagrams1(["eat","tea","tan","ate","nat","bat"]))
print(GroupAnagrams2(["eat","tea","tan","ate","nat","bat"]))
