def length(str):
    if(str==""):
        return 0;
    return str.rindex(str[-1]) + 1

def main():
    a = input()
    print(length(a))

if __name__=='__main__':
    main()
