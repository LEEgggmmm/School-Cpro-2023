#include<stdio.h>
int main(){
    int dodo,gogo;
    int total,deposit,change,rest,menu;
    int w500,w100,w50,w10;
    int cnt_dodo,cnt_gogo;
    while(1){
        printf("?òê?òêÎ©? 70?õê, ÍΩÅÍΩÅÎ∞? 30\n");
        printf("Í∞ÅÍ∞Å Í∞úÏàòÎ•? ?ûÖ?†•?ïò?Ñ∏?öî\n");
        scanf("%d %d",&cnt_dodo,&cnt_gogo);
        dodo=70*cnt_dodo;
        gogo=30*cnt_gogo;
        total=dodo+gogo;
        printf("Ï¥ùÍ∏à?ï°??? %d?ûÖ?ãà?ã§\n");
        printf("?ñºÎßàÎÑ£?ùÑÍ±∞ÎÉê\n");
        scanf("%d",&deposit);
        if(deposit>=total){
            change=deposit-total;
            w500=change/500;
            w100=change%500/100;
            w50=change%100/50;
            w10=change%50/10;
            printf("500:%d,100:%d,50:%d,10:%d\n",w500,w100,w50,w10);
            printf("∞Ëº”«œ∑¡∏È 1, æ∆¥œ∏È:0");
            scanf("%d, &menu");
            if(menu==0)break;
            else continue;
        }
        else{
            printf("?çî?Ñ£?ù¥ ?ù¥?Éà?Ç§?ïº/n");
        }
    }