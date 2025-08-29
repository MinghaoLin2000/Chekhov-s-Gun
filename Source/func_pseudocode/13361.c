-[TSUZipWriter handleWriteError:]
void __cdecl -[TSUZipWriter handleWriteError:](TSUZipWriter *self, SEL a2, id a3)
{
  id v5; // x0
  void *v6; // x19
  void *v7; // x22
  unsigned __int8 v8; // w23
  void *v9; // x22
  dispatch_queue_s *channelQueue; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-58h] BYREF

  v5 = objc_retain(a3);
  v6 = v5;
  if ( v5 )
  {
    if ( objc_msgSend(v5, "code") != (void *)3072
      || (v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "domain")),
          v8 = (unsigned __int8)objc_msgSend(v7, "isEqualToString:", NSCocoaErrorDomain),
          objc_release(v7),
          (v8 & 1) == 0) )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DEEE8);
      v9 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_100173B9C(v9, v6);
    }
    if ( !self->_error )
    {
      objc_storeStrong((id *)&self->_error, a3);
      channelQueue = (dispatch_queue_s *)self->_channelQueue;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_10015632C;
      block[3] = &unk_1001D1A40;
      block[4] = self;
      dispatch_async(channelQueue, block);
    }
  }
  objc_release(v6);
}