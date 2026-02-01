//
// Created by fernando on 26/04/2021.
//

#ifndef VACCINE_SHELL_LINKED_LIST_H
#define VACCINE_SHELL_LINKED_LIST_H

typedef struct lista Lista;

Lista* iniciaLista();
void liberaMoita(Lista* list);
void liberaLista(Lista* list);
void armageddon(Lista* list, int pid);
void insereLista(Lista* list, int gid);

#endif //VACCINE_SHELL_LINKED_LIST_H
