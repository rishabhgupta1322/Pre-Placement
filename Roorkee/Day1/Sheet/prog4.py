def div():
    res = True
    while(res):
        n = int(input())
        if(n%2==0):
            print("You enter an even number")
            res = False
        else:
            print("Wrong Number")
            print("Enter a new number")

def main():
    div()

if __name__=='__main__':
    main()
