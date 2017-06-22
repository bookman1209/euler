fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)

fibsUnder4million = takeWhile (<4000000) $ map fib [1..]
answer = sum $ filter even fibsUnder4million

main = print (answer)
