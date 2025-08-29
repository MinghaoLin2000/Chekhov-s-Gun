_crc32
uint32_t __cdecl crc32(uint32_t crc, const void *buf, size_t size)
{
  return _crc32(crc, buf, size);
}