#include<stdio.h>
int main(){
    int kor, eng, math;
    scanf("%d",&kor);
    scanf("%d",&eng);
    scanf("%d",&math);
    kor>=70 && eng>=70 ||math>=80?printf("great"):printf("ok");
    return 0;
}