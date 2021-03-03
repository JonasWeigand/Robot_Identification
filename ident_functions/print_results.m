
%% print results

clc



k_ax = 3;
% dt_print = 0.002;
dt_print = 0.01;
idx = z.cost_fun_offset:1:nt_sim;
time_sim = time_cont_sim(idx);
time_print = time_sim(1):dt_print:time_sim(end);
% time_print = time_sim(1):dt_print:3;
% time_print = 3:dt_print:time_sim(end);

% torqueFiltAll(idx,k_ax)
% torqueEstAll(idx,k_ax)
% torqueTrueAll(idx,k_ax)

   %     plot(time_cont_sim, rad_to_deg* xAllTrueAll(:,3,k_ax),'b');
   %     plot(time_cont_sim, rad_to_deg* xAllEstAll(:,3,k_ax), 'r');
   %     plot(time_cont_sim, rad_to_deg* z.sim.phi_r_all(:, k_ax), 'k-.');

data_sim1 = rad_to_deg* z.sim.phi_r_all(idx,k_ax);
data_sim2 = rad_to_deg* xAllTrueAll(idx,3,k_ax);
data_sim3 = rad_to_deg* xAllEstAll(idx,3,k_ax);

data_print_1 = interp1(time_sim, data_sim1, time_print);
data_print_2 = interp1(time_sim, data_sim2, time_print);
data_print_3 = interp1(time_sim, data_sim3, time_print);

n_rows = numel(time_print);
data_out = "\addplot [color=black, dotted]" +newline + "table[row sep=crcr]{";
format long
for k1 = 1:n_rows

    data_out = data_out + newline + num2str(time_print(k1)) +"    "+ num2str(data_print_1(k1)) + " \\";

end
data_out = data_out + newline + "};";
data_out = data_out + newline + "\addplot [color=red]" +newline + "table[row sep=crcr]{";
for k1 = 1:n_rows

    data_out = data_out + newline + num2str(time_print(k1)) +"    "+ num2str(data_print_2(k1)) + " \\";

end
data_out = data_out + newline + "};";
data_out = data_out + newline + "\addplot [color=blue]" +newline + "table[row sep=crcr]{";
for k1 = 1:n_rows

    data_out = data_out + newline + num2str(time_print(k1)) +"    "+ num2str(data_print_3(k1)) + " \\";

end
data_out = data_out + newline + "};";


data_out

close all
figure
hold on
plot( time_print, data_print_1 )
plot( time_print, data_print_2 )
plot( time_print, data_print_3 )
