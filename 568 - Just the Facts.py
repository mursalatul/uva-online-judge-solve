from math import factorial

while True:
    try:
        n = input()
        if n == "":
            break
        data = str(factorial(int(n)))
        for i in data[::-1]:
            if i != '0':
                print('%5s -> %s' % (n, i))
                break
    except:
        break
