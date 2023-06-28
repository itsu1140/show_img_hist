#include <iostream>

int cal(int i, int j){
    return i+j;
}

int main(){
    int roop = 100;
    int sum = 0;
    for(int i = 0; i<roop; i++){
        sum += cal(i, i+1);
    }
    int array[5] = {0,1,2,3,4};
    printf("%d\n", array[5]);
}