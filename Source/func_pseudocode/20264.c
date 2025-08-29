-[ipp_t initWithData:]
ipp_t *__cdecl -[ipp_t initWithData:](ipp_t *self, SEL a2, id a3)
{
  id v4; // x19
  ipp_t *v5; // x20
  id v6; // x21
  void *v7; // x22
  int v8; // w0
  int v9; // w23
  void *v11; // x0
  NSData *v12; // x8
  void *dataRemaining; // x0
  os_log_s *v14; // x21
  uint8_t v16[16]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v17; // [xsp+10h] [xbp-40h] BYREF
  id v18; // [xsp+18h] [xbp-38h]

  v4 = objc_retain(a3);
  v5 = -[ipp_t init](self, "init");
  if ( v5 )
  {
    v17 = 0LL;
    v6 = objc_retain(v4);
    v18 = v6;
    -[ipp_t setState:](v5, "setState:", 0LL);
    v7 = objc_autoreleasePoolPush();
    do
    {
      v8 = ippReadIO(&v17, (__int64 (__fastcall *)(void *, unsigned __int8 *, unsigned __int64))sub_10003CA14, v5);
      v9 = v8;
    }
    while ( v8 != -1 && v8 != 3 );
    objc_autoreleasePoolPop(v7);
    if ( v9 == 3 )
    {
      v11 = objc_msgSend(v6, "length");
      if ( (__int64)v11 - v17 < 1 )
      {
LABEL_15:
        objc_release(v18);
        goto LABEL_16;
      }
      v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "subdataWithRange:"));
      dataRemaining = v5->_dataRemaining;
      v5->_dataRemaining = v12;
    }
    else
    {
      v14 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
      {
        *(_WORD *)v16 = 0;
        _os_log_impl((void *)&_mh_execute_header, v14, OS_LOG_TYPE_DEFAULT, "Couldn't convert data to ipp", v16, 2u);
      }
      objc_release(v14);
      dataRemaining = v5;
      v5 = 0LL;
    }
    objc_release(dataRemaining);
    goto LABEL_15;
  }
LABEL_16:
  objc_release(v4);
  return v5;
}