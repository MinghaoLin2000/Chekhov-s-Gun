-[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:]
id __cdecl -[SFUZipArchiveMemoryDataRepresentation bufferedInputStreamWithOffset:length:](
        SFUZipArchiveMemoryDataRepresentation *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  signed __int64 v7; // x0
  bool v8; // cc
  SFUMemoryInputStream *v9; // x0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v7 = -[NSData length](self->mData, "length");
  if ( (a4 | a3) < 0 || (v7 >= a4 ? (v8 = v7 - a4 < a3) : (v8 = 1), v8) )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInvalidArgumentException,
      CFSTR("Bad input stream range."));
  v9 = -[SFUMemoryInputStream initWithData:offset:length:](
         objc_alloc(&OBJC_CLASS___SFUMemoryInputStream),
         "initWithData:offset:length:",
         self->mData,
         a3,
         a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v9);
}