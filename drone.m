 format long
% 
% M = csvread('/Users/sebastiankoch/Desktop/gpsData.csv');
% vidObj = VideoReader('/Users/sebastiankoch/Desktop/DJI_0105.mp4');
% numFrames = ceil(vidObj.FrameRate*vidObj.Duration);
% framerate = vidObj.FrameRate;
% m1 = M(:,1);
% m2 = M(:,2);
% x = 1:1:length(m1); 
% xx = linspace(1, length(m1), numFrames); 
% m1_1 = interp1q(x',m1,xx');
% m2_1 = interp1q(x',m2,xx');
% dlmwrite('/Users/sebastiankoch/Desktop/gpsData.csv', [m1_1 m2_1], 'delimiter', ',', 'precision', 9);

M = csvread('/Users/sebastiankoch/Desktop/gpsHeightHeading.csv');
vidObj = VideoReader('/Users/sebastiankoch/Desktop/DJI_0081.mp4');
numFrames = ceil(vidObj.FrameRate*vidObj.Duration);
framerate = vidObj.FrameRate;
m1 = M(:,1);
m2 = M(:,2);
m3 = M(:,3);
m3 = M(:,3);
x = 1:1:length(m1); 
xx = linspace(1, length(m1), numFrames); 
m1_1 = interp1q(x',m1,xx');
m2_1 = interp1q(x',m2,xx');
m3_1 = interp1q(x',m3,xx');
m4_1 = interp1q(x',m3,xx');
dlmwrite('/Users/sebastiankoch/Desktop/dji81gpsHeightHeading.csv', [m1_1 m2_1 m3_1 m4_1], 'delimiter', ',', 'precision', 9);

