from collections import defaultdict
def collatz(num):
    length = 1
    while True:
        if num == 1:
            return length
        if num % 2 == 0:
            num = int(num / 2)
        else:
            num = int((3 * num) + 1)
        length += 1

def main():
    longest_chain = 0
    starting_num = 0
    for i in range(1, 1000000):
        chain = collatz(i)
        if chain > longest_chain:
            longest_chain = chain
            starting_num = i
    print(f"Answer: {starting_num}")

main()