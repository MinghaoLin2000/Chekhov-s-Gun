+[NSData tsu_dataWithInputStream:error:]
id __cdecl +[NSData tsu_dataWithInputStream:error:](id a1, SEL a2, id a3, id *a4)
{
  id v4; // x19
  id v5; // x20
  __int64 v6; // x0
  void *i; // x3
  _BYTE v9[1024]; // [xsp+8h] [xbp-428h] BYREF
  __int64 vars8; // [xsp+438h] [xbp+8h]

  v4 = objc_retain(a3);
  objc_msgSend(v4, "open");
  v5 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableData);
  v6 = (__int64)objc_msgSend(v4, "read:maxLength:", v9, 1024LL);
  if ( v6 >= 1 )
  {
    for ( i = (void *)v6; (__int64)i > 0; i = objc_msgSend(v4, "read:maxLength:", v9, 1024LL) )
      objc_msgSend(v5, "appendBytes:length:", v9, i);
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}