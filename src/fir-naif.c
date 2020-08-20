int main()
{
    const unsigned int N = 3;
    const float b[] = {.25, .25, .25, .25};
    float x[] = {.4, .3, .2, .1};

    double y = 0.0;
    int k=0;
    while (k >= 0)
    {
        y = y + b[k] * x[k];
        k++;
    }
}