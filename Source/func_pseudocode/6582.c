_CGBitmapContextCreate
CGContextRef __cdecl CGBitmapContextCreate(
        void *data,
        size_t width,
        size_t height,
        size_t bitsPerComponent,
        size_t bytesPerRow,
        CGColorSpaceRef space,
        uint32_t bitmapInfo)
{
  return _CGBitmapContextCreate(data, width, height, bitsPerComponent, bytesPerRow, space, bitmapInfo);
}