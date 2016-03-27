#ifndef __GROUP
#define __GROUP

#include "./linked-list.h"

struct group
{
  char* name;
  struct list* marks;
};

void group_init(struct group* g);

size_t size_group(struct group* g);
void serialize_group(struct group* g, void* buffer);
void deserialize_group(struct group* g, void* buffer);

void group_destruct(struct group* g);

#endif
