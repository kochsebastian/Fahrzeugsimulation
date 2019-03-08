load('curve.mat');
w = 1.53;
b = 2.65;
vrl_t = [tv vrl];
vfr_t = [tv vfr];
vfl_t = [tv vfl];
vrr_t = [tv vrr];


% calculate radius
rrl = (w ./ ((vrr./vrl) -1));
rfl = sqrt(b^2 + rrl.^2);
rrr = w + rrl;
rfr = sqrt(b^2 + rrr.^2);

new_q = interp1q(tq,q,tv);


subplot(4,1,1);
plot(tv,rfr);
hold on;
plot(tv,sw);
hold off;
title('R Front Right');

subplot(4,1,2);
plot(tv,vfl);
hold on;
plot(tv,vfr);
plot(tv,vrr);
plot(tv,vrl);
hold off;
title('V Front Left');
% 

% subplot(5,1,3);
% plot(tv,rrr);
% title('Rear Right');
% 
% subplot(5,1,4);
% plot(tv,rrl);
% title('Rear Left');

subplot(4,1,3);
plot(tv,sw);
title('Steering Angle');

subplot(4,1,4);
plot(tv,new_q);
title('Lateral Acc');

% figure;
% hold on;
% plot(tv,rfl);
% plot(tv,sw);
% plot(tv,new_q);
figure
plot(tq,q)
hold on;
plot(tq,0)
hold off;

