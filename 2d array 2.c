#include<stdio.h>
int main(){
int a[5][2];
int i,j;
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
}
for(j=0;j<5;j++){
    scanf("%d",&a[j]);
}
for(i=0;i<5;i++){

    for(j=0;j<2;j++){
        printf("a[%d][%d]=%d\n",i,j,a[i][j]);
    }
}
return 0;


}
