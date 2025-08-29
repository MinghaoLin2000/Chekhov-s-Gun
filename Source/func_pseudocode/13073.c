_SFUOpen
__int64 __fastcall SFUOpen(void *a1, int a2, unsigned int a3)
{
  __int64 v4; // x20

  v4 = open((const char *)objc_msgSend(a1, "fileSystemRepresentation"), a2, a3);
  if ( (_DWORD)v4 == -1 )
    +[NSException sfu_errnoRaise:format:](
      &OBJC_CLASS___NSException,
      "sfu_errnoRaise:format:",
      CFSTR("SFUOpenError"),
      CFSTR("Could not open %@"),
      a1);
  return v4;
}