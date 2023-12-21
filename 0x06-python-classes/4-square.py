#!/usr/bin/python3
"""a class Square that defines a square by: (based on 3-square.py)"""


class Square:
    """the class of square"""
    def __init__(self, size=None):
        self.__size = size

    @property
    def size(self):
        """get the size of the square"""
        return self.__size

    @size.setter
    def size(self, value):
        """Check and set the size of the square"""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if value < 0:
            raise TypeError("size must be >= 0")
        self.__size = value

    def area(self):
        """return the area of the square"""
        return self.__size ** 2
