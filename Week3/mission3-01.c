#include <stdio.h>

int your_grade(int n);  //prototype of your_grade function

///////////////////////////////////////////////////////////////////////////
////This program shows the grade which matches with scores you entered/////
///////////////////////////////////////////////////////////////////////////
int main(void){
    char grade[9][3] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};   //array of grade. declare 2-dimensional array because of '+'
    int input_grade = 0;    //stores your input
    int resultInd = 0;  //return value of your_grade function

    printf("Grade Program\n");
    printf("If you want to exit this program, enter \'-1\'\n");
    printf("[Grade Table]\n");
    printf("Score:\t95\t90\t85\t80\t75\t70\t65\t60\t0\n");
    printf("Grade:");
    for(int i=0; i<9; i++){         //show table of grade
        printf("\t%s", grade[i]);
    }
    while(1){   
        printf("\nInput your score (0 ~ 100) : ");
        scanf("%d", &input_grade);
        resultInd = your_grade(input_grade);    //return value is the index which matches with grade array
        switch(resultInd){
            case 0:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 1:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 2:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 3:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 4:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 5:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 6:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 7:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case 8:
                printf("Your Grade is %s.\n",grade[resultInd]);
                break;
            case -1:
                printf("Exit Program.\n");
                return 0;
            default : 
                printf("Please enter the valid score. The range of score is 0~100.\n");
        }
    }

}

int your_grade(int n){
    int idx = 0;

    if(n<=100 && n>=95){
        idx = 0;
        return idx;
    }
    else if(n<=94 && n>=90){
        idx=1;
        return idx;
    }
    else if(n<=89 && n>=85){
        idx=2;
        return idx;
    }
    else if(n<=84 && n>=80){
        idx=3;
        return idx;
    }
    else if(n<=79 && n>=75){
        idx = 4;
        return idx;
    }
    else if(n<=74 && n>=70){
        idx = 5;
        return idx;
    }
    else if(n<=69 && n>=65){
        idx = 6;
        return idx;
    }
    else if(n<=64 && n>=60){
        idx = 7;
        return idx;
    }
    else if(n<=59 && n>=0){
        idx = 8;
        return idx;
    }
    else if(n==-1){
        idx=-1;
        return idx;
    }
    else {
        idx = 20;
        return idx;
    }

}