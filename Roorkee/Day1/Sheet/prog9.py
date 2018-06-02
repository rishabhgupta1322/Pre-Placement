def translate(s):
    res = ""
    for i in range(0,len(s)):
        if(s[i]>='a' and s[i]<='z'):
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'):
                res=res + s[i]
            else:
                res=res + s[i] + 'o' + s[i]
        else:
            res = res + s[i]
    return res

def main():
    str = raw_input()
    print(translate(str))

if __name__=='__main__':
    main()
