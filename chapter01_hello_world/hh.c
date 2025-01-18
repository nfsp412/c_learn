#include <stdio.h>
#include<openssl/evp.h>//表示头文件目录下的openssl目录下的evp.h文件。
 
int main() {
    OpenSSL_add_all_algorithms();
    printf("The OpenSSL is installed successfully!\n");
    return 0;
}