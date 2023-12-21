#include<stdio.h>

int test(int number[], int length ){
    int c1=0, c2=0, index=0;
    if(length >= 3){
        for(int i=1; i<length-1 ; i++){
            for(int j=i+1; j<length ; j++){
                if(number[i] > number[j]){
                    c1=1;
                }
            }
        }

        for(int i=1; i<length-1 ; i++){
            for(int j=i-1; j>=0 ; j--){
                if(number[i] > number[j]){
                    c2=1;
                    index=i;
                }
            }
        }        
    }

    if(c1 && c2)
    return index;
}

int main()
{
    int number[4]={0, 2, 1, 0};

printf("%d",test(number, 4));


    }