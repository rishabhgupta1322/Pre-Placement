def pattern1(num):
    for i in range(1,num+1):
        for j in range(1,i+1):
            print ('*', end='')
        print('')

def pattern2(num2):
    for i in range (1,num2+1):
        for j in range (1,num2-i+1):
            print(" ", end="")
        for j in range (1,2*i):
            print("*",end="")
        print("")

def main():
    print("Pattern 1")
    pattern1(5)
    print("\n\n")
    print("Pattern 2")
    pattern2(5)

if __name__=='__main__':
    main()
