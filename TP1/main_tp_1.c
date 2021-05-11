/*
 * main_tp_2.c
 *
 *  Created on: ‎October ‎22, ‎2018,
 *      Author: ziad benadji
 *      Author: sami naami
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define nb_of_element 3

//  prototypes
int Max(int T[]);
int Min(int T[]);
double Moyenne(int T[]);
double Variance(int T[], double moy);
void Print(double moy, double var, int Ma, int Mi);

int main()
{
    /* declaration of variables  */
    int table[nb_of_element], i = 0, x, min , max;
    double moy = 0, v ;

    /* insert the values to table and check the values */
    printf("NO NO NO NO NO  this program calculate variance and Moyenne and search min value and max value in table  \n");
    do{
        printf("enter value %d :", i);
        scanf("%d", &x);
        if((-100)< x && x<100){
            table[i] = x;
            i++;

        }else{
          printf("error the value is not inside in the field !!! \n");
        }
    }while( i<nb_of_element );
    /* call the functions */
    min = Min(table);
    max = Max(table);
    moy = Moyenne(table);
    v = Variance(table, moy);
    Print(moy, v, max, min);

    return 0;
}// end main

int Max(int T[]){
    int max = T[0];
    int i = 0;
    for(i = 0 ; i<nb_of_element; i++){

        if(max<T[i]){
            max = T[i];
        }
    }
    return max;
}

int Min(int T[]){
     int min = T[0];
    int i = 0;
    for(i = 0 ; i<nb_of_element; i++){
        if(T[i]<min){
                min = T[i];
        }
    }
    return min;
}

double Moyenne(int T[]){
    int i = 0;
    int sum = 0;
    for(i = 0 ; i<nb_of_element; i++){
        sum += T[i];
    }
    return  (double) sum / nb_of_element;

}

double Variance(int T[], double moy){
  int i = 0;
  double up = 0;
  for(i= 0; i<nb_of_element; i++){
    up += (T[i]-moy)*(T[i] - moy);
  }
  return sqrt(up/nb_of_element);
}

void Print(double moy, double var, int Ma, int Mi){
  printf("Max = %d\nMin = %d\nMoyenne = %f\nVariance = %f", Ma, Mi, moy, var );
}
