 #include<stdio.h>        // phela wala bracket row hai 2nd wala cloumn hai
 int main(){
   // int arr[2][2];   // sim to 2cross 2 matrix 
   // arr[0][0]=1;      //. 1   2
   // arr[0][1]=2;      //  3  4
   // arr[1][0]=3;
    // arr[1][1]=4;


    // int crr[2][4];    // ---> iska matlab hai ki 2 dabbe bnne  phir unn 2 dbbe ke andar 
                      //       4 dbbe bnne 
                      ///   which is simply a matrix 



            //int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};  // 3 cross 3 matrix
           //for(int i=0;i<=2;i++){
             //  for(int j=0;j<=2;j++){                  // to print 2 -d array/matrix
               //    printf("%d ",arr[i][j]);
              // }
              // printf("\n");
          // }

           int r,c;
              printf("enter number of rows and columns:");
                scanf("%d%d",&r,&c);
                int arr[r][c];          // variable sized 2-d array
                for(int i=0;i<



           return 0;
}