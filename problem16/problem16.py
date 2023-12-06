def main():
    print(2 ** 1000)
    
    str_num = str(2 ** 1000)

    sum = 0
    for i in str_num:
        sum += int(i)
    print(f"Answer: {sum}")

if __name__ == "__main__":
    main()
