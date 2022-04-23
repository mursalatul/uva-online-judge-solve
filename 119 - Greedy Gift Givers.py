def toDict(ls):
    namesDict = {}
    for n in ls:
        namesDict[n] = 0
    return namesDict

try:
    while True:
        npeople = int(input())
        lpeople = input().split()
        dicPeople = toDict(lpeople)
        for _ in range(npeople):
            data = input().split()
            if data[2] == '0':
                continue
            perPerson = int(data[1]) // int(data[2])
            if int(data[1]) % int(data[2]) == 0:
                dicPeople[data[0]] += (-int(data[1]))
            else:
                dicPeople[data[0]] += (-(perPerson * int(data[2])))
            for name in data[3:]:
                dicPeople[name] += perPerson
        for inx, itm in enumerate(dicPeople):
            print(itm, dicPeople[itm])
        print()
except:
    exit()
