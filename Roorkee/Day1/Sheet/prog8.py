def vowel(s):
    if(s[0]=='A' or s[0]=='E' or s[0]=='I' or s[0]=='O' or s[0]=='U'):
        print("Vowel")
    elif(s[0]=='a' or s[0]=='e' or s[0]=='i' or s[0]=='o' or s[0]=='u'):
        print("Vowel")
    else:
        print("Not a vowel")

def main():
    vowel(input("Enter a character"))

if __name__=='__main__':
    main()
