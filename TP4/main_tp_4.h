/* 
 * Name of file   : main_tp_4.h
 * Name of author : Daix Wap
 * Role           : contun prototypes function create by main_tp_4
 * Date of create : 12-19-2018 at 8:32 PM
 */

#ifndef DEF_MAIN
#define DEF_MAIN
    /* macro */
    #define length 6
    
    /* include */
    #include <stdio.h>
    #include <stdlib.h>


    /*prototypes */
    void randon(int Tab[], int size, int hight, int low);
    void print(int Tab[], int size);
    void triSelect(int Tab[], int size);
    void flip(int Tab[], int i, int j);
    void triInsertion(int Tab[], int size);
    void merge_sort(int Tab[], int left, int right);
    void interClass(int Tab[], int left, int center, int right);



#endif // DEF_MAIN