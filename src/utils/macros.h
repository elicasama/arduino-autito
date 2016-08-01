#ifndef SRC_UTILS_MACROS_H_
#define SRC_UTILS_MACROS_H_

	#define repeat(_times) for (int _i = 0; _i < _times; _i++)

	#define foreach(item, array) \
		for(int keep=1, \
				count=0,\
				size=sizeof (array)/sizeof *(array); \
			keep && count != size; \
			keep = !keep, count++) \
		  for(item = (array)+count; keep; keep = !keep)

#endif
