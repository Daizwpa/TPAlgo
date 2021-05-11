/*
 * main_tp_2.c
 *
 *  Created on: November ‎5, ‎2018
 *      Author: ziad benadji
 *      Author: sami naami
 */

#include <stdio.h>
#include <stdlib.h>
#define max_length 20
#define max_width 20
/* prototypes */
void print_table(int table[][max_width], int n);
void insert(int table[][max_width], int n);
void flipmatrx(int newtable[][max_width], int table[][max_width], int n,  int degree);

int main(){
    //declarations the variables
    int  n;
    int degree;
    int table[max_length][max_width] = {0}; //{{1,2,3},{4,5,6},{7,8,9}}
    int newtable[max_width][max_length] = {0};


    printf("this programe flips matrx of type Square \"length = width\"\n");
    //checking if there any values is failure
    loop_n :// check length*withd

      printf("How many \"length*width\" do you want: ");
      scanf("%d", &n);

    if(n<0 || max_length<n){
      printf("error over length*width !!!\n");
      goto loop_n;
    }

    loop_degree : //degree of flip

      printf("how many degree do you want : \n 90 -> 1\n180 -> 2\n270 -> 3\n-> ");
      scanf("%d",&degree);

    if(degree !=3 && degree != 2 && degree != 1){
      printf("error over degree !!!\n");
      goto loop_degree;
    }


    // insert values on table
    insert(table, n);


    // Flip the table

    flipmatrx(newtable, table, n, degree);

    printf("new table**************\n");
    //print results
    print_table(newtable, n);


    return 0;
}

void print_table(int table[][max_width], int n){
    int i , j;
    for(j = 0 ; j < n; j++){
      for(i = 0 ; i < n; i++){
        printf("%d ", table[j][i]);
      }// end for (i)
      printf("\n");// for get new lean

    }//end for(j)

}

void insert(int table[][max_width], int n){
    int i , j;
    for(j = 0 ; j < n; j++){
      for(i = 0 ; i < n; i++){
        printf("insert element T[%d][%d] : ", j+1,i+1);
        scanf("%d", &table[j][i]);
      }// end for (i)
    }//end for(j)

}
void flipmatrx(int newtable[][max_width],int table[][max_width], int n, int degree){

    int i, j;
    // Flip the table
    loop_degree :

      for(j = 0 ; j<n; j++){
        for(i = 0 ; i<n; i++){
          newtable[j][i] = table[(n-1) -i][j];
          table[(n-1) -i][j] = 0;
        }// end for (i)
      }//end for(j)

    if( degree > 1 ){
      degree--;
      for(j = 0 ; j<n; j++){
        for(i = 0 ; i<n; i++){
          table[j][i] = newtable[j][i];
        }// end for (i)
      }//end for(j)
      goto loop_degree;
    }

}//end
