-[SFUDataRepresentation bufferedInputStream]
id __cdecl -[SFUDataRepresentation bufferedInputStream](SFUDataRepresentation *self, SEL a2)
{
  SFUBufferedInputStream *v2; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v2 = -[SFUBufferedInputStream initWithStream:dataLength:](
         objc_alloc(&OBJC_CLASS___SFUBufferedInputStream),
         "initWithStream:dataLength:",
         -[SFUDataRepresentation inputStream](self, "inputStream"),
         -[SFUDataRepresentation dataLength](self, "dataLength"));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v2);
}