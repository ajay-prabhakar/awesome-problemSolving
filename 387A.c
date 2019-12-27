#include <stdio.h>

int main(){
    long long int a,b,h,m;
    char c;
    scanf("%lld%c%lld",&a,&c,&b);
    scanf("%lld%c%lld",&h,&c,&m);

        long long int hour=a*60+b;
        long long int sec=h*60+m;
        long long int time=hour-sec;
        if(time<0)
            time=24*60+time;

        printf("%.2lld:%.2lld\n",time/60,time%60);
    
    return 0;
    
    
    
    
}
