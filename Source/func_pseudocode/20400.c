-[device_http_t writeIPPDocumentPayload:length:]
signed __int64 __cdecl -[device_http_t writeIPPDocumentPayload:length:](
        device_http_t *self,
        SEL a2,
        const char *a3,
        unsigned __int64 a4)
{
  platform_http_t *streamedPrinterEndpoint; // x0
  os_log_s *v6; // x20
  const char *v7; // x3
  unsigned __int64 v8; // x20
  os_log_s *v10; // x21
  int v11; // [xsp+0h] [xbp-40h] BYREF
  device_http_t *v12; // [xsp+4h] [xbp-3Ch]
  __int16 v13; // [xsp+Ch] [xbp-34h]
  unsigned __int64 v14; // [xsp+Eh] [xbp-32h]

  streamedPrinterEndpoint = self->_streamedPrinterEndpoint;
  if ( !streamedPrinterEndpoint )
  {
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
    {
      v11 = 134217984;
      v12 = self;
      v7 = "device_http<%p>: endpoint is nil, can't write";
      goto LABEL_7;
    }
LABEL_8:
    objc_release(v6);
    return -1LL;
  }
  if ( self->_streamedPrinterEndpointConnectionLostForWriting )
  {
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_ERROR) )
    {
      v11 = 134217984;
      v12 = self;
      v7 = "device_http<%p>: already saw write error, can't write";
LABEL_7:
      _os_log_impl((void *)&_mh_execute_header, v6, OS_LOG_TYPE_ERROR, v7, (uint8_t *)&v11, 0xCu);
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  v8 = a4;
  if ( -[platform_http_t writeIPPDocumentPayload:length:](
         streamedPrinterEndpoint,
         "writeIPPDocumentPayload:length:",
         a3) == a4 )
    return v8;
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_ERROR) )
  {
    v11 = 134218240;
    v12 = self;
    v13 = 2048;
    v14 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_ERROR,
      "device_http<%p>: unable to write %ld bytes",
      (uint8_t *)&v11,
      0x16u);
  }
  objc_release(v10);
  self->_streamedPrinterEndpointConnectionLostForWriting = 1;
  return -1LL;
}