# IZP prvni cviceni

* Vitejte :)  
	* Prihlaseni do PC
* Uvod do predmetu
* Orientace v e-learning
* Napln cviceni
	* Cviceni jsou **bodovana**
* Projekty
* [Jak me kontaktovat](https://www.fit.vut.cz/person/ikozak/teaching/.cs#nav)

# Lehky uvod do programovani
* Co je to programovani?

## Prvni program - Hello World
```C
printf("Hello World!\n");
```

## Vyvojove prostredi
* Lokalni
	* Code::Blocks & friends
	* Terminal
* Vzdálené
	* SSH/Putty
	* Zakladni programy

## Deklarace a definice promennych, prirazeni
```C
int x;
x=10;

int y = 10;

int a, b;
int c=10, d=20;
```

## Vstup od uzivatele
```C
int a;
scanf("%d",&a);
```

## Výstup
```C
printf("%d\n",a);
```

* Definuj promennou, nacti cislo a pak ho vypis
* Vyrazy, aritmeticke a relacni operatory
	* Spocitej obvod a obsah ctverce
	* Totez pro obdelnik
	* Vypocet diskriminantu

## Podminky - if
```C
// pozor na odsazeni kodu
if(x < y) {
	// co delat, kdyz podminka plati
} else {
	// co delat, kdyz podminka neplati
}

if(y == z) {
	
}
// else nemusi byt vzdy

// podminky je mozne retezit
if(x == y) {

} else if(c != d) {

} else {

}
```

* Detekce sudeho cisla (operator %)
* Nalezitost cisla v intervalu
	* Pevne zadany interval
	* Uzivatelem zadany interval
```C
// podminky je mozne zanorovat
if(a == b) {
	if(c == d) {
		// ...
	}
}
```
* Prestupny rok
	* Zanorene podminky
	* Jedna podminka s vyuzitim &&, ||
	* Chybova kontrola rok < 1582
* Vyber maximalniho cisla
	* Porovnani vsech dvojic
	* Postupne porovnani + pomocna promenna
