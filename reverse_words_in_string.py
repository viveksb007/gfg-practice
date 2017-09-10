n = input()
for i in range(int(n)):
    s = input()
    l = s.split('.')
    for j in range(len(l)):
        if j == len(l)-1:
            print(l[len(l)-1-j],end='\n')
        else:
            print(l[len(l)-1-j]+'.',end='')
