def reverse(str):
    for i in range(0,len(str)):
        str[i],str[len(str)-i-1] = str[len(str)-i-1],str[i]
    print(str)

def main():
    str = input()
    reverse(str)

if __name__=='__main__':
    main()
