#ifndef _LOS_HH_
#define _LOS_HH_

#include <stdio.h>
#include <stdint.h>

#include "../common.hh"

void PlotLOSPath(struct site source, struct site destination, char mask_value);

void PlotPropPath(struct site source, struct site destination, unsigned char mask_value, FILE *fd, int propmodel, int knifeedge,
                  int pmenv);

void PlotLOSMap(struct site source, double altitude, char *plo_filename, bool use_threads, uint8_t segments);

void PlotPropagation(struct site source, bbox bounds, 
                    double altitude, char *plo_filename,
		            int propmodel, int knifeedge, int haf, int pmenv, bool
		            use_threads, uint8_t segments);

void PlotPath(struct site source, struct site destination, char mask_value);

#endif /* _LOS_HH_ */
