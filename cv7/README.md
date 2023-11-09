# Cviceni 7 - Práce s ukazateli
## Pulsemestralni test
* bezte vsichni (i ti, co zatim maji 0 bodu z 1. projektu)

## Pole jako ukazatel
[cv1](./1_pole_ukazatel.c)
## Priklady predavani poli do funkci
```c
void foo(int arr[], int size);
void bar(int *arr, int size);
```
[cv2](./2_predavani_poli.c)

## Operace nad vektory
```c
int vector_ctor(vector_t *v, unsigned int size);
void vector_init(vector_t *v);
void vector_dtor(vector_t *v);
```
[cv3](./3_vector.c)

## Argumenty programu
```c
int main(int argc, char **argv)
{
    if (argc < NUTNY_POCET)
    {
    fprintf(stderr, "...");
    return 1;
    }
    // ...
    for (int i = 1; i < argc; i++)
    {
    // zpracuj argument argv[i]
    }
    // ...
}
```
[cv4](./4_args_example.c)
[cv4](./5_args_parsing.c)