#pragma once

#define MAX(y, z) (((y) > (z)) ? (y) : (z))
#define MIN(y, z) (((y) < (z)) ? (y) : (z))
#define SQR(x) \
	(x)* (x)
#define PRINTR(w) printf(#w " = %d\n", (int)(w))

#define FIRST(x, y, z) MAX(SQR((x) + (y)), SQR((x) - (z)))
#define SECOND(x, y, z) MIN((x) * (y) + (y) * (z), SQR((z) * (x) + (y) * (z)))


