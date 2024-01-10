#!/usr/bin/python3
def weight_average(my_list=[]):
    if not my_list:
        return 0

    nums = 0
    ben = 0

    for tup in my_list:
        nums += tup[0] * tup[1]
        ben += tup[1]

    return (nums / ben)
