/*
 * o2dlm_err.c:
 * This file is automatically generated; please do not edit it.
 */

#include <stdlib.h>

#define N_(a) a

static const char * const text[] = {
	N_(	"Memory allocation failed"),
	N_(	"Unable to access cluster service"),
	N_(	"Invalid name for a lock"),
	N_(	"Invalid locking level"),
	N_(	"Internal logic failure"),
	N_(	"Name too long"),
	N_(	"Could not stat user_dlmfs mountpoint"),
	N_(	"Dlmfs path specified is not a directory."),
	N_(	"ocfs2_dlmfs file system was not found"),
	N_(	"Could not open dlm directory"),
	N_(	"No directory for domain was found"),
	N_(	"Could not stat domain directory"),
	N_(	"Domain directory has active locks"),
	N_(	"Could not read domain dir"),
	N_(	"Could not destroy domain"),
	N_(	"Could not create domain"),
	N_(	"Could not generate random value"),
	N_(	"Lock resource is in use by another process"),
	N_(	"Output Error"),
	N_(	"Error unlinking lock resource"),
	N_(	"Could not find lock resource"),
	N_(	"Already have a lock on this resource"),
	N_(	"Could not take lock"),
	N_(	"Could not drop all locks"),
	N_(	"Invalid arguments passed to function"),
	N_(	"Trylock failed"),
	N_(	"Error reading LVB"),
	N_(	"Error writing LVB"),
	N_(	"Could not seek within file descriptor"),
	N_(	"The domain is busy and cannot be accessed"),
	N_(	"This environment does not support BASTs"),
	N_(	"The LVB is not valid"),
    0
};

struct error_table {
    char const * const * msgs;
    long base;
    int n_msgs;
};
struct et_list {
    struct et_list *next;
    const struct error_table * table;
};
extern struct et_list *_et_list;

const struct error_table et_o2dl_error_table = { text, -1485330944L, 32 };

static struct et_list link = { 0, 0 };

void initialize_o2dl_error_table_r(struct et_list **list);
void initialize_o2dl_error_table(void);

void initialize_o2dl_error_table(void) {
    initialize_o2dl_error_table_r(&_et_list);
}

/* For Heimdal compatibility */
void initialize_o2dl_error_table_r(struct et_list **list)
{
    struct et_list *et, **end;

    for (end = list, et = *list; et; end = &et->next, et = et->next)
        if (et->table->msgs == text)
            return;
    et = malloc(sizeof(struct et_list));
    if (et == 0) {
        if (!link.table)
            et = &link;
        else
            return;
    }
    et->table = &et_o2dl_error_table;
    et->next = 0;
    *end = et;
}