#!/usr/bin/python3

def list_division(my_list_1, my_list_2, list_length):
    newe_list = []
    tep_result = 0
    for i in range(0, list_length):
        try:
            tep_result = my_list_1[i] / my_list_2[i]
        except TypeError:
            tep_result = 0
            print("wrong type")
        except ZeroDivisionError:
            tep_result = 0
            print("division by 0")
        except IndexError:
            tep_result = 0
            print("out of range")
        finally:
            pass
        newe_list.append(tep_result)
    return newe_list
