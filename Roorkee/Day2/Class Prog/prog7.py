def second_max(list):
    max = list[0]
    snd_max = list[1]
    if(max<snd_max):
        max,snd_max = snd_max,max
    for i in range(2,len(list)+1):
        if i>max:
            snd_max = max
            max = i
        elif i>snd_max:
            snd_max = i
    return snd_max

def main():
    list = []
    size = int(raw_input('Enter size of list'))
    for i in range(0,size):
        list.append(int(raw_input()))
    if(size<2):
        print("Not able to second max")
    else:
        print(second_max(list))

if __name__=='__main__':
    main()
