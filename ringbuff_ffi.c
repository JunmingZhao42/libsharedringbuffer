#include "fence.h"
#include <stdlib.h>
#include <microkit.h>

void ffiTHREAD_MEMORY_RELEASE(unsigned char *c, long clen, unsigned char *a, long alen) {
    // TODO: remove this
    if (clen != 42 || alen != 42 || c != NULL || a != NULL) {
        // Just to make sure that we've got the corresponding args
        microkit_dbg_puts("Invalid arguments to ffiTHREAD_MEMORY_RELEASE\n");
        return;
    }
    THREAD_MEMORY_RELEASE();
}
