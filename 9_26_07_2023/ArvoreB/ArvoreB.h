#ifndef ARVOREB_H_INCLUDED
#define ARVOREB_H_INCLUDED


typedef struct aux {
    int num;
    struct aux * direita;
    struct aux * esquerda;
} Elemento;

typedef struct {
    Elemento * raiz;
}ArvoreB;

void Inicializar(ArvoreB * arv);
int Inserir(ArvoreB * arv, int num);
void imprimirArvore(Elemento *raiz);


#endif // ARVOREB_H_INCLUDED
