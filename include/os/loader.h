#ifndef __INCLUDE_LOADER_H__
#define __INCLUDE_LOADER_H__

#include "pgtable.h"
#include <type.h>

#define TMPLOADADDR 0x59000000
uint64_t load_task_img(int taskid, PTE *pgdir);

#endif