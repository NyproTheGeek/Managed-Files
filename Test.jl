# 28/09/16
function coolPower(num, occur)
    power = 0
    for i in 1:occur
        power = num ^ power
    end
    power
end

println( coolPower(2, 4) )

# 01/11/16
function fibonacci(n)
    if n <  2
        1
    else
        fibonacci(n-1) + fibonacci(n-2)
    end
end

println( fibonacci(10) )
