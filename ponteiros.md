# Ponteiros

```c
int main() {
  int x = 10;
  int *ptr = &x;

  x = 5;

  printf("x = %d , ptr = %d\n", x, ptr);
  return 0;
}
```

## Usando ponteiros

- **ponteiros** são observadores de memória
- **endereços** são lugares na memória
- **variáveis** são informações na memória

```c
int main() {
  int x = 10;
  int *ptr = &x;

  x = 5;
  *ptr = 9;

  printf("x = %d , ptr = %d\n", x, *ptr);
  return 0;
}
```

## funcoes que usam ponteiros

```c
void dobra_valor(int *valor) {
  (*valor) = (*valor) * 2;
}

void swap(int *a, int *b) {
  int aux = *b; // a = 2, b = 3, aux = 3
  *b = *a; // a = 2, b = 2, aux = 3
  *a = aux; // a = 3, b = 2, aux = 3
}

int main() {
  int test = 5;
  dobra_valor(&test);

  int x = 2, y = 3;
  swap(&x, &y);
  printf("x = %d, y = %d\n", x, y);

  return 0;
}
```
