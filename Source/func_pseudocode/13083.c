-[SFUZipArchiveFileDataRepresentation inputStreamWithOffset:length:]
id __cdecl -[SFUZipArchiveFileDataRepresentation inputStreamWithOffset:length:](
        SFUZipArchiveFileDataRepresentation *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4)
{
  signed __int64 v7; // x0
  bool v8; // cc
  int mFd; // w0
  SFUFileInputStream *v10; // x0
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v7 = -[SFUFileDataRepresentation dataLength](self->mFileRepresentation, "dataLength");
  if ( (a4 | a3) < 0 || (v7 >= a4 ? (v8 = v7 - a4 < a3) : (v8 = 1), v8) )
    +[NSException raise:format:](
      &OBJC_CLASS___NSException,
      "raise:format:",
      NSInvalidArgumentException,
      CFSTR("Bad input stream range."));
  mFd = self->mFd;
  if ( mFd == -1 || pread(mFd, 0LL, 0LL, 0LL) == -1 )
    v10 = -[SFUFileInputStream initWithPath:offset:length:](
            objc_alloc(&OBJC_CLASS___SFUFileInputStream),
            "initWithPath:offset:length:",
            -[SFUFileDataRepresentation path](self->mFileRepresentation, "path"),
            a3,
            a4);
  else
    v10 = -[SFUFileInputStream initWithFileDescriptor:offset:length:](
            objc_alloc(&OBJC_CLASS___SFUFileInputStream),
            "initWithFileDescriptor:offset:length:",
            SFUDup((unsigned int)self->mFd),
            a3,
            a4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autorelease(v10);
}