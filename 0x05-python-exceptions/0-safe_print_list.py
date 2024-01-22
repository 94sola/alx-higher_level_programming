#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    sub_total = 0
    for i in range(x):
        try:
            print(f"{my_list[i]}", end="")
            sub_total += 1
        except IndexError:
            break
    print()
    return(sub_total)
