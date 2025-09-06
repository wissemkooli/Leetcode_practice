def TopKFrequent(l,k):
    d={}
    for elt in l:
        if elt not in d:
            d[elt]=l.count(elt)
    t=list(d.items())
    t=sorted(t, key=lambda x : x[1], reverse= True)
    res=[]
    for i in range (k):
        res.append(t[i][0])
    return res



nums = [1,1,1,2,2,3]
k = 2
print(TopKFrequent(nums,k))