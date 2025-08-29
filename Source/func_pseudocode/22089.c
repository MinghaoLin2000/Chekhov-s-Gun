_DeriveKey
__int64 __fastcall DeriveKey(
        _WORD *a1,
        _OWORD *a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  FMMFileLogger *v16; // x0
  const __CFString *v17; // x8
  size_t v18; // x2
  const void *v19; // x1
  char *v20; // x0
  char *v21; // x26
  int v22; // w20
  __int64 result; // x0
  __int128 v24; // q1
  __int64 data; // [xsp+28h] [xbp-A8h] BYREF
  __int128 v26; // [xsp+30h] [xbp-A0h] BYREF
  __int128 v27; // [xsp+40h] [xbp-90h]
  __int128 macOut; // [xsp+50h] [xbp-80h] BYREF
  __int128 v29; // [xsp+60h] [xbp-70h]

  data = a5;
  -[FMMFileLogger logMessage:](
    +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
    "logMessage:",
    CFSTR("DeriveKey called"));
  v16 = +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance");
  v17 = CFSTR("not nil");
  if ( !a2 )
    v17 = CFSTR("nil");
  -[FMMFileLogger logMessage:](v16, "logMessage:", CFSTR("UserId %@"), v17);
  -[FMMFileLogger logMessage:](
    +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
    "logMessage:",
    CFSTR("inputLen %d salt %d iterStart %d iterEnd %d"),
    a4,
    a5,
    a6,
    a7);
  macOut = 0u;
  v29 = 0u;
  v26 = 0u;
  v27 = 0u;
  if ( (_DWORD)a6 == 1 )
  {
    if ( *a1 == 1 )
    {
      v18 = (unsigned int)a4;
      LODWORD(a6) = 2;
      v19 = a3;
    }
    else
    {
      v20 = (char *)malloc_type_malloc((unsigned int)(a4 + 24), 0x6B31A49EuLL);
      if ( !v20 )
      {
        -[FMMFileLogger logMessage:](
          +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
          "logMessage:",
          CFSTR("%s: Error mallocing HmacBuffer of size 0x%x\n"),
          "kern_return_t DeriveKey(TRB_VERSION *, USER_ID *, uint8_t *, uint32_t, uint64_t, uint32_t, uint32_t, uint8_t *)",
          (unsigned int)(a4 + 24));
        return 10LL;
      }
      v21 = v20;
      -[FMMFileLogger logMessage:](
        +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
        "logMessage:",
        CFSTR("Size of UserId %d"),
        16LL);
      *(_DWORD *)v21 = 16;
      *(_OWORD *)(v21 + 4) = *a2;
      *((_DWORD *)v21 + 5) = a4;
      memcpy(v21 + 24, a3, (unsigned int)a4);
      -[FMMFileLogger logMessage:](
        +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
        "logMessage:",
        CFSTR("About to hash it"));
      LODWORD(a6) = 2;
      v19 = v21;
      v18 = (unsigned int)(a4 + 24);
    }
    CCHmac(2u, v19, v18, &data, 8uLL, &macOut);
  }
  else
  {
    __memcpy_chk(&macOut, a3, (unsigned int)a4, 32LL);
  }
  if ( (unsigned int)a6 < (int)a7 + 1 )
  {
    v22 = a7 - a6 + 1;
    do
    {
      CCHmac(2u, &macOut, 0x20uLL, &data, 8uLL, &v26);
      macOut = v26;
      v29 = v27;
      --v22;
    }
    while ( v22 );
  }
  result = 0LL;
  v24 = v27;
  *a8 = v26;
  a8[1] = v24;
  return result;
}