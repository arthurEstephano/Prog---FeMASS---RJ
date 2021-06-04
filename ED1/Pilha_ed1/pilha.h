typedef struct pilha Pilha;
Pilha* cria_pilha (void);
int size (Pilha* p);
bool isEmpty (Pilha* p);
float pop (Pilha* p);
void push (Pilha* p, float y);
void mostrar(Pilha* p);
void top (Pilha* p);
