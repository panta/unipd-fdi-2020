README
======

Questo repository contiene codice C relativo al corso di
Fondamenti di Informatica dell'[Università di Padova](https://www.unipd.it/) per
Ingegneri Meccatronici, anno 2020/2021.

Il materiale relativo a specifiche lezioni è disponibile nelle relative sotto-directory.


## Come scaricare il repository

Il repository completo è disponibile su [github](https://github.com/panta/unipd-fdi-2020.git).
Per crearne una copia sul proprio sistema utilizzando [git](https://git-scm.com/):

```bash
$ mkdir ~/projects
$ cd ~/projects
$ git clone https://github.com/panta/unipd-fdi-2020.git
$ cd unipd-fdi-2020
```

## Utilizzo

Nelle directory in cui il codice conduce a programmi eseguibili, solitamente è presente un
`Makefile` che ne dettaglia e automatizza la compilazione.

Per compilare tutti i programmi presenti in una sotto-directory, sui sitemi linux/unix è
sufficiente entrare nella directory da riga di comando e dare il comando `make`:

```bash
$ cd lezione-10
$ make
...

$ ./simple
Hello, World!
length of <2, 1>: 2.23607
```


## Licenza

Tutto il materiale, ove non diversamente specificato, è rilasciato sotto licenza "GNU General Public License",
pubblicata da [Free Software Foundation](https://www.fsf.org/), nella versione 2 (nota anche come GNU GPL v2).
Il testo completo della licenza è disponibile nel file `COPYING`.

Per tutto il materiale, ove non diversamente specificato:

Copyright (C) 2020 Marco Pantaleoni. Tutti i diritti riservati.
Copyright (C) 2020 Marco Pantaleoni. All rights reserved.
