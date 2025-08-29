-[TSUZipInflateReadChannel handleFailureWithHandler:error:]
void __cdecl -[TSUZipInflateReadChannel handleFailureWithHandler:error:](
        TSUZipInflateReadChannel *self,
        SEL a2,
        id a3,
        id a4)
{
  void (*v5)(void); // x23
  id v6; // x19
  id v7; // x21
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a4 )
  {
    v5 = (void (*)(void))*((_QWORD *)a3 + 2);
    v6 = objc_retain(a3);
    v5();
  }
  else
  {
    v7 = objc_retain(a3);
    v6 = objc_retainAutoreleasedReturnValue(
           +[NSError tsu_fileReadUnknownErrorWithUserInfo:](
             &OBJC_CLASS___NSError,
             "tsu_fileReadUnknownErrorWithUserInfo:",
             0LL));
    (*((void (__fastcall **)(id, __int64, _QWORD, id))a3 + 2))(v7, 1LL, 0LL, v6);
    objc_release(v7);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}