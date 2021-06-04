typedef struct fila Fila;
Fila* cria_fila (void);
void enqueue (Fila* f, float y);
float dequeue (Fila* f);
void mostrar(Fila* f);
void front(Fila* f);
bool isEmpty (Fila* f);
void size(Fila* f);
