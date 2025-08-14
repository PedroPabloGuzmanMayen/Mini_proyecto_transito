#ifndef CAR_H

#define CAR_H

typedef struct {
    int velocity;
    int position;
    int direction;  // 0 si es horizontal, 1 si es vertical
    int semaphore_id;  //Semáforo más cercano

} Car;

#endif