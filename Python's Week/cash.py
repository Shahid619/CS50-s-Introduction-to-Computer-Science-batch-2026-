# THese are prices
quarter=25
dime=10
nikkel=5
penny=1
count=0

# this is a condition to get Valid cash.
while(True):
    cash=int(input('get cash: '))
    if (0 > cash ):
        continue
    else:
        break

# THis is logic body
while (cash != 0):
    if (cash >= quarter):
        cash=cash-quarter
        count +=1

    elif (quarter > cash >= dime ):
        cash  = cash- dime
        count +=1

    elif (cash >= nikkel and cash < quarter and cash < dime):
        cash = cash - nikkel
        count +=1

    elif ( cash >= penny and cash < quarter and cash < dime and cash < nikkel):
        cash = cash - penny
        count +=1
    else:
        break

print(count)
