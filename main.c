#include <stdio.h>
#include<time.h>
void HanoiTowers(int,char,char,char);
int counter=0;// minimun moves for the solution
void main()
{
    clock_t start_t,end_t,total_t;
    int disk;// the number of disks
    char a='A',b='B',c='C';
    do{
        printf("give me the number of disks(>0)\n");
        scanf("%d",&disk);
    }while(disk<1);
    start_t=clock();
    HanoiTowers(disk,a,b,c);
    end_t=clock();
    float time=(float)(end_t-start_t)/CLOCKS_PER_SEC;
    printf("minimun moves:%d\ncpu time used: %.2f sec\n\n",counter,time);
}
void HanoiTowers(int n,char src,char temp,char dst){
    counter++;
    if(n==1){
        printf("move disk %d from %c to %c\n",n,src,dst);
    }
    else{
        HanoiTowers(n-1,src,dst,temp);
        printf("move disk %d from %c to %c\n",n,src,dst);
        HanoiTowers(n-1,temp,src,dst);
    }
}

