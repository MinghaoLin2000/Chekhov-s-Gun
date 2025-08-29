-[IPPSessionTransaction start]
void __cdecl -[IPPSessionTransaction start](IPPSessionTransaction *self, SEL a2)
{
  NSURL *v3; // x21
  NSString *v4; // x19
  NSString *v5; // x22
  const __CFString *v6; // x0
  id v7; // x19
  NSError *transportError; // x0
  id v9; // x21
  NSURLSession *v10; // x22
  NSURLSessionConfiguration *v11; // x23
  void *v12; // x21
  id v13; // x22
  id v14; // x23
  void (__fastcall **v15)(id, id); // x23
  void *v16; // x23
  void *v17; // x24
  NSURLSession *v18; // x25
  NSURLSessionUploadTask *v19; // x26
  id WeakRetained; // x25
  id v21; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = objc_retain(self->_url);
  v4 = objc_retainAutoreleasedReturnValue(-[NSURL scheme](v3, "scheme"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSString lowercaseString](v4, "lowercaseString"));
  objc_release(v4);
  if ( -[NSString isEqualToString:](v5, "isEqualToString:", CFSTR("https"))
    || -[NSString isEqualToString:](v5, "isEqualToString:", CFSTR("ipps")) )
  {
    v6 = CFSTR("https");
  }
  else
  {
    v6 = CFSTR("http");
  }
  v7 = objc_retainAutoreleasedReturnValue((id)PKURLByReplacingScheme(v6, v3));
  objc_release(v5);
  objc_release(v3);
  transportError = self->_transportError;
  self->_transportError = 0LL;
  objc_release(transportError);
  v9 = objc_alloc((Class)&OBJC_CLASS___NSMutableURLRequest);
  v10 = objc_retainAutoreleasedReturnValue(-[IPPSession URLSession](self->_session, "URLSession"));
  v11 = objc_retainAutoreleasedReturnValue(-[NSURLSession configuration](v10, "configuration"));
  -[NSURLSessionConfiguration timeoutIntervalForRequest](v11, "timeoutIntervalForRequest");
  v12 = objc_msgSend(v9, "initWithURL:cachePolicy:timeoutInterval:", v7, 1LL);
  objc_release(v11);
  objc_release(v10);
  v13 = objc_retainAutoreleasedReturnValue((id)sub_100008454(v12));
  if ( v13 )
  {
    v14 = objc_retainAutoreleasedReturnValue(-[IPPSessionTransaction boundInterfaceSet_callback](self, "boundInterfaceSet_callback"));
    objc_release(v14);
    if ( v14 )
    {
      v15 = (void (__fastcall **)(id, id))objc_retainAutoreleasedReturnValue(
                                            -[IPPSessionTransaction boundInterfaceSet_callback](
                                              self,
                                              "boundInterfaceSet_callback"));
      v15[2](v15, v13);
      objc_release(v15);
    }
  }
  objc_msgSend(v12, "setHTTPMethod:", CFSTR("POST"));
  objc_msgSend(v12, "setValue:forHTTPHeaderField:", CFSTR("application/ipp"), CFSTR("Content-Type"));
  objc_msgSend(v12, "setValue:forHTTPHeaderField:", CFSTR("deflate, gzip, identity"), CFSTR("Accept-Encoding"));
  v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "host"));
  if ( (unsigned int)objc_msgSend(v16, "hasSuffix:", CFSTR(".")) )
  {
    v17 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v16,
              "stringByReplacingCharactersInRange:withString:",
              (char *)objc_msgSend(v16, "length") - 1,
              1LL,
              &stru_1000A0688));
    objc_msgSend(v12, "setValue:forHTTPHeaderField:", v17, CFSTR("Host"));
    objc_release(v17);
  }
  self->_canResendInitialRequest = self->_initialPayloadSentCallback == 0LL;
  objc_msgSend(v12, "setValue:forHTTPHeaderField:", CFSTR("chunked"), CFSTR("Transfer-Encoding"));
  v18 = objc_retainAutoreleasedReturnValue(-[IPPSession URLSession](self->_session, "URLSession"));
  v19 = objc_retainAutoreleasedReturnValue(-[NSURLSession uploadTaskWithStreamedRequest:](v18, "uploadTaskWithStreamedRequest:", v12));
  objc_storeWeak((id *)&self->_task, v19);
  objc_release(v19);
  objc_release(v18);
  WeakRetained = objc_loadWeakRetained((id *)&self->_task);
  objc_msgSend(WeakRetained, "setDelegate:", self);
  objc_release(WeakRetained);
  v21 = objc_loadWeakRetained((id *)&self->_task);
  objc_msgSend(v21, "resume");
  objc_release(v21);
  objc_release(v16);
  objc_release(v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}