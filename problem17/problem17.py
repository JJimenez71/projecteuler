def calc_num(i):
    ones_dict = {
            "0": 0, # if it's zero in the ones place it doesn't matter
            "1": 3, #one
            "2": 3, #two
            "3": 5, #three
            "4": 4, #four
            "5": 4, #five
            "6": 3, #six
            "7": 5, #seven
            "8": 5, #eight
            "9": 4, #nine
            }
    teens_dict = {
            "0": 3, #ten
            "1": 6, #eleven
            "2": 6, #twelve
            "3": 8, #thirteen
            "4": 8, #fourteen
            "5": 7, #fifteen
            "6": 7, #sixteen
            "7": 9, #seventeen
            "8": 8, #eighteen
            "9": 8, #nineteen
            }
    tens_dict = {
            "0": 0, # if it's zero in the tens place it doesn't matter
            "1": 3, #ten
            "2": 6, #twenty
            "3": 6, #thirty
            "4": 5, #forty
            "5": 5, #fifty
            "6": 5, #sixty
            "7": 7, #seventy
            "8": 6, #eighty
            "9": 6, #ninety
            }
    num_string = str(i)
    num_length = len(num_string)
    curr = 0

    
    if num_length == 1:
        curr += ones_dict[num_string[0]]
    elif num_length == 2:
        if num_string[0] == "1":
            curr += teens_dict[num_string[1]]
        else:
            curr += tens_dict[num_string[0]] + ones_dict[num_string[1]]
    elif num_length == 3:
        curr += ones_dict[num_string[0]] + len('hundred')
        if num_string[1] == "0" and num_string[2] == "0":
            return curr
        else:
            curr += 3 # handle and
        if num_string[1] == "1":
            curr += teens_dict[num_string[2]]
        else:
            curr += tens_dict[num_string[1]] + ones_dict[num_string[2]]
    return curr
def main():
    sum = 0
    for i in range(1, 1000):
        sum += calc_num(i)
    sum += len("onethousand") # We can just hardcode this since it's an edge case
    print(f"Answer: {sum}")
            


if __name__ == "__main__":
    raise SystemExit(main())
