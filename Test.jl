# 17/11/16
type Person
    name::AbstractString
    male::Bool
    age::Float64
    children::Int
end

p = Person("Julia", false, 4, 0)

println(p.age)

# 01/11/16
function fibonacci(n)
    if n <  2
        1
    else
        fibonacci(n-1) + fibonacci(n-2)
    end
end

println( fibonacci(10) )

# 28/09/16
function coolPower(num, occur)
    power = 0
    for i in 1:occur
        power = num ^ power
    end
    power
end

println( coolPower(2, 4) )

# 09/11/16
y = 5

x = fibonacci(7) * y

function task()
    println("Fibonacci 7: ", x)
end

task()
