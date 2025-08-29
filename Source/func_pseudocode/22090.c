_VerifyTrbUser
__int64 __fastcall VerifyTrbUser(unsigned __int16 *a1, const char *a2, __int64 a3)
{
  void *v5; // x19
  FMMFileLogger *v6; // x0
  FMMFileLogger *v7; // x0
  __int64 v8; // x21
  void *v9; // x22
  __int64 v10; // x0
  _BOOL4 v15; // w8
  __int64 v16; // [xsp+0h] [xbp-70h]
  __int64 v17; // [xsp+8h] [xbp-68h]
  void *v18; // [xsp+18h] [xbp-58h] BYREF
  __int128 v19; // [xsp+20h] [xbp-50h] BYREF
  __int128 v20; // [xsp+30h] [xbp-40h]

  v19 = 0u;
  v20 = 0u;
  v18 = 0LL;
  v5 = ConvertToEfiCompatibleChar16(a2, &v18, a1);
  v6 = +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance");
  if ( !(_DWORD)v5 )
  {
    -[FMMFileLogger logMessage:](v6, "logMessage:", CFSTR("Error converting user supplied password to Char 16\n"));
    v8 = 4LL;
    v9 = v18;
    if ( !v18 )
      return v8;
    goto LABEL_9;
  }
  -[FMMFileLogger logMessage:](v6, "logMessage:", CFSTR("converted to efi compatible of len %d"), v5);
  -[FMMFileLogger logMessage:](
    +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance"),
    "logMessage:",
    CFSTR("About to call DeriveKey"));
  v7 = +[FMMFileLogger sharedInstance](&OBJC_CLASS___FMMFileLogger, "sharedInstance");
  if ( a1 )
    -[FMMFileLogger logMessage:](v7, "logMessage:", CFSTR("trbVersion major %ld minor %ld"), *a1, a1[1]);
  else
    -[FMMFileLogger logMessage:](v7, "logMessage:", CFSTR("trbVersion is NULL"), v16, v17);
  v9 = v18;
  v10 = DeriveKey(
          a1,
          &gAppleTamperResistantBootEfiUserGuid,
          v18,
          (__int64)v5,
          *(_QWORD *)(a3 + 48),
          1LL,
          *(unsigned int *)(a3 + 61),
          &v19);
  if ( (_DWORD)v10 )
  {
    v8 = v10;
    if ( v9 )
    {
LABEL_9:
      bzero(v9, (int)v5);
      free(v9);
    }
  }
  else
  {
    v15 = *(_QWORD *)(a3 + 16) != (_QWORD)v19
       || *(_QWORD *)(a3 + 24) != *((_QWORD *)&v19 + 1)
       || *(_QWORD *)(a3 + 32) != (_QWORD)v20
       || *(_QWORD *)(a3 + 40) != *((_QWORD *)&v20 + 1);
    v8 = (unsigned int)(4 * v15);
    if ( v9 )
      goto LABEL_9;
  }
  return v8;
}