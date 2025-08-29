-[SFUDataRepresentation compare:]
signed __int64 __cdecl -[SFUDataRepresentation compare:](SFUDataRepresentation *self, SEL a2, id a3)
{
  __int64 v5; // x20
  void *v6; // x0
  signed __int64 v7; // x21
  void *v9; // x19
  id v10; // x22
  void *v11; // x0
  void *v12; // x23
  char *v13; // x24
  char *v14; // x25
  char *v15; // x27
  char *v16; // x28
  char *v17; // x0
  char *v18; // x0
  size_t v19; // x26
  int v20; // w0
  char *v21; // [xsp+0h] [xbp-60h] BYREF
  char *v22; // [xsp+8h] [xbp-58h] BYREF

  if ( self == a3 )
    return 0LL;
  v5 = -[SFUDataRepresentation dataLength](self, "dataLength");
  v6 = objc_msgSend(a3, "dataLength");
  if ( v5 < (__int64)v6 )
    return -1LL;
  if ( v5 > (__int64)v6 )
    return 1LL;
  if ( -[SFUDataRepresentation hasSameLocationAs:](self, "hasSameLocationAs:", a3) )
    return 0LL;
  v9 = objc_autoreleasePoolPush();
  v10 = -[SFUDataRepresentation bufferedInputStream](self, "bufferedInputStream");
  v11 = objc_msgSend(a3, "bufferedInputStream");
  v21 = 0LL;
  v22 = 0LL;
  if ( v5 < 1 )
  {
LABEL_26:
    v7 = 0LL;
  }
  else
  {
    v12 = v11;
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v7 = 1LL;
    while ( 1 )
    {
      if ( v14 == v16 )
      {
        v17 = (char *)objc_msgSend(v10, "readToOwnBuffer:size:", &v22, -1LL);
        v13 = v21;
        v14 = v22;
        v16 = &v17[(_QWORD)v22];
      }
      if ( v13 == v15 )
      {
        v18 = (char *)objc_msgSend(v12, "readToOwnBuffer:size:", &v21, -1LL);
        v13 = v21;
        v14 = v22;
        v15 = &v18[(_QWORD)v21];
      }
      if ( v16 == v14 && v15 != v13 )
        break;
      if ( v16 != v14 && v15 == v13 )
        goto LABEL_28;
      if ( v16 - v14 >= (unsigned __int64)(v15 - v13) )
        v19 = v15 - v13;
      else
        v19 = v16 - v14;
      if ( !v19 )
        goto LABEL_26;
      v20 = memcmp(v14, v13, v19);
      if ( v20 < 0 )
        break;
      if ( v20 )
        goto LABEL_28;
      v14 += v19;
      v13 += v19;
      v21 = v13;
      v22 = v14;
      v5 -= v19;
      if ( v5 <= 0 )
        goto LABEL_26;
    }
    v7 = -1LL;
  }
LABEL_28:
  objc_autoreleasePoolPop(v9);
  return v7;
}