#include <stdio.h>

int main()
{
    enum company {google,microsoft=12,tcs,ibm,congnizent,wipro=10};
    enum company x=google;
    enum company y=microsoft;
    enum company z=wipro;
    printf("%d\n%d\n%d",x,y,z);
    return 0;
}
