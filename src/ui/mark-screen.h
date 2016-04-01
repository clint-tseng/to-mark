#ifndef __MARK_SCREEN
#define __MARK_SCREEN

#include "../app.h"

struct markscreendata
{
  App* app;
  TextLayer* name;
  TextLayer* bearing_value;
  TextLayer* bearing_label;
  TextLayer* distance_value;
  TextLayer* distance_label;

  char bearing[7];
  char distance[7];
};
typedef struct markscreendata MarkScreenData;

typedef Window MarkScreen;

MarkScreen* mark_screen_show(App* app);
void mark_screen_update(MarkScreen* w, char* bearing, char* distance);
void mark_screen_destruct(MarkScreen* w);

#endif
