/* $Id: hash.h,v 1.2 2005/02/18 20:56:18 greg Exp $ */

#ifndef _hash_h_
#define _hash_h_

struct hash;
typedef struct hash hash;

#include "sexp.h"

typedef struct hashentry
{
  sexp key;
  sexp value;
  struct hashentry *next;
} hashentry;

struct hash {
  int size;
  int num_entries;
  hashentry **entries;
} ;

hash *makehash( int size );
void hashput( hash *h, sexp key, sexp value );
sexp hashget( hash *h, sexp key );
void hashdel( hash *h, sexp key );

typedef struct hashiter {
  hash *h;
  int index;
  hashentry *cursor;
} hashiter ;

#if 0 // unported
void hash_init_iter( hashiter *hi, hash *h );
int hash_iter_next( hashiter *hi, sexp *key, sexp *value );
void hash_dump( hash *h );

#define FORHASH(__h,__k,__v) \
  sexp __k;\
  sexp __v;\
  hashiter __k##iter;\
  hash_init_iter( &__k##iter, (__h) );\
  while (hash_iter_next( &__k##iter, &__k, &__v ))
#endif

#endif /* _hash_h_ */
