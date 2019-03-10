function data = generateData(size,start)
    data = ones(size,1);
    data(1) = start
    for i=2:size
        data(i) = linearCongruential(data(i-1));
    end
    
end