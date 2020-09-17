#pragma once

int fibRecursiv(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibRecursiv(n - 1) + fibRecursiv(n - 2);

}

int fibLoop(int n)
{
    int a0 = 0;
    int a1 = 1;


    if (n == a0) return a0;
    if (n == a1) return a1;

    for (int i = 0; i < n - 1; i++)
    {
        a1 += a0;
        a0 = a1 - a0;
    }

    return a1;
}

int fibFormula(int n) {
    int i = 1, j = 0, k = 0, h = 1;
    int t;
    while (n > 0) {
        if (n % 2 != 0) {
            t = j * h;
            j = i * h + j * k + t;
            i = i * k + t;

        }
        t = h * h;
        h = 2 * k * h + t;
        k = k * k + t;
        n /= 2;
    }
    return j;
}

