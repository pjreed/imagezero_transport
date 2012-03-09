#include "libiz.h"
#include "encoder.h"
#include "decoder.h"

namespace IZ {

unsigned char *encodeImage(const Image<> &im, unsigned char *dest)
{
    ImageEncoder<> ic;
    ic.begin(dest);
    ic.encodeImageSize(im);
    ic.encodeImagePixels(im);
    return ic.end();
}

const unsigned char *decodeImage(Image<> &im, const unsigned char *src)
{
    ImageDecoder<> ic;
    ic.begin(src);
    ic.decodeImageSize(im);
    ic.decodeImagePixels(im);
    return ic.end();
}

void decodeImageSize(Image<> &im, const unsigned char *src)
{
    ImageDecoder<> ic;
    ic.begin(src);
    ic.decodeImageSize(im);
    ic.end();
}

} // namespace IZ
