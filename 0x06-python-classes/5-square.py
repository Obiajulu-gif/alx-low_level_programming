#!/usr/bin/python3
"""class Square that defines a square by: (based on 4-square.py)"""


class Square:
    """"""
    def __init__(self, size=0):
        """__init__ method
        Args:
            size (int): size of square
        """
        self.__size = size

    @property
    def size(self):
        """return the value of size"""
        return self.__size
    
    @size.setter
    def size(self, value):
        """check and set the value to size"""
        if not isinstance(self.__size, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise ValueError("size must be >= 0")
        self.__size = value
    
    def area(self):
        """Calculate the area of a square"""
        return self.__size * self.__size

    def my_print(self):
        """Print the square with the character '#'"""
        if self.__size == 0:
            print()
        else:
            for _ in range(self.__size):
                print("#" * self.__size)
