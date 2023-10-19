# Programovaci konvence
* odradkovani
* pojmenovavani identifikatoru
```c
int y = 10;
int f(int x){if(x<y){return x;}else{return y;}}
```

# Uvod do funkci
```c
int my_abs(int x) {
    if (x < 0)
        return -x;
    else
        return x;
}
```

Načtěte jméno a příjmení (2 řetězce s omezenou délkou, délku si zvolte sami) a zjistěte, zda obsahují pouze písmena
anglické abecedy.
1. Implementujte výše uvedené ve funkci main - neefektivní, chyba kopie kódu.
2. Implementujte funkci pro detekci písmena a funkci pro kontrolu řetězce na písmena.
3. Porovnejte funkci pro detekci písmene s funkcí isalpha (ctype.h)

```c
// vrací hodnotu většího čísla
int my_max(int a, int b);
// vrací absolutní hodnotu menšího čísla
int my_crazy_min(int a, int b);
// vrací délku řetězce v počtu znaků
int my_strlen(char str[]);
// hledá první výskyt znaku v řetězci, vrací -1, pokud se znak v řetězci nevyskytuje
int my_strchr(char str[], char ch);
// hledá poslední výskyt znaku v řetězci, vrací -1, pokud znak neobsahuje
int my_strrchr(char str[], char ch);
/*
* Vrací řetězcový literál odpovídající skloňování slova "hodina" podle daného počtu.
1
* Pro hodin=1 vrací "hodina", hodin=2 vrací "hodiny", pro hodin=5 vrací "hodin" apod.
*/
char *hodiny2str(int hodin);
// vrací řetězcový literál skloňovaného slova "minuta"
char *minuta2str(int minut);
```

```c
int get_max(int arr[], int len);
int get_sum(int arr[], int len);
// Funkce porovná pole a vrací 1, pokud každý prvek v poli arr1
// je menší než prvek na stejném indexu v poli arr2.
int smaller_than(int arr1[], int arr2[], int arr_len);
```

# Vnorene cykly
* Načtěte dvě pole číslic o velikosti 5 a určete počet společných číslic (pozice nehraje roli).
    1. Nejprve předpokládejme, že pole neobsahují duplicity.
    2. Vylepšit o možnost duplicit (např. pro [1,1,5,5,2] a [5,5,1,1,3] je v výsledek 2).
    3. Zjednodušit tento program pomocí funkce, která pro zadané pole a číslo vrátí 0/1 podle toho, jestli se číslo v poli nachází.

# Funkce pro praci s mnozinami
Uvažujeme množiny čísel s fixní maximální velikostí (zatím nemáme dostatečnou znalost pro efektivnější reprezentaci).
Implementujte funkce:
* isInSet (prvek je v množině)
* isSet (ověření, že pole reprezentuje množinu, tj. každý prvek se vyskytuje jen jednou)
* printIntersection, printUnion, printProduct (průnik, sjednocení a kartézský součin množin)