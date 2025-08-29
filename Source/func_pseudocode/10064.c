-[NSData tsp_splitDataWithMaxSize:subdataHandlerBlock:]
void __cdecl -[NSData tsp_splitDataWithMaxSize:subdataHandlerBlock:](NSData *self, SEL a2, unsigned __int64 a3, id a4)
{
  void (__fastcall **v6)(id, NSData *, __int64, char *); // x19
  NSUInteger v7; // x22
  __int128 v8; // q0
  __int64 v9; // x23
  __int64 v10; // x24
  void *v11; // x28
  unsigned __int64 v12; // x27
  NSData *v13; // x26
  char v14; // w27
  os_log_s *v15; // x27
  os_log_s *v16; // x20
  __int128 v17; // [xsp+0h] [xbp-90h]
  char v18; // [xsp+1Fh] [xbp-71h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  NSUInteger v20; // [xsp+24h] [xbp-6Ch]

  v6 = (void (__fastcall **)(id, NSData *, __int64, char *))objc_retain(a4);
  if ( a3 )
  {
    v18 = 0;
    v7 = -[NSData length](self, "length");
    if ( v7 > a3 )
    {
      v9 = 0LL;
      v10 = 0LL;
      *(_QWORD *)&v8 = 134217984LL;
      v17 = v8;
      while ( 1 )
      {
        if ( !v7 )
          goto LABEL_23;
        v11 = objc_autoreleasePoolPush();
        v12 = v7 >= a3 ? a3 : v7;
        v13 = objc_retainAutoreleasedReturnValue(-[NSData subdataWithRange:](self, "subdataWithRange:", v9, v12, v17));
        if ( !v13 )
          break;
        v6[2](v6, v13, v10++, &v18);
        if ( v18 )
          goto LABEL_15;
        v9 += v12;
        v7 -= v12;
        v14 = 1;
LABEL_16:
        objc_release(v13);
        objc_autoreleasePoolPop(v11);
        if ( (v14 & 1) == 0 )
          goto LABEL_23;
      }
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001D5518);
      v15 = (os_log_s *)TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = v17;
        v20 = v7;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          v15,
          OS_LOG_TYPE_ERROR,
          "Could not create split data with remaining size %zu",
          buf,
          0xCu);
      }
LABEL_15:
      v14 = 0;
      goto LABEL_16;
    }
    v6[2](v6, self, 0LL, &v18);
  }
  else
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D54F8);
    v16 = (os_log_s *)TSUDefaultCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016D8A4(v16);
  }
LABEL_23:
  objc_release(v6);
}