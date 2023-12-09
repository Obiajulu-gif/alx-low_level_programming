#!/usr/bin/python3

def square_matrix_simple(matrix=[]):
    result = []
    for row in matrix:
        row_result = []
        for element in row:
            squared_value = element ** 2
            row_result.append(squared_value)
        result.append(row_result)
    return result
