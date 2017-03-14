#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int *pa = NULL;

    int *pb = pa + 15;

    printf("%x\n", pa);   // pa = 0
    printf("%x\n", pb);   // pb = 0x3c = 60 = 0 + 15*sizeof(int)

    return 0;
}