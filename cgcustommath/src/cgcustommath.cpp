#include "cgcustommath.hpp"

Eigen::Array22f matrix(int a, int b)
{
    Eigen::Array22f mat;
    mat << 1.0f , 0.0f , 0.0f , 1.0f;
    mat *= a;
    mat += b;
    return mat;
}