#!/usr/bin/python3


def safe_print_integer_err(value):
    """Prints an integer with "{:d}".format().
    Args:
        value (int): The integer to print.
    Returns:
        True if value has been correctly printed (it means the value is an
        integer)
        False otherwise.
    """
    try:
        print("{:d}".format(value))
        return True
    except (TypeError, ValueError) as err:
        import sys
        print("Exception: {}".format(err), file=sys.stderr)
        return False
