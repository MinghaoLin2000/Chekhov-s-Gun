+[MXMSysmonRequest requestWithType:handler:]
id __cdecl +[MXMSysmonRequest requestWithType:handler:](id a1, SEL a2, unsigned __int64 a3, id a4)
{
  id v6; // x20
  id v7; // x19
  NSError *v8; // x23
  NSDictionary *v9; // x24
  id v10; // x22
  NSError *v11; // x23
  void *v12; // x21
  id v13; // x0
  _QWORD v15[4]; // [xsp+8h] [xbp-A8h] BYREF
  id v16; // [xsp+28h] [xbp-88h]
  id v17; // [xsp+30h] [xbp-80h]
  id v18; // [xsp+38h] [xbp-78h]
  id v19; // [xsp+40h] [xbp-70h] BYREF
  int v20; // [xsp+48h] [xbp-68h]
  id location; // [xsp+50h] [xbp-60h] BYREF
  size_t v22; // [xsp+58h] [xbp-58h] BYREF
  int v23; // [xsp+64h] [xbp-4Ch] BYREF
  NSErrorUserInfoKey v24; // [xsp+68h] [xbp-48h] BYREF
  const __CFString *v25; // [xsp+70h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+B8h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_alloc_init((Class)a1);
  if ( v7 )
  {
    v23 = 0;
    v22 = 4LL;
    if ( sysctlbyname("hw.logicalcpu", &v23, &v22, 0LL, 0LL) < 0 )
    {
      v24 = NSLocalizedDescriptionKey;
      v25 = CFSTR("Error while deterimining number of logical CPU cores.");
      v9 = objc_retainAutoreleasedReturnValue(
             +[NSDictionary dictionaryWithObjects:forKeys:count:](
               &OBJC_CLASS___NSDictionary,
               "dictionaryWithObjects:forKeys:count:",
               &v25,
               &v24,
               1LL));
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSError errorWithDomain:code:userInfo:](
               &OBJC_CLASS___NSError,
               "errorWithDomain:code:userInfo:",
               CFSTR("InstrumentErrorDomain"),
               0LL,
               v9));
      objc_release(v9);
    }
    else
    {
      v8 = 0LL;
    }
    objc_initWeak(&location, v7);
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_100006734;
    v15[3] = &unk_10000C4D8;
    v10 = objc_retain(v7);
    v16 = v10;
    v20 = v23;
    v18 = objc_retain(v6);
    objc_copyWeak(&v19, &location);
    v11 = objc_retain(v8);
    v17 = v11;
    v12 = (void *)sysmon_request_create(a3, v15);
    objc_msgSend(v10, "setRequest:", v12);
    objc_release(v12);
    objc_msgSend(v10, "setInterval:", 0.0);
    objc_release(v17);
    objc_destroyWeak(&v19);
    objc_release(v18);
    objc_release(v16);
    objc_destroyWeak(&location);
    v13 = objc_retain(v10);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}