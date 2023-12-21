#!/usr/bin/python3
"""defines a square by: (based on 1-square.py)"""


class Square:
    """
    Args:
        size: this is a private instance that take care of size
    """
    def __init__(self, size=0):
        if not isinstance(size, int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")
        self.__size = size
