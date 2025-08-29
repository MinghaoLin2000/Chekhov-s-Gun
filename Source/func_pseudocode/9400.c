-[TSPCGDataConsumer _close]
void __cdecl -[TSPCGDataConsumer _close](TSPCGDataConsumer *self, SEL a2)
{
  void *v3; // x19
  objc_class *v4; // x0
  NSString *v5; // x21
  NSString *v6; // x22
  NSInteger v7; // x0
  NSError *error; // x8
  int v9; // [xsp+0h] [xbp-60h] BYREF
  NSString *v10; // [xsp+4h] [xbp-5Ch]
  __int16 v11; // [xsp+Ch] [xbp-54h]
  NSString *v12; // [xsp+Eh] [xbp-52h]
  __int16 v13; // [xsp+16h] [xbp-4Ah]
  NSInteger v14; // [xsp+18h] [xbp-48h]
  __int16 v15; // [xsp+20h] [xbp-40h]
  NSError *v16; // [xsp+22h] [xbp-3Eh]

  -[TSUStreamWriteChannel close](self->_writeChannel, "close");
  if ( self->_error )
  {
    if ( TSUDefaultCat_init_token != -1 )
      dispatch_once(&TSUDefaultCat_init_token, &stru_1001D2E80);
    v3 = objc_retain(TSUDefaultCat_log_t);
    if ( os_log_type_enabled((os_log_t)v3, OS_LOG_TYPE_ERROR) )
    {
      v4 = (objc_class *)objc_opt_class(self->_error);
      v5 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v4)));
      v6 = objc_retainAutoreleasedReturnValue(-[NSError domain](self->_error, "domain"));
      v7 = -[NSError code](self->_error, "code");
      error = self->_error;
      v9 = 138544130;
      v10 = v5;
      v11 = 2114;
      v12 = v6;
      v13 = 2048;
      v14 = v7;
      v15 = 2112;
      v16 = error;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v3,
        OS_LOG_TYPE_ERROR,
        "Failed to write bytes. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        (uint8_t *)&v9,
        0x2Au);
      objc_release(v5);
      objc_release(v6);
      objc_release(v5);
    }
    objc_release(v3);
  }
}