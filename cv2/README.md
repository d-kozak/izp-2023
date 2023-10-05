# Obecne Informace
* Jsou zverejnene projekty
* Dobrovolny test
* Pristi tyden nahrada
* Poznamka: obtiznost ziskani bodu postupne stoupa
    * jednak postupne behem semestru
    * druhak i behem cviceni 
        je jednodussi odpovedet na otazku, pripadne me navigovat pri implementaci, nez pak sam implementovat zaverecny ukol
    * doporucuji byt aktivni a hlasit se :)
* Visual Studio Code
    * Extensions
        * Code runner
            * Settings - code runner - Run in Terminal
        * Remote SSH
            * [Tutorial](https://code.visualstudio.com/docs/remote/ssh#_installation)

# Promenne, datove typy
* int, char, double
    * Jake jsou rozdily?
    * Rozsah hodnot?
    * printf 
    * scanf
```c
int x;
scanf("%d",&x);
printf("%d",x);

char c;
scanf("%c",&c);
printf("%c",c);

double x;
scanf("%lf",&x);
printf("%f",x);
```
* Uloha - kvadraticka rovnice
    * zjistit pocet reseni
    * vypsat je
* Uloha - nacist znak a zjistit, jestli se jedna o pismeno
    * [ASCII tabulka](https://upload.wikimedia.org/wikipedia/commons/thumb/1/1b/ASCII-Table-wide.svg/2560px-ASCII-Table-wide.svg.png)

# Prace s cyckly
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

* Uloha - Nacist tri cisla a pro kazde urcit, zda je sude
    * Nacist 100 cisel
    * Nacist volitelny pocet cisel
* Uloha - vypocet faktorialu
* Funkce
    * Pojmenovat male kusy kodu
```c
int add(int x, int y){
    return x + y;
}

int main(){
    int res = add(3,5);
}
```

# Koncept pole
```c
int pole[4]; 
pole[0] = 5; 
pole[1] = 6; 
pole[2] = pole[0]; 
pole[3] = pole[1] * 2;
```

```c
int pole[4] = {3,7,11,13}; int i = 2; pole[i] = pole[i-1];
```
* Uloha - nacist 5 cisel a vypsat v opacnem poradi
* Uloha - nacist 5 cisel do pole a najit jejich maximum
* Uloha - nacist staticky pocet cisel (znamy v dobe prekladu) a vypsat sumu/aritmeticky prumer
