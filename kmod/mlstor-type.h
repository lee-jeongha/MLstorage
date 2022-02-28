#ifndef _MLSTOR_TYPE_H_
#define _MLSTOR_TYPE_H_

typedef enum {
	READ_BACKINGDEV = 1,
	READ_BACKINGDEV_WC,	/* read backing device and write cache */
	READ_CACHINGDEV_WB,
	WRITE_BACKINGDEV,
	WRITE_BACKINGDEV_WB,
	READ_CACHINGDEV,
	WRITE_CACHINGDEV
} job_type_t;

#endif
