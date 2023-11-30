'''
If you think I'm going to do this problem in c++ that is wild.
I don't see any reason to try and attempt this sort of problem in a language
that would make it so hard. I will just stick to python on this one :3

Side note...we'll see how much longer I'll use C++ to do these problems haha.
'''
def main():
    sum = 0;
    file = open('input.txt', 'r')
    input = file.readlines()
    for num in input:
        sum += int(num)
    print(f"Answer: {sum}")

if __name__ == "__main__":
    main()
