import time


def enterLists(a,b,n):
    c= [0] * n
    for i in range(n):
        c[i] = a[i] +b[i]
    return c
def main():
    n = 10000
    list1= [1]*n
    list2= [1]*n
    t1 = time.perf_counter()
    
    lisT = enterLists(list1,list2,n)

    t2 = time.perf_counter()

    elapsedTime = (t2-t1) * 10000

    print ("Elapsed time in python = ", elapsedTime)
if __name__=="__main__":
    main()