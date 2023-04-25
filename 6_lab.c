#include<stdlib.h>
#include<stdbool.h>
// на выход функция ничгео не передает она типа void
// задание номер 1
void max_sim_finder(char array[100], char need_simbol){
    int max, count = 0;
    int value_array[100];
    for(int i = 0; i < 100; i++){
        if(array[i] == need_simbol){
            count ++;
            value_array[i] = 0;
        }
        else{
            value_array[i] = count;
            count = 0;
        }

    }
    for(int i = 0; i < 100; i++){
        if(max < count){
            max = count;
        }
    }
    printf("the max lengh of simbols consistes of %c is --- %i", need_simbol, max);
}


//задание номер 2


int matrix_sercher(int array[100][100], int need_element){
    int result_array_x[100], result_array_y[100], index;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            if(array[i][j] == need_element){
                //index = index + 1;
                //result_array_x[index] = i;
                //result_array_y[index] = j;
                printf("indexes x: %i\ty: %i\n ", i, j);
            }
        }
    }

   // printf("the x indexes: \n");
    //array_printer(result_array_x);
    //printf("the y indexes: \n");
    //array_printer(result_array_y);
}

int create_randomize_array(int dimention){ 
    if(dimention == 2){
        int result_matrix[100][100];
        for(int i = 0; i < 100; i++){
            for(int j = 0; j < 100; j++){
                result_matrix[i][j] = rand() % 78;
            }
        }
        return result_matrix;
    }
    if(dimention == 1){
        int result_array[100];
        for(int i  = 0; i < 100; i++){
            result_array[i] = rand() % 78;
        }
        return result_array;
    }

}

int main(){
    char string[100], need_simbol;
    int array[100];
    int dimention = 2;
    int need_elem = 0;
    need_simbol = "k";
    printf("input the string that you need: \n");
    scanf("%c", string);
    printf("input the string that you looking for: \n");
    max_sim_finder(string, need_simbol);
    int matrix[100][100];
    matrix[100][100] = create_randomize_array(dimention);
    printf("\n-----------------------\n");
    matrix_printer(matrix);
    printf("\n-------------------------------\n");
    matrix_sercher(matrix, need_elem);


}


//задание номер 3


void append(int array[100], int element){
    int index = 0;
    for(int i = 0; i < 100; i++){
        if(array[i] != 0){
            array[i] = element;
            printf("the operation was sucied\n");
            printf("%i", array);
        }
    }
}
void insert(int array[100], int need_elem){
    array[50] = need_elem;
    printf("%i", array);
}

void matrix_printer(int array[100][100]){
    for (int i  = 0; i < 100; i ++){
        for(int j = 0; j < 100; j++){
            printf("%i\t", array[i][j]);
        }
        printf("\n");
    }
}

void array_printer(int array[100]){
    for (int i = 0; i < 100; i++){
        printf("%i", array[i]);
    }
}