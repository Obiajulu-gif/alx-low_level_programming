#!/usr/bin/python3

def print_reversed_list_integer(my_list=[]):
    reversed_list = list(my_list)
    reversed_list.reverse()
    for x in reversed_list:
        print(x)
