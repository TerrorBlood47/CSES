dp = [None for _ in range(20)]

def factorial(n):
    
    if n<=1:
        return 1
    
    if dp[n] is not None:
        return dp[n]
       
    dp[n] =  n*factorial(n-1)
    
    return dp[n]



strings = set()

def create_str(str, og_str):
    
    if len(str)==len(og_str):
        strings.add(str)
        return 
    elif len(str)>len(og_str):
        return

    m = len(str)
    
    for i in range(0, len(og_str)):
        str += og_str[i]
        create_str(str,og_str)
    
    return    
    
str = input()

create_str("", str)

print(len(strings))

print(strings)


