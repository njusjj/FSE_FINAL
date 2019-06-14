

temp = input('个数n,k')
temp = temp.split(' ')
num = [int(x) for x in temp]
fun = []
for i in range(num[0]):
    tem = input('以空格分开')
    tem = tem.split(' ')
    num_new = [int(x) for x in tem]
    print(num_new)
    fun.append(num_new)
print(fun)
result = []
for i in range(num[0]):
    mid = (-1) * fun[i][1] / (2 * fun[i][0])
    mid = int(mid)
    left = mid - num[1]
    right = mid + num[1]
    re = []
    for j in range(left, right, 1):
        tempre = fun[i][0] * j * j + fun[i][1] * j + fun[i][2]
        re.append(tempre)
        print(re)
    result.extend(re)
    print(result)


def heapAdjust(A, i, length):
    pa = i
    child = 2 * i + 1
    tmp = A[i]
    while child < length:
        if child < length - 1 and A[child] < A[child + 1]:
            child += 1
        if A[pa] >= A[child]:
            break
        else:
            A[pa], A[child] = A[child], A[pa]
            pa = child
            child = 2 * pa + 1


def findKmin(A, k, length):
    for i in range(int(k / 2))[::-1]:
        heapAdjust(A, i, k)
    #print('The heap is :', A[:k])
    for i in range(k, length):
        if A[i] < A[0]:
            A[i], A[0] = A[0], A[i]
            heapAdjust(A, 0, k)
    res=A[:k]
    print('The result is :', res)


lens = len(result)
print(result)
findKmin(result, num[1], lens)
