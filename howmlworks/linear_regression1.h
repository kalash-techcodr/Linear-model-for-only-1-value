//LINEAR MODEL MADE BY KALASH.
#ifndef LINEAR_REGRESSION1_H
#define LINEAR_REGRESSION1_H

//POINT FOR DATA
typedef struct {
    float x;
    float y;
} Point;

//the struct for weight and bias 
typedef struct {
    float w;
    float b;
} LinearRegression1;

//functions
LinearRegression1 train_model(Point *data, int n);
float predict_value(LinearRegression1 model, float x);

#endif