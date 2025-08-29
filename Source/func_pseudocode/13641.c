-[SFUDataRepresentation isEqual:]
bool __cdecl -[SFUDataRepresentation isEqual:](SFUDataRepresentation *self, SEL a2, id a3)
{
  __int64 v5; // x0
  __int64 v6; // x19
  bool v7; // w19
  void *v8; // x20
  id v9; // x21
  void *v10; // x0
  void *v11; // x22
  char *v12; // x23
  char *v13; // x24
  char *v14; // x26
  char *v15; // x27
  char *v16; // x0
  char *v17; // x0
  size_t v18; // x25
  char *v20; // [xsp+0h] [xbp-60h] BYREF
  char *v21; // [xsp+8h] [xbp-58h] BYREF

  if ( self == a3 )
    return 1;
  v5 = objc_opt_class(&OBJC_CLASS___SFUDataRepresentation);
  if ( (objc_opt_isKindOfClass(a3, v5) & 1) == 0 )
    return 0;
  v6 = -[SFUDataRepresentation dataLength](self, "dataLength");
  if ( (void *)v6 != objc_msgSend(a3, "dataLength") )
    return 0;
  if ( -[SFUDataRepresentation hasSameLocationAs:](self, "hasSameLocationAs:", a3) )
    return 1;
  if ( !-[SFUDataRepresentation isReadable](self, "isReadable") || !(unsigned int)objc_msgSend(a3, "isReadable") )
    return 0;
  v8 = objc_autoreleasePoolPush();
  v9 = -[SFUDataRepresentation bufferedInputStream](self, "bufferedInputStream");
  v10 = objc_msgSend(a3, "bufferedInputStream");
  v20 = 0LL;
  v21 = 0LL;
  if ( v6 < 1 )
  {
LABEL_20:
    v7 = 1;
  }
  else
  {
    v11 = v10;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    while ( 1 )
    {
      if ( v13 == v15 )
      {
        v16 = (char *)objc_msgSend(v9, "readToOwnBuffer:size:", &v21, -1LL);
        v12 = v20;
        v13 = v21;
        v15 = &v16[(_QWORD)v21];
      }
      if ( v12 == v14 )
      {
        v17 = (char *)objc_msgSend(v11, "readToOwnBuffer:size:", &v20, -1LL);
        v12 = v20;
        v13 = v21;
        v14 = &v17[(_QWORD)v20];
      }
      v18 = v15 - v13 >= v14 - v12 ? v14 - v12 : v15 - v13;
      if ( !v18 || memcmp(v13, v12, v18) )
        break;
      v13 += v18;
      v12 += v18;
      v20 = v12;
      v21 = v13;
      v6 -= v18;
      if ( v6 <= 0 )
        goto LABEL_20;
    }
    v7 = 0;
  }
  objc_autoreleasePoolPop(v8);
  return v7;
}