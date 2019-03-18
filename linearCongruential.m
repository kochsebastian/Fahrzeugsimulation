function [x_i] = linearCongruential(x_iprev)

    a = 89;
    c = 251;
    m = 1009;
    
    x_i = mod((a * x_iprev + c),m);
    
end

