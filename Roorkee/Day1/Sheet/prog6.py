def max_of_three(n1, n2, n3):
    largest = n1
    if(n2 > largest):
        largest = n2
    if(n3 > largest):
        largest = n3
    return largest

def main():
    print("Enter 3 numbers");
    n1 = int(input())
    n2 = int(input())
    n3 = int(input())
    print(max_of_three(n1, n2, n3))

if __name__=='__main__':
    main()
