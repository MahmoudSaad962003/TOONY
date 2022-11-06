#include <stdio.h>

int main(){
    int h,w,e,f;
    printf("please enter high....\n ");
    scanf("%d",&h);
    printf("please enter width .....\n");
    scanf("%d",&w);
    for(e=0;e<h;e++){
        for(f=0;f<w;f++){
            printf("# ");
        }
        printf("\n");
    }
return 0;
}

