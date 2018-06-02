def is_pallindrome(str):
    for i in range(0,len(str)):
        if(str[i] != str[len(str)-i-1]):
            return False
    return True

def main():
    str=raw_input()
    if is_pallindrome(str) :
        print("Pallindrome")
    else:
        print("Not a pallindrome")

if __name__=='__main__':
    main()
