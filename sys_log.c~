#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
 char c1[100],c2[100],c3[100],c4[100],c5[100],c11[100],c12[100],c13[100],c14[100],c15[100],c16[100],c17[100];
 strcpy(c1," cat /var/log/syslog > new_log.txt");
 system(c1);
 strcpy(c2,"grep -w '.*usb 3-.*:' new_log.txt | tail -100 > usblogs.txt");
 system(c2);
 strcpy(c3,"grep -w '.*NetworkManager.*: <info> WiFi.*' new_log.txt > wifinetworklogs.txt");
 system(c3);
 strcpy(c4,"grep -w '.*bluetoothd.*: Adapter.*' new_log.txt > bluetoothlogs.txt");
 system(c4);
  strcpy(c5,"cat /var/log/apache2/error.log | tail -12 > apache2serverlogs.txt");
 system(c5);
 strcpy(c11,"cat /var/log/auth.log > new_auth_raw.txt");
 system(c11);
 //strcpy(c12,"grep -w 'sudo:' new_auth_raw.txt > 1.txt");
 //system(c12);
 strcpy(c13,"grep -w 'su.*:' new_auth_raw.txt | tail -100 > sudo_demo.txt");
 system(c13);
  strcpy(c14,"grep -w 'systemd-logind.*:.*Lid.*' new_auth_raw.txt > lid.txt");
 system(c14);
 strcpy(c15,"grep -w 'systemd-logind.*:.*System.*' new_auth_raw.txt > syspower.txt");
 system(c15);
 strcpy(c16,"grep -w 'systemd-logind.*:.*New seat.*' new_auth_raw.txt > new_user_id.txt");
 system(c16);
 //strcpy(c16,"cat sudo_demo.txt >> lid.txt >> syspower.txt >> new_user_id.txt >> finla_data_from_auth.txt");
 //system(c16);
 strcpy(c17,"grep -w '.*Activation (eth0).*' new_log.txt > eathernetactivationlogs.txt");
 system(c17);
 return(0);
}
