def leastBricks(wall):
    """
    :type wall: List[List[int]]
    :rtype: int
    """
    record = dict()

    for row in wall:
        temp = 0
        for i in range(len(row) - 1):
            temp += row[i]
            record[temp] = record.get(temp, 0) + 1

    if not record:
        return len(wall)

    return len(wall) - max(record.values())


if __name__ == '__main__':
    n = input("请输入墙的行（列）数：")
    n = int(n)
    wall = []
    for i in range(n):
        x = input()
        xlist = [int(i) for i in x.split(" ")]
        wall.append(xlist)

    n = leastBricks(wall)
    print(n)

