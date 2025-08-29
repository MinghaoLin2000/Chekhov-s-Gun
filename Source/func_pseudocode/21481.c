+[LSRAudioDump urlForTaskIdentifier:]
id __cdecl +[LSRAudioDump urlForTaskIdentifier:](id a1, SEL a2, id a3)
{
  id v4; // x21
  id v5; // x20
  void *v6; // x19
  void *v7; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(+[LSRAudioDump dumpDirectory](&OBJC_CLASS___LSRAudioDump, "dumpDirectory"));
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "filenameForTaskIdentifier:", v4));
  objc_release(v4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "URLByAppendingPathComponent:", v6));
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}