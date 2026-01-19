while(True):
    inp=int(input('enter number: '))
    if (0>=inp or inp>8):
        continue
    else:
        break


    # this is just a counter loop.
i = 0
while(i <inp):

    # This looop is for printing spaces before (#).
    j = inp
    while (j > i):
        spc=j-i  #this is temp variable ,just to keep track freq of space.
        print(' '*spc,end='')
        j -=j

    # THis looop is for printing '#'
    k=0
    while (k <=i ):
        print('#',end='')
        k +=1
    print()

    # increment after each cycle
    i +=1
