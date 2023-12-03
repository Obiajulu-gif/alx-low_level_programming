#!/usr/bin/python3
import importlib.util


def main():
    # Specify the file path
    file_path = 'variable_load_5.py'

    # Create a module spec
    spec = importlib.util.spec_from_file_location('variable_load_5', file_path)

    # Create the module from the spec
    module = importlib.util.module_from_spec(spec)

    # Load the module
    spec.loader.exec_module(module)

    # Access and print the variable 'a'
    print(module.a)


if __name__ == "__main__":
    main()
