#include <stdio.h>

const int N = 3;  // Number of scores

float average(int length, int array[]);

int main(void)
{
    int scores[N];

    // Kullanıcıdan N tane skor al
    for (int i = 0; i < N; i++)
    {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Ortalama yazdır
    printf("Average: %.2f\n", average(N, scores));

    return 0;
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    return (float) sum / length;
}
