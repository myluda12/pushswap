/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayajrhou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:36:29 by ayajrhou          #+#    #+#             */
/*   Updated: 2021/07/06 10:36:31 by ayajrhou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct element
{
    int nombre;
    struct element *suivant;
    struct element *prec;
}              s_element;

typedef struct liste
{
    struct element *last;
    struct element *premier;
}               s_liste;

void    ft_initilisation(s_liste *node)
{
    node->last = NULL;
    node->premier = NULL;
}


void    ft_insert(s_liste *node, int value)
{
    s_element *point;
    s_element *a;
    point = malloc(sizeof(s_element));
     if(node->premier == NULL)
     {

         point->suivant = NULL;
         point->prec = NULL;
         point->nombre = value;
         node->premier = point;
         node->last = point;
     }
     else
     {
         a = node->premier;
         point->suivant = a;
         point->prec = NULL;
         point->nombre = value;
         node->premier = point;
        // node->last =
     }
}

int main(int argc , char **argv)
{
    s_liste *node;

    node = malloc(sizeof(s_liste));
    ft_initilisation(node);
    ft_insert(node,5);
    ft_insert(node,6);
    ft_insert(node,9);
    // int store;
    // while(argc - 1 > 0)
    // {
    //     store = atoi(argv[argc - 1]);
        
    //     argc--;
    // }
    return 0;
}