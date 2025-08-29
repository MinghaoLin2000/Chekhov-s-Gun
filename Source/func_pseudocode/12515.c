-[NSURL tsu_setNeedsDocumentIdentifierAndReturnError:]
bool __cdecl -[NSURL tsu_setNeedsDocumentIdentifierAndReturnError:](NSURL *self, SEL a2, id *a3)
{
  int v4; // w0
  int v5; // w21
  int v6; // w20
  stat v8; // [xsp+0h] [xbp-B0h] BYREF

  v4 = open(-[NSURL fileSystemRepresentation](objc_retainAutorelease(self), "fileSystemRepresentation"), 0x200000);
  if ( v4 < 0 )
  {
    v6 = -1;
    if ( !a3 )
      return v6 == 0;
    goto LABEL_9;
  }
  v5 = v4;
  memset(&v8, 0, sizeof(v8));
  v6 = fstat(v4, &v8);
  if ( !v6 )
  {
    if ( (v8.st_flags & 0x40) != 0 )
      v6 = 0;
    else
      v6 = fchflags(v5, v8.st_flags | 0x40);
  }
  close(v5);
  if ( a3 )
  {
LABEL_9:
    if ( v6 )
      *a3 = objc_autorelease(
              objc_retainAutoreleasedReturnValue(
                +[NSError tsu_fileReadPOSIXErrorWithNumber:userInfo:](
                  &OBJC_CLASS___NSError,
                  "tsu_fileReadPOSIXErrorWithNumber:userInfo:",
                  (unsigned int)*__error(),
                  0LL)));
  }
  return v6 == 0;
}