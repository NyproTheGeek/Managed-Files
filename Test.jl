# 28/09/16
function coolPower(num, occur)
    power = 0
    for i in 1:occur
        power = num ^ power
    end
    power
end

print( coolPower(2, 4) )
