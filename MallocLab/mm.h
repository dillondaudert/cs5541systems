#include <stdio.h>

extern int mm_init (void);
extern void *mm_malloc (size_t size);
extern void mm_free (void *ptr);
extern void *mm_realloc(void *ptr, size_t size);
extern int mm_check (void);
extern void *_mm_incr_heap(size_t size);
extern void _mm_insert_link(void *);
extern void _mm_remove_link(void *);

/* 
 * Students work in teams of one or two.  Teams enter their team name, 
 * personal names and login IDs in a struct of this
 * type in their bits.c file.
 */
typedef struct {
    char *teamname; /* ID1+ID2 or ID1 */
    char *name1;    /* full name of first member */
    char *id1;      /* login ID of first member */
    char *name2;    /* full name of second member (if any) */
    char *id2;      /* login ID of second member */
} team_t;

extern team_t team;

/* error defines for mm_check clarity */
#define CONTIGUOUS_FREE 1
#define HEAPSIZE_MISMATCH 2
#define LENGTH_MISMATCH 3
#define INVALID_FREE_PTR 4
#define UNLISTED_FREE 5
