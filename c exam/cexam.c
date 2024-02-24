//q3//
 #include<stdio.h>
int main(){
	   int i,j,r;
	 
         printf(" eanter a:");
         scanf("%d",&r);
	     for(i=1;i<=r;i++){
	       for(j=1;j<=i;j++){
		 if(i<=j){

		     printf("%d",i);

		 }else{
		     printf(" ");
		 }
		}
		printf("\n"); 
                  return 0;
              }

//q1 
#include<stdio.h> 
main() 
{ 
	int n; 
	printf("Enter a 3-digit number: "); 
	scanf("%d",&n); 
	printf("%d",n/100+n/10%10+n%10); 
}




//q7.
 #include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* fptr;
    int no;
    char str[50],str2[50];
    fptr = fopen("file.txt","r");

    if (fptr == NULL ){
        printf("file is not opened the program will 
   exit");
        exit(0);
    }else{
        fscanf(fptr,"%s %s %d",str,str2,&no);
        printf("file is created succesfully");
        printf("\n no is %d",no);
        printf("\n string is %s",str);
        printf("\n string is %s",str2);

    }
    fclose(fptr);
    return 0;

}



//q5


 #include<stdio.h>
int main(){
int r,c,a[100][100],b[100][100],sum[100][100],i,j;

printf("number of row");
scanf("%d",&r);

printf("number of coloum");
scanf("%d",&c);

printf("enter elemrnt of 1st matric\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("enter element a %d %d  ",i+1,j+1);
scanf("%d ",&a[i][j]);
}

printf("enter elemrnemt 2 matrixs\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("enter element b %d %d ",i+1,j+1);
scanf("%d ",&b[i][j]);
}

for(i=0;i<r;++i)
for(j=0;j<c;++j){

sum[i][j] =a [i][j] + b[i][j];

}


printf("sum of two matrics \n");
for(i=0;i<r;++i)
for(j=0;j<c;++j){
printf("%d",sum[i][j]);
if(j==c-1){
    printf("\n");
}
}


    return 0;
}


//q4


#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
 
    if ((num % 3 == 0) && (num % 5 == 0)) {
        printf("Number is divisible by 3 and 5");
    } else {
        printf("Number is not divisible by 3 and 5");
    }
    return 0;
}
                 