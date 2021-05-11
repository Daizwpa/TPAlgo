#include "main_tp_4.h"

int main()
{
    int tab[length];
    randon(tab,length,100, 55);
    print(tab, length);
    merge_sort(tab, 0, length);
    printf("\n");
    print(tab, length);



    return 0;
}//end void main()

void randon(int Tab[], int size, int hight, int low){
    int i;
    for(i = 0; i<size; i++){
        Tab[i] = ((rand()%((hight - low) +1))+low);

    }
}//end randon()

void print(int Tab[], int size){
    int i;
    for(i = 0; i<size; i++){
        printf("%d ",Tab[i]);

    }
}//end print()

void triSelect(int Tab[], int size){
    int i, j, i_min;
    for(i = 0; i<(size-1); i++){
        i_min = i;
        for(j = (i+1); j< size; j++)
            if(Tab[j]< Tab[i_min])
                i_min = j;
        flip(Tab, i, i_min);
    }
}// end triselect()

void flip(int Tab[], int i, int j){
    int x;
    x = Tab[i];
    Tab[i] = Tab[j];
    Tab[j] = x;
}// end flip()

void triInsertion(int Tab[], int size){
    int i,j;
    for(i = 1; i<size; i++){
        for(j = i; j>0; j--){
            if(Tab[j] < Tab[j-1])
                flip(Tab, (j-1), j);
        }
    }

 }// end triInsertion()

 void merge_sort(int Tab[], int left, int right){
    int center;

    if( left < right ){
        center = ( right + left-1 )/2;
        merge_sort(Tab, left, center);
        merge_sort(Tab, (center+1), right);
        interClass(Tab, left, center, right);
    }

 }//end merge_sort()

void interClass(int Tab[], int left, int center, int right){
    int i, j, k;

    int R[length];
    for(i = left; i <= right; i++){
        R[i] = Tab[i];
    }

    i = left;
    j = center+1;
    k =  left;
    while(i <= center && j<= right){
        if(R[i] < R[j]){
            Tab[k] = R[i];
            i++;
        }else{
            Tab[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i <= center){
        Tab[k] = R[i];
        i++;
        k++;
    }
    
    while(j <= right){
        Tab[k] = R[j];
        j++;
        k++;
    }

  }// end interClass()
