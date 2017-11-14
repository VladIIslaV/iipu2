#include <stdlib.h>
int main(){
system("sudo hdparm -I /dev/sda | grep -v \'Enable\\|Setup\' | grep -w \'Number\\|Firmware\\|PIO\\|DMA\\|Supported\'");
return 0;
}