_SFUFileOpen
FILE *__fastcall SFUFileOpen(void *a1, const char *a2)
{
  FILE *v3; // x20

  v3 = fopen((const char *)objc_msgSend(a1, "fileSystemRepresentation"), a2);
  if ( !v3 )
    +[NSException sfu_errnoRaise:format:](
      &OBJC_CLASS___NSException,
      "sfu_errnoRaise:format:",
      CFSTR("SFUFileOpenError"),
      CFSTR("Could not open %@"),
      a1);
  return v3;
}