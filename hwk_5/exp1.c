#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int *pa = NULL;

    int *pb = pa + 15;

    printf("%x\n", pa);
    printf("%x\n", pb);

    return 0;
}