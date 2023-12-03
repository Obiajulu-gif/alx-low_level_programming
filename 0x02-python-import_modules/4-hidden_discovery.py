#!/usr/bin/python3
import hidden_4

<<<<<<< HEAD
if __name__ == "__main__":
        module_names = [name for name in dir(hidden_4) if not name.startswith("__")]
            sorted_names = sorted(module_names)
                for name in sorted_names:
                            print(name)
=======

if __name__ == "__main__":
    module_names = [
        name for name in dir(hidden_4) if not name.startswith("__")]
    sorted_names = sorted(module_names)
    for name in sorted_names:
        print(name)
>>>>>>> 51d87284fff025a96605bec3e942cad16046b0f3
