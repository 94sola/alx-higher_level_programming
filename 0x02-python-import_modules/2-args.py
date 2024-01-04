#!/usr/bin/python3

if __name__ == "__main__":
    """Print the number of and list of arguments."""
    import sys

    show = len(sys.argv) - 1
    if show == 0:
        print("0 arguments.")
    elif show == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(show))
    for i in range(show):
        print("{}: {}".format(i + 1, sys.argv[i + 1]))
