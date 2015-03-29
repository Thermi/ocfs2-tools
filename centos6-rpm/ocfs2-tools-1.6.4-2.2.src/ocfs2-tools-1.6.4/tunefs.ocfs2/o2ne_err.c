/*
 * o2ne_err.c:
 * This file is automatically generated; please do not edit it.
 */

#include <stdlib.h>

#define N_(a) a

static const char * const text[] = {
	N_(	"Unable to setup signal handling"),
	N_(	"Heartbeat devices cannot be tuned, they can only be re-formatted with mkfs.ocfs2"),
	N_(	"This device was in the process of resizing. Run \"fsck.ocfs2 -f <device>\" to clean up the aborted operation, then try again"),
	N_(	"This device was in the process of another tunefs.ocfs2 operation.  Run \"fsck.ocfs2 -f <device>\" to clean up the aborted operation, then try " "again"),
	N_(	"Cluster stack specified does not match the one currently running"),
	N_(	"Operation needs to be performed online"),
	N_(	"Device is busy"),
	N_(	"Mountpoint not found for online operation"),
	N_(	"Online operation request failed (see dmesg)"),
	N_(	"Internal logic failure"),
	N_(	"Unable to allocate memory"),
	N_(	"At least one journal has uncommitted changes.  Run fsck.ocfs2 to replay all dirty journals"),
	N_(	"Invalid number"),
	N_(	"Filesystem cannot support more than 255 slots"),
	N_(	"Filesystem cannot support more than 32767 slots"),
	N_(	"Orphan dir is not empty"),
	N_(	"Truncate log is not empty"),
	N_(	"Local allocation file is not empty"),
	N_(	"Unwritten extents are present"),
	N_(	"Sparse file support is missing"),
	N_(	"Operation failed"),
	N_(	"This online operation is not available"),
	N_(	"Cluster stack initialization was skipped"),
	N_(	"Scanning inodes for directory indexing failed"),
	N_(	"Write I/O failed"),
	N_(	"Truncate directory indexed tree failed"),
	N_(	"Build directory indexed tree failed"),
	N_(	"Install directory trailer failed"),
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

const struct error_table et_o2ne_error_table = { text, -1485168896L, 28 };

static struct et_list link = { 0, 0 };

void initialize_o2ne_error_table_r(struct et_list **list);
void initialize_o2ne_error_table(void);

void initialize_o2ne_error_table(void) {
    initialize_o2ne_error_table_r(&_et_list);
}

/* For Heimdal compatibility */
void initialize_o2ne_error_table_r(struct et_list **list)
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
    et->table = &et_o2ne_error_table;
    et->next = 0;
    *end = et;
}