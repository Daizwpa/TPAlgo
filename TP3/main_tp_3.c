/*
 * main_tp_3.c
 *
 *  Created on: Oct 16, 2018
 *      Author: ziad benadji
 *      Author: sami naami
 */


#include <stdio.h>
#include <stdlib.h>
/* prototypes */
int PGCD_R(int , int );
int PGCD_R2(int , int );

int main(){
	// declare
	int x,y;

	printf("This the program calculate  PGCD(x,y)\n");
	loop_x :
	  printf("insert value x :");
	  scanf("%d",&x);
	if(x == 0){
		goto loop_x;
	}

	loop_y :
	  printf("insert value y :");
		scanf("%d",&y);
	if(y == 0){
		goto loop_y;
	}

	printf("\n********* Method one **********");
    printf("\nPGCD_R(x,y) = %d", PGCD_R(x,y) );
    printf("\n********* Method tow **********");
    printf("\nPGCD_R2(x,y) = %d", PGCD_R2(x,y) );
  
  return  EXIT_SUCCESS;

}//end main

int PGCD_R(int i, int j){
	int sv ;
	if(i>j){

    printf("\nEnter from    [%4d,%4d]", i-j,j);
		sv = PGCD_R(i-j, j);
		printf("\nOut from      [%4d,%4d]", i-j,j);
		return sv;

  }
	else{

		if(j>i){

		  printf("\nEnter from    [%4d,%4d]", i,j-i);
			sv = PGCD_R(i,j-i);
			printf("\nOut from      [%4d,%4d]", i,j-i);
			return sv;

    }
		else{// i == j
		  printf("\n\nsolution %4d\n", i);
			return i;

    }

	}// end conditions

}// end PGCD_R


int PGCD_R2(int x, int y){

	int sv;

  if( x>=y ){

    if((x%y) == 0 ){
      printf("\n\nsolution %4d\n", y);
      return y;
    }
    else{
      printf("\nEnter from    [%4d,%4d]", x%y, y);
      sv = PGCD_R2( x%y, y);
      printf("\nOut  from     [%4d,%4d]", x%y, y);
    }

  }//end if(x>=y)
  else{// x<y
    if((y%x) == 0 ){
      printf("\n\nsolution %4d\n", x);
      return x;
    }
    else{
      printf("\nEnter from    [%4d,%4d]", x, y%x);
      sv = PGCD_R2(x, y%x);
      printf("\nOut  from     [%4d,%4d]", x, y%x);
			return sv;
    }

  }//end conditions

}// end PGCD_R2
