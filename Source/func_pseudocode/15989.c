_uarpPlatformDarwinDecompressBuffer
__int64 __fastcall uarpPlatformDarwinDecompressBuffer(int a1, void *__src, size_t src_size, void *__dst, size_t __n)
{
  compression_algorithm v5; // w5
  __int64 result; // x0

  v5 = 1538;
  switch ( a1 )
  {
    case 0:
      if ( (_DWORD)src_size != (_DWORD)__n )
        return 51LL;
      memcpy(__dst, __src, (unsigned int)__n);
      return 0LL;
    case 1:
      goto LABEL_6;
    case 2:
      v5 = COMPRESSION_LZBITMAP;
      goto LABEL_6;
    case 3:
      v5 = COMPRESSION_LZ4;
LABEL_6:
      if ( compression_decode_buffer(
             (uint8_t *)__dst,
             (unsigned int)__n,
             (const uint8_t *)__src,
             (unsigned int)src_size,
             0LL,
             v5) == (unsigned int)__n )
        result = 0LL;
      else
        result = 51LL;
      break;
    default:
      result = 50LL;
      break;
  }
  return result;
}