-[SFUZipEntry setCompressionFlags:]
void __cdecl -[SFUZipEntry setCompressionFlags:](SFUZipEntry *self, SEL a2, unsigned __int16 a3)
{
  if ( (int)a3 <= 25450 )
  {
    if ( a3 )
    {
      if ( a3 != 8 )
        goto LABEL_9;
LABEL_8:
      self->mCompressionMethod = 1;
      return;
    }
    goto LABEL_7;
  }
  if ( a3 == 25452 )
    goto LABEL_8;
  if ( a3 == 25451 )
  {
LABEL_7:
    self->mCompressionMethod = 0;
    return;
  }
LABEL_9:
  +[SFUZipException raise:format:](
    &OBJC_CLASS___SFUZipException,
    "raise:format:",
    CFSTR("SFUZipCentralFileHeaderError"),
    CFSTR("Unsupported compression method"));
}