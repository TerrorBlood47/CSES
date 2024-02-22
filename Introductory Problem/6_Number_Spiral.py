
def __sum(n):
    if n==0:
        return 0
    
    return (n*(n+1)) // 2



def solve(x,y):
    n = max(x,y)
    
    sum = 2 * __sum(n-1)
    sum = sum + 1
    
    if n%2==0:
        y_del = n - x
        x_del = n - y
       
        sum -= y_del
        sum += x_del
    else:
        y_del = n - x
        x_del = n - y
        
        sum += y_del
        sum -= x_del

    print(int(sum))


t = int(input())

while t>0:
    x,y = map(int, input().split())
    
    solve(x,y)
    
    # print(f"{x} {y}")
    
    t = t - 1


    








