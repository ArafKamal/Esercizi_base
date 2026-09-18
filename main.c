/*
#include <stdio.h>

int main(void) {
    int x = 42;
    printf("%d\n", x);
    printf("%p\n", &x);

    x = 100;
    printf("%d\n", x);
    printf("%p\n", &x);

    return 0;
}
*/

/*
#include <stdio.h>
void scambia(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n", x, y);
    scambia(&x, &y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *num = malloc(1 * sizeof(float));

    printf("Inserisci un numero\n");
    scanf("%f", &num[0]);

    float risultato = num[0] * 120/100;
    printf("Risultato aumentato del 20 per cento = %.2f\n", risultato);

    free(num);
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int len;
    int somma = 0;

    printf("Inserisci la lunghezza\n");
    scanf("%d",&len);

    float *arr = malloc(len * sizeof(float));

    for (int i = 0; i < len; i++) {
        printf("Inserisci numero %d:\n", i+1);
        scanf("%f",&arr[i]);
        somma += arr[i];
    }

    printf("Somma: %d\n", somma);
    free(arr);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    int arr[] = {10,20,30,40,50};
    int *punt = arr;

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, *(punt + i));
    }

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    int arr[] = {1,2,3,4,5};
    int *punt = arr;

    int temp;

    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];
        arr[5 - i - 1] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Elemento %d: %d\n", i, *(punt + i));
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>

char *duplica_stringa(const char *s) {
    int i = 0;
    const char *p = s;

    while (*p != '\0') {
        i++;
        p++;
    }

    char *risultato = malloc((i + 1) * sizeof(char));

    for (int j = 0; j < i; j++) {
        risultato[j] = s[j];
    }

    risultato[i] = '\0';

    return risultato;
}

int main(void) {
    char *stringa = "Esercitazione puntatori";
    printf("%s\n", stringa);

    char *test = duplica_stringa(stringa);
    printf("%s\n", test);

    free(test);

    return 0;
}
*/

/*
#include <stdio.h>

int main(void) {
    char arr[] = {1,-90,3,4,9};

    int max = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d\n", max);

    return 0;
}
*/