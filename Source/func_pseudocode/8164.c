_deflateInit2_
int __cdecl deflateInit2_(
        z_streamp strm,
        int level,
        int method,
        int windowBits,
        int memLevel,
        int strategy,
        const char *version,
        int stream_size)
{
  return _deflateInit2_(strm, level, method, windowBits, memLevel, strategy, version, stream_size);
}