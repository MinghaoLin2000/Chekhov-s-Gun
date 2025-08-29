-[SFUBufferedInputStream initWithStream:dataLength:]
SFUBufferedInputStream *__cdecl -[SFUBufferedInputStream initWithStream:dataLength:](
        SFUBufferedInputStream *self,
        SEL a2,
        id a3,
        signed __int64 a4)
{
  if ( (unsigned __int64)a4 >= 0x40000 )
    a4 = 0x40000LL;
  return -[SFUBufferedInputStream initWithStream:bufferSize:](self, "initWithStream:bufferSize:", a3, a4);
}