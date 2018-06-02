def countdown(num):
    if(num<0):
        print("Count can't be negative")
        return
    while(num>=0):
        print(num)
        num-=1

def main():
    c = int(input("Enter a number : "))
    countdown(c)

if __name__=='__main__':
    main();
