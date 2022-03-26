from math import factorial

"""this function will return a list of number of occurences of 0, 1, 2, ...,9"""
def countAll(n: str):
    all_num_count =  []
    for i in range(10):
        all_num_count.append(n.count(str(i)))
    return all_num_count

"""print data according to the problem format"""
def printData(data: list):
    for i in range(10):
        print('    (%d)%4d' % (i, data[i]), end="")
        if i == 4:
            print("\n", end="")
    print("\n", end="")

while True:
    n = int(input())
    if n == 0:
        break
    else:
        print(f"{n}! --")
        printData(countAll((str(factorial(n)))))
        