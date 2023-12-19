#!/usr/bin/python3

def safe_function(fct, *args):
    """Executes a function safely."""
    import sys
    try:
        return fct(*args)
    except Exception as err:
        print("Exception: {}".format(err), file=sys.stderr)
        return None
