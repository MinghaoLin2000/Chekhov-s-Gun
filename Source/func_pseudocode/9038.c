+[TSPFileManager errorWithDomain:code:sourcePath:targetPath:]
id __cdecl +[TSPFileManager errorWithDomain:code:sourcePath:targetPath:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  id v9; // x19
  unsigned __int64 v10; // x20
  unsigned __int64 v11; // x22
  void *v12; // x0
  void *v13; // x23
  void *v14; // x25
  NSError *v15; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v9 = objc_retain(a3);
  v10 = (unsigned __int64)objc_retain(a5);
  v11 = (unsigned __int64)objc_retain(a6);
  if ( v10 | v11 )
  {
    v12 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSMutableDictionary), "initWithCapacity:", 2LL);
    v13 = v12;
    if ( v10 )
      objc_msgSend(v12, "setObject:forKeyedSubscript:", v10, NSFilePathErrorKey);
    if ( v11 )
      objc_msgSend(v13, "setObject:forKeyedSubscript:", v11, CFSTR("TSPTargetFilePath"));
  }
  else
  {
    v13 = 0LL;
  }
  v14 = objc_msgSend(v13, "copy");
  v15 = objc_retainAutoreleasedReturnValue(
          +[NSError errorWithDomain:code:userInfo:](
            &OBJC_CLASS___NSError,
            "errorWithDomain:code:userInfo:",
            v9,
            a4,
            v14));
  objc_release(v14);
  objc_release(v13);
  objc_release((id)v11);
  objc_release((id)v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}