_SFUDup
__int64 __fastcall SFUDup(__int64 a1)
{
  __int64 v2; // x19

  v2 = dup(a1);
  if ( (_DWORD)v2 == -1 )
    +[NSException sfu_errnoRaise:format:](
      &OBJC_CLASS___NSException,
      "sfu_errnoRaise:format:",
      CFSTR("SFUDupError"),
      CFSTR("Could not dup %d"),
      a1);
  return v2;
}