int main()
{
    const unsigned int N = 3;
    const float b[] = {.25, .25, .25, .25};
    float x[] = {.4, .3, .2, .1};

    double y = 0.0;
    int k=N;
    int test;
    loop:
    {
        y = y + b[k] * x[k];
        test = (k-- != 0);      // En ensamblador:      subs k, #1
    }
    if (test) goto loop;        // En ensamblador:      bpl loop
}