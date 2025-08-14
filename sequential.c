#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <omp.h>
#include <time.h>
#include <unistd.h>
#include "car.h"
#include "semaphore.h"
#include "intersection.h"





int main(int argc, char *argv[]){
    srand(time(NULL));
    int grid_size = atoi(argv[1]);
    int car_number = atoi(argv[2]);
    int total_size = grid_size * grid_size;

    int intersection_number = ((grid_size- 1) / 2);
    int real_number = intersection_number * intersection_number;

    int initial_x = 1;
    int initial_y = 1;

    Intersection calle[real_number];
    Car cars[car_number];

    for (int i = 0; i < real_number; i++) { 
        int row = i / intersection_number;
        int col = i % intersection_number;
    
        calle[i].position[0] = 1 + (row * 2); 
        calle[i].position[1] = 1 + (col * 2);  
    }

    initial_x = 0;
    initial_y = 1;


    for (int i = 0; i < car_number; i++){

    }



    

    return 0;
}



