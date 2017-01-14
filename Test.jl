# 17/11/16
import Base: print

type Language
    name::AbstractString
    isAwesome::Bool
    age::Int
    version::Float64
end
print(julia::Language) = print('[', julia.name, julia.isAwesome, julia.age, julia.version, ']')
julia = Language("Julia", true, 4, 0.6)

print(julia)

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
