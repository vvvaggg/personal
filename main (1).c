/*время старта и время финиша*/
#include <stdio.h>

int main()
{
    int h, m, s;
    int h2, m2, s2;
    int res,res2,result;
    int resh, resm,ress;
    scanf("%d:%d:%d",&h,&m,&s);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    res=h*3600+m*60+s;
    res2=h2*3600+m2*60+s2;
    result=res2-res;
    printf("%d\n",result);
    resh=result/3600;
    resm=(result-resh*3600)/60;
    ress=result-resh*3600-resm*60;
    printf("%02d:%02d:%02d",resh,resm,ress);
    return 0;
    
}
