_TSUSetCrashReporterInfov
void __fastcall TSUSetCrashReporterInfov(__int64 a1, char *a2)
{
  void *v2; // x19
  const char *v3; // x0
  const char *v4; // x8
  char *v5[3]; // [xsp+8h] [xbp-28h] BYREF

  v5[1] = a2;
  v5[2] = a2;
  v2 = objc_msgSend(
         objc_alloc((Class)&OBJC_CLASS___NSString),
         "tsu_initRedactedWithFormat:arguments:",
         +[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", a1),
         a2);
  v3 = (const char *)objc_msgSend(v2, "UTF8String");
  v5[0] = 0LL;
  if ( v3 )
    asprintf(v5, "%s", v3);
  objc_release(v2);
  v4 = v5[0];
  if ( !v5[0] )
    v4 = "TSUSetCrashReporterInfo: unknown reason";
  __crashreporter_info__ = (__int64)v4;
}