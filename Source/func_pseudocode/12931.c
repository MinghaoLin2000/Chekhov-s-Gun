-[SFUZipEntry copyToFile:]
void __cdecl -[SFUZipEntry copyToFile:](SFUZipEntry *self, SEL a2, id a3)
{
  void *v5; // x19
  FILE *v6; // x20
  id v7; // x21
  void *v8; // x24
  void *__ptr; // [xsp+8h] [xbp-48h] BYREF

  v5 = objc_autoreleasePoolPush();
  unlink((const char *)objc_msgSend(a3, "fileSystemRepresentation"));
  v6 = (FILE *)SFUFileOpen(a3, "w");
  v7 = -[SFUDataRepresentation bufferedInputStream](self, "bufferedInputStream");
  while ( 1 )
  {
    __ptr = 0LL;
    v8 = objc_msgSend(v7, "readToOwnBuffer:size:", &__ptr, -1LL);
    if ( !v8 )
      break;
    if ( (void *)fwrite(__ptr, 1uLL, (size_t)v8, v6) != v8 )
      +[NSException sfu_errnoRaise:format:](
        &OBJC_CLASS___NSException,
        "sfu_errnoRaise:format:",
        CFSTR("SFUFileWriteError"),
        CFSTR("Could not write"));
  }
  objc_msgSend(v7, "close");
  fclose(v6);
  objc_autoreleasePoolPop(v5);
}