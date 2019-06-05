
def dfs(x, y, p,grid):
    if not (0 <= x < row and 0 <= y < col and grid[x][y] >= 0):
        return 0
    if end == (x, y) and p == 0:
        return 1
    grid[x][y] = -1
    res = dfs(x + 1, y, p - 1,grid) + dfs(x, y + 1, p - 1,grid) + dfs(x - 1, y, p - 1,grid) + dfs(x, y - 1, p - 1,grid)
    grid[x][y] = 0
    return res


if __name__ == '__main__':
    row = input("请输入网格的行数：")
    row = int(row)
    col = input("请输入网格的列数：")
    col = int(col)
    grid = []
    for i in range(row):
        x = input()
        xlist = [int(i) for i in x.split(" ")]
        grid.append(xlist)

    start, end, p = None, None, 1
    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                start = i, j
            elif grid[i][j] == 2:
                end = i, j
            elif grid[i][j] == 0:
                p += 1

    num = dfs(start[0], start[1], p, grid)
    print(num)
