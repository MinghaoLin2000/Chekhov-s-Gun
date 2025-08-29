__Z20internUTF8ByteStringPKcm
id __fastcall internUTF8ByteString(const char *a1, __int64 a2)
{
  id *Value; // x0
  id v5; // x21
  id v7; // x0
  id v8; // x19
  const char *v9; // [xsp+0h] [xbp-40h] BYREF
  __int64 v10; // [xsp+8h] [xbp-38h]
  __int64 v11; // [xsp+10h] [xbp-30h]
  __int64 v12; // [xsp+18h] [xbp-28h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v9 = a1;
  v10 = a2;
  v11 = sub_100014958(a1, a2);
  v12 = 0LL;
  if ( qword_1000C3ED0 != -1 )
    dispatch_once(&qword_1000C3ED0, &stru_100091AC0);
  Value = (id *)CFDictionaryGetValue((CFDictionaryRef)qword_1000C3ED8, &v9);
  if ( Value )
  {
    v5 = objc_retain(Value[3]);
  }
  else
  {
    v7 = objc_alloc((Class)&OBJC_CLASS___NSString);
    v5 = objc_msgSend(v7, "initWithBytes:length:encoding:", a1, a2, 4LL, v9, v10, v11, v12);
    if ( v5 && (unsigned int)sub_1000149A0(a1, a2) )
    {
      v8 = objc_retainAutoreleasedReturnValue((id)sub_100014A14(v5));
      objc_release(v5);
      v5 = v8;
    }
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}