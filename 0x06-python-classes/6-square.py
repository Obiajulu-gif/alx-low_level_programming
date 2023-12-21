#!/usr/bin/python3
"""a class Square that defines a square by: (based on 5-square.py)"""


class Square:
    """this is a square class"""
    def __init__(self, size=0, position=(0, 0)):
        """
        __init__ constructor
        Args:
            size (int): size of the square
        """
        self.__size = size
        self.__position = position

    @property
    def size(self):
        """return the value of size"""
        return self.__size

    @size.setter
    def size(self, value):
        """set the value of size"""
        if not isinstance(value, int):
            raise TypeError("size must be an integer")
        if size < 0:
            raise ValueError("size must be >= 0")

    @property
    def position(self):
        return self.__position

    @position.setter
    def position(self, value):
        if not isinstance(value, tuple) or len(value) != 2:
            raise TypeError("position must be a tuple of 2 positive integers")
        if not all(isinstance(num, int) for num in value) or \
                not all(num > 0 for num in value):
            raise TypeError("position must be a tuple of 2 positive integers")
        self.__position = value

    def area(self):
        """return the area of a square"""
        return self.__size * self.__size

    def my_print(self):
        """Print the square with the character '#'"""

    def my_print(self):
        """Print the square with the character '#'"""
        if self.__size == 0:
            print()
            return
        for _ in range(self.__position[1]):
            print()
        else:
            for _ in range(self.__size):
                print(" " * self.__position[0] + "#" * self.__size)
