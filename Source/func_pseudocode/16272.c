_generateHashForDataAtLocation
id __fastcall generateHashForDataAtLocation(void *a1, __int64 a2, __int64 a3)
{
  id v3; // x0
  void *v4; // x19
  id v5; // x21
  unsigned __int8 *v6; // x22
  id v7; // x20
  unsigned __int64 v8; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(generateHashForDataAtLocationAsData(a1, a2, a3));
  v4 = v3;
  if ( v3 )
  {
    v5 = objc_retainAutorelease(v3);
    v6 = (unsigned __int8 *)objc_msgSend(v5, "bytes");
    v7 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableString);
    if ( objc_msgSend(v5, "length") )
    {
      v8 = 0LL;
      do
        objc_msgSend(v7, "appendFormat:", CFSTR("%02x"), v6[v8++]);
      while ( v8 < (unsigned __int64)objc_msgSend(v5, "length") );
    }
  }
  else
  {
    v7 = 0LL;
  }
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}