Linux

```sh
gcc -o exe arq.c
./exe < arq.txt # Arquivo com os valores das variáveis
```

```sh
gcc arq.c -o -lm exe # Para quando usar funções como pow, floor, etc...
./exe < arq.txt # Arquivo com os valores das variáveis
```