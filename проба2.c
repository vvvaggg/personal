#include <stdio.h>
#define MAXN 100
int main()
{
    FILE *f1 = fopen("студент.txt","r");
    FILE *f2 = fopen("выплаты.txt","r");
    FILE *f3 = fopen("сводный.txt","w");
    
    int x[MAXN];
    char fam[MAXN][MAXN], name[MAXN][MAXN], otch[MAXN][MAXN], group[MAXN][MAXN], day[MAXN];
    int sum=0, k=0, n=0;
    
    while ( fscanf(f1, "%d %s %s %s %s", &x[k],fam[k],name[k],otch[k],group[k]) != EOF)
        ++k;
    ;
    
    while ( fscanf(f2, "%d %s %d", &x[k],day, &sum) != EOF)
        ++n;
        for (int i=0; i<n; ++i){
            fscanf(f2, "%d %s %d", &x[k],day, &sum);
    }
    
    //fscanf(f2, "%d %s %d", x,day, &sum);
    //fscanf(f2, "%d %s %d", x,day, &sum);
    //fscanf(f2, "%d %s %d", x,day, &sum);
    //fscanf(f2, "%d %s %d", x,day, &sum);
    //fscanf(f2, "%d %s %d", &x,day,&sum);
    //fscanf(f2, "%d %s %d", &x,day,&sum);
    
   
    
    for (int i=0; i<k; ++i){
        fprintf(f3,"%d. ",i+1);
        fprintf(f3,"%d ",x[k]);
        fprintf(f3,"%s ",fam[i]);
        fprintf(f3,"%c. ",name[0][i]);
        fprintf(f3,"%c. ",otch[0][i]);
        fprintf(f3,"%s ",group[i]);
        fprintf(f3,"%d \n",sum);
    }
    
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
