def max(num1, num2):
    if(num1>num2):
        return num1
    else:
        return num2

def main():
    print("Enter 2 numbers")
    num1 = int(input())
    num2 = int(input())
    print(max(num1,num2))

if __name__=='__main__':
    main()
