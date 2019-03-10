function [x_i] = linearCongruential(x_iprev)
    a = 1;
    c = 5;
    m = 19;
    
    x_i = mod((a * x_iprev + c),m);
    
end

% c zu m teilerfremd
%