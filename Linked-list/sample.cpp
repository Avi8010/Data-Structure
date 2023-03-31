#include<stdio.h>
int main(){
        int n,instance,resource,cnt=0,cnt1=0;
        int exec[n];
        printf("Enter number of proccess\n");
        scanf("%d",&n);
      printf("\nEnter number of instances:\n");
      scanf("%d",&instance);
      printf("\nEnter  maxx and allocated resources for each process:\n");
      int maxx[n][instance],alloc[n][instance],need[n][instance],avl[1][instance];
      for(int i=0;i<n;i++){
            exec[i]=1;
            printf("\nEnter maxx resources for: %d",i+1);
            printf("\n");
            for(int j=0;j<instance;j++){
            scanf("%d",&maxx[i][j]);
            }
            printf("\n");
            printf("Enter allocated resources for: %d ",i+1);
                printf("\n");
            for(int j=0;j<instance;j++){
            scanf("%d",&alloc[i][j]);
            }
            printf("\n");
      }
      printf("available resources\n");
      for(int i=0;i<1;i++){
           for(int j=0;j<instance;j++){
           scanf("%d",&avl[i][j]);
           }
      }
      for(int i=0;i<n;i++){
            for(int j=0;j<instance;j++){
            need[i][j]=maxx[i][j]-alloc[i][j];
            }
      }
      for(int k=0;k<n;k++){
             for(int i=0;i<n;i++){
             int flag =0;
              if(exec[i]==1){
                  for(int j=0;j<instance;j++){
                          if(need[i][j]>avl[0][j]){
                                  flag=1;
                                  break;
                          }
                  }
                  if(flag==0 ){
                   cnt++;
                   exec[i]=0;
                   for(int j=0;j<instance;j++){
                   avl[0][j]=avl[0][j]+alloc[i][j];
                   }
                   printf("%d",i);
                   printf(" - ");     
                  }
              }
            }
      }
      printf("\n");
      if(cnt==n){
      printf("safe for above sequence\n");
      }
      else{
      printf("not safe\n");
      }
     return 0;
}


