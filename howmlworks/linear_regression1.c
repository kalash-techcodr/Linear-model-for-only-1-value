#include "linear_regression1.h"

//train model
LinearRegression1 train_model(Point *data, int n)
{
    //create a model
    LinearRegression1 model;
    float xMean = 0;
    float yMean = 0;
    float u = 0;
    float d = 0;

    //calculate means
    for (int i = 0; i < n; i++)
        xMean += data[i].x;
    for (int i = 0; i < n; i++)
        yMean += data[i].y;

    xMean /= n;
    yMean /= n;

    
    //formula for finding weight
    for (int i = 0; i < n; i++) {
        u += (data[i].x - xMean) * (data[i].y - yMean);
        d += (data[i].x - xMean) * (data[i].x - xMean);
    }

    model.w = u / d;
    //formula for bias
    model.b = yMean - model.w * xMean;

    return model;
}

float predict_value(LinearRegression1 model, float x)
{
    //formuala for y is (y = wx + b)
    return model.w * x + model.b;
}