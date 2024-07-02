arr = [5, 7, 1, 2, 9]

def insertion(a):
    for i in range(1, len(a)):
        elem = a[i]
        smaller = i-1

        while smaller >= 0 and a[smaller] > elem:
            a[smaller+1] = a[smaller]
            smaller -= 1;
        a[smaller+1] = elem;
    return a 

print(insertion(arr))
