#ifndef IZ_LIBIZ_H
#define IZ_LIBIZ_H 1

#include "image.h"

namespace IZ {

void initDecodeTable(void);
void initEncodeTable(void);

const unsigned char *decodeImage(Image<> &im, const unsigned char *src);
unsigned char *encodeImage(const Image<> &im, unsigned char *dest);

} // namespace IZ

#endif
