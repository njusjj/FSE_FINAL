n=input('个数')
n=int(n)
a=[]
b=[]
c=[]
d=[]
for i in range(n):
    temp=input('以空格分开')
    temp=temp.split(' ')
    num_list_new = [int(x) for x in temp]

    a.append(num_list_new[0])
    b.append(num_list_new[1])
    c.append(num_list_new[2])
    d.append(num_list_new[3])

count=0
for i in range(n):
    for j in range(n):
        for k in range(n):
            for p in range(n):
                if a[i]+b[j]+c[k]+d[p]==0:
                    count=count+1
print(count)