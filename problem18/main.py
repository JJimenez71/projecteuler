class Node:
    def __init__(self, parent, left, right):
        self.parent = parent
        self.left = left
        self.right = right


def main():
    # Read in the input
    file = open("example.txt")
    input = file.readlines()
    file.close()


    # Clean up our data
    data = []
    for line in input:
        split_line = line.split()
        print(split_line)
        for num in split_line:
            data.append(int(num))


    # Build our binary tree

if __name__ == "__main__":
    raise SystemExit(main())