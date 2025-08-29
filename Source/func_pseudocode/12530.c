-[NSURL tsu_contentModificationDateWithLogContext:]
id __cdecl -[NSURL tsu_contentModificationDateWithLogContext:](NSURL *self, SEL a2, id a3)
{
  id v4; // x19
  unsigned __int8 v5; // w23
  id v6; // x22
  id v7; // x20
  void *v8; // x22
  os_log_s *v9; // x22
  void *v10; // x23
  void *v11; // x24
  objc_class *v12; // x0
  NSString *v13; // x25
  void *v14; // x26
  void *v15; // x0
  void *v16; // x22
  id v18; // [xsp+0h] [xbp-A0h] BYREF
  id v19; // [xsp+8h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-90h] BYREF
  void *v21; // [xsp+14h] [xbp-8Ch]
  __int16 v22; // [xsp+1Ch] [xbp-84h]
  void *v23; // [xsp+1Eh] [xbp-82h]
  __int16 v24; // [xsp+26h] [xbp-7Ah]
  NSURL *v25; // [xsp+28h] [xbp-78h]
  __int16 v26; // [xsp+30h] [xbp-70h]
  NSString *v27; // [xsp+32h] [xbp-6Eh]
  __int16 v28; // [xsp+3Ah] [xbp-66h]
  void *v29; // [xsp+3Ch] [xbp-64h]
  __int16 v30; // [xsp+44h] [xbp-5Ch]
  void *v31; // [xsp+46h] [xbp-5Ah]
  __int16 v32; // [xsp+4Eh] [xbp-52h]
  id v33; // [xsp+50h] [xbp-50h]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v4 = objc_retain(a3);
  -[NSURL removeCachedResourceValueForKey:](self, "removeCachedResourceValueForKey:", NSURLContentModificationDateKey);
  v18 = 0LL;
  v19 = 0LL;
  v5 = -[NSURL getPromisedItemResourceValue:forKey:error:](
         self,
         "getPromisedItemResourceValue:forKey:error:",
         &v19,
         NSURLContentModificationDateKey,
         &v18);
  v6 = objc_retain(v19);
  v7 = objc_retain(v18);
  if ( (v5 & 1) == 0 )
  {
    objc_release(v6);
    if ( v4 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC568);
      v8 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        v9 = objc_retain(v8);
        v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "publicString"));
        v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "privateString"));
        v12 = (objc_class *)objc_opt_class(v7);
        v13 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v12));
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "domain"));
        v15 = objc_msgSend(v7, "code");
        *(_DWORD *)buf = 138544898;
        v21 = v10;
        v22 = 2112;
        v23 = v11;
        v24 = 2112;
        v25 = self;
        v26 = 2114;
        v27 = v13;
        v28 = 2114;
        v29 = v14;
        v30 = 2048;
        v31 = v15;
        v32 = 2112;
        v33 = v7;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v9,
          OS_LOG_TYPE_ERROR,
          "%{public}@ %@ Failed to get file modification date for URL=%@ error=errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x48u);
        objc_release(v14);
        objc_release(v13);
        objc_release(v11);
        objc_release(v10);
        objc_release(v9);
      }
    }
    else
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DC588);
      v16 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016E128(self, v16, v7);
    }
    v6 = 0LL;
  }
  objc_release(v7);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}