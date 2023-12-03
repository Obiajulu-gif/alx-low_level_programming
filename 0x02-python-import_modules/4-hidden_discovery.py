#!/usr/bin/python3
import hidden_4


if __name__ == "__main__":
    for name in dir(hidden_4):
        module_name = []
        sorted_name = sorted(module_name)
        if not name.startswith("__"):
            module_name.append()
            
        for name in sorted_name:
            print(name)