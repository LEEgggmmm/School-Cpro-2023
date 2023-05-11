#include<stdio.h>
int main(){
    int Korean=0;
    int math=0,english=0,total=0;
    float average;
    int science=95, history=92;
    char grade='A';
    total=Korean+math+english+science+history;
    average=total/5.0;
    printf("total:%d, average:%.1f, grade:%c\n",total,average,grade);
    return 0;
}