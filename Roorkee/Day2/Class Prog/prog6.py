def anagram(str1,str2):
    if(len(str1)==len(str2)):
        for i in str1:
            if i not in str2:
                return False
        return True
    return False

def main():
    if anagram('bread','beard'):
        print("Anagram")
    else:
        print("Not a anagram")

if __name__=='__main__':
    main()
