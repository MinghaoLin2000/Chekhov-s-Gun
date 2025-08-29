+[TSULogHelper sharedInstance]
id __cdecl +[TSULogHelper sharedInstance](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1001F7FD0 != -1 )
    dispatch_once(&qword_1001F7FD0, &stru_1001DE338);
  v2 = (void *)qword_1001F7FC8;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}