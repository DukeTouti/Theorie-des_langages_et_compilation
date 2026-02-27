# TD2 - Exercice 3 : Pointeurs en C

## Contenu
- `ex3_qst1.c` : analyse des valeurs prises par x lors de manipulations de pointeurs
- `ex3_qst2.c` : fonction swap permutant deux variables par adresse

---

## Compilation
```bash
make        # compile les deux exercices
make re     # nettoie et recompile from scratch
make fclean # supprime les exécutables
```

---

## Exécution

```bash
./ex3_qst1
./ex3_qst2
```

---

## Question 1 — Méthodologie

Pour analyser les valeurs prises par `x`, `pa` et `*pa` à chaque étape, j'ai utilisé
**GDB** plutôt que des `printf` répétitifs.

### Compilation avec symboles de debug
```bash
gcc -g ex3_qst1.c -o ex3_qst1
```

### Lancement et setup GDB
```bash
gdb ./ex3_qst1
```
```gdb
break main          # breakpoint au début du main
run                 # lancer le programme
n                   # avancer ligne par ligne jusqu'après l'init du tableau
```

### Affichage automatique à chaque étape
```gdb
display x               # valeur de x
display *pa             # valeur pointée par pa
display pa              # adresse stockée dans pa
display/4dw &a[0]       # contenu des 4 cases du tableau en décimal
```

Le mot-clé `display` réaffiche automatiquement ces valeurs à chaque `next (n)`,
ce qui évite de taper `print x`, `print pa`, etc. à chaque ligne.

### Format de `display/4dw`
```
      4  -->  nombre d'éléments à afficher
      d  -->  format décimal
      w  -->  taille word (4 bytes, taille d'un int)
```

### Résultat obtenu à chaque next
```
1: x    = ...
2: *pa  = ...
3: pa   = 0x7fff...
4: x/4dw &a[0]
   0x7fff...:   11   22   33   44
```

Cela permet de visualiser en temps réel quelle case mémoire est modifiée
(notamment lors de `++*pa` qui modifie la valeur dans le tableau directement).
