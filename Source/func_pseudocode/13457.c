-[TSUStreamCompression processBytes:size:]
bool __cdecl -[TSUStreamCompression processBytes:size:](
        TSUStreamCompression *self,
        SEL a2,
        char *a3,
        unsigned __int64 a4)
{
  return -[TSUStreamCompression processBytes:size:flags:](self, "processBytes:size:flags:", a3, a4, 0LL);
}