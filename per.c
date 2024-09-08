#include <stdio.h>
void main()
{
    int mark1,mark2,mark3,mark4,mark5,per;
    printf("enter 5 subjects marks");
    scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);
    per=((mark1+mark2+mark3+mark4+mark5)/5)*100;
    if(per<=100&&per>=90){
        prinf("A+ grade");
    }
        if(per<=90&&per>=80){
        prinf("A grade");
    }
        else if(per<=80&&per>=70){
        prinf("B+ grade");
    }
        else if(per<=60&&per>=50){
        prinf("B grade");
    }
        else if(per<=50&&per>=40){
        prinf("C grade");
    }
        else(per<=40&&per>=90){
        prinf("Fail");
    }
                                                                                                                                            
}