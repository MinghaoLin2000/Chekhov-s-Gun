+[NSString tsu_stringByHexEncodingData:]
id __cdecl +[NSString tsu_stringByHexEncodingData:](id a1, SEL a2, id a3)
{
  id v3; // x20
  void *v4; // x19
  id v5; // x20
  unsigned __int8 *v6; // x21
  char *v7; // x0
  char *v8; // x22
  unsigned int v9; // t1
  void *v10; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(+[NSMutableString string](&OBJC_CLASS___NSMutableString, "string"));
  v5 = objc_retainAutorelease(v3);
  v6 = (unsigned __int8 *)objc_msgSend(v5, "bytes");
  v7 = (char *)objc_msgSend(v5, "length");
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *v6++;
      objc_msgSend(v4, "appendFormat:", CFSTR("%02x"), v9);
      --v8;
    }
    while ( v8 );
  }
  v10 = objc_msgSend(v4, "copy");
  objc_release(v4);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}