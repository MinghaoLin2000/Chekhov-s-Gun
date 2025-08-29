+[TSPFileManager ioCompletionQueue]
id __cdecl +[TSPFileManager ioCompletionQueue](id a1, SEL a2)
{
  void *v2; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( qword_1001F7448 != -1 )
    dispatch_once(&qword_1001F7448, &stru_1001D1048);
  v2 = (void *)qword_1001F7440;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(v2);
}