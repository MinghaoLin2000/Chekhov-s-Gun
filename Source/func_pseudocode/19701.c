-[IPPSessionTransaction URLSession:task:didCompleteWithError:]
void __cdecl -[IPPSessionTransaction URLSession:task:didCompleteWithError:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NSString *v11; // x25
  NSString *v12; // x23
  os_log_s *v13; // x24
  NSURL *v14; // x0
  NSURL *url; // x8
  id initialPayloadSentCallback; // x0
  id v17; // x0
  id transactionCompletedCallback; // x0
  id v19; // x0
  uint8_t v20[16]; // [xsp+0h] [xbp-50h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  if ( self->_tlsRetry )
  {
    v11 = objc_retainAutoreleasedReturnValue(-[NSURL scheme](self->_url, "scheme"));
    v12 = objc_retainAutoreleasedReturnValue(-[NSString lowercaseString](v11, "lowercaseString"));
    objc_release(v11);
    if ( -[NSString isEqualToString:](v12, "isEqualToString:", CFSTR("ipp")) )
    {
      v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
      if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
      {
        *(_WORD *)v20 = 0;
        _os_log_impl((void *)&_mh_execute_header, v13, OS_LOG_TYPE_DEFAULT, "Retrying with TLS", v20, 2u);
      }
      objc_release(v13);
      v14 = (NSURL *)objc_retainAutoreleasedReturnValue((id)PKURLByReplacingScheme(CFSTR("ipps"), self->_url));
      url = self->_url;
      self->_url = v14;
      objc_release(url);
      -[IPPSessionTransaction start](self, "start");
      goto LABEL_11;
    }
    objc_release(v12);
  }
  objc_storeStrong((id *)&self->_transportError, a5);
  initialPayloadSentCallback = self->_initialPayloadSentCallback;
  if ( initialPayloadSentCallback )
  {
    v12 = (NSString *)objc_retainBlock(initialPayloadSentCallback);
    v17 = self->_initialPayloadSentCallback;
    self->_initialPayloadSentCallback = 0LL;
    objc_release(v17);
    ((void (__fastcall *)(NSString *))v12[2])(v12);
LABEL_11:
    objc_release(v12);
    goto LABEL_12;
  }
  transactionCompletedCallback = self->_transactionCompletedCallback;
  if ( transactionCompletedCallback )
  {
    v12 = (NSString *)objc_retainBlock(transactionCompletedCallback);
    v19 = self->_transactionCompletedCallback;
    self->_transactionCompletedCallback = 0LL;
    objc_release(v19);
    ((void (__fastcall *)(NSString *, id, NSHTTPURLResponse *, NSMutableData *))v12[2])(
      v12,
      v10,
      self->_httpResponse,
      self->_responseData);
    goto LABEL_11;
  }
LABEL_12:
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}