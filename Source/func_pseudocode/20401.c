-[device_http_t finishStreamedIPPRequest]
id __cdecl -[device_http_t finishStreamedIPPRequest](device_http_t *self, SEL a2)
{
  platform_http_t *streamedPrinterEndpoint; // x0
  http_ipp_response_t *v4; // x20
  platform_http_t *v5; // x0
  os_log_s *v6; // x21
  os_log_s *v7; // x20
  int v9; // [xsp+0h] [xbp-40h] BYREF
  device_http_t *v10; // [xsp+4h] [xbp-3Ch]
  __int16 v11; // [xsp+Ch] [xbp-34h]
  http_ipp_response_t *v12; // [xsp+Eh] [xbp-32h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  streamedPrinterEndpoint = self->_streamedPrinterEndpoint;
  if ( streamedPrinterEndpoint )
  {
    v4 = (http_ipp_response_t *)objc_retainAutoreleasedReturnValue(
                                  -[platform_http_t finishStreamedIPPRequest](
                                    streamedPrinterEndpoint,
                                    "finishStreamedIPPRequest"));
    v5 = self->_streamedPrinterEndpoint;
    self->_streamedPrinterEndpoint = 0LL;
    objc_release(v5);
    v6 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
    {
      v9 = 134218242;
      v10 = self;
      v11 = 2114;
      v12 = v4;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v6,
        OS_LOG_TYPE_DEFAULT,
        "device_http<%p>: completed stream request - %{public}@",
        (uint8_t *)&v9,
        0x16u);
    }
    objc_release(v6);
    -[device_http_t storeCredentialBasedOnTransactionResult:](self, "storeCredentialBasedOnTransactionResult:", v4);
  }
  else
  {
    v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v7, OS_LOG_TYPE_ERROR) )
    {
      v9 = 134217984;
      v10 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v7,
        OS_LOG_TYPE_ERROR,
        "device_http<%p>: completed stream request - error ocurred",
        (uint8_t *)&v9,
        0xCu);
    }
    objc_release(v7);
    v4 = -[http_ipp_response_t initWithTransportStatus:](
           objc_alloc(&OBJC_CLASS___http_ipp_response_t),
           "initWithTransportStatus:",
           1LL);
    -[device_http_t storeCredentialBasedOnTransactionResult:](self, "storeCredentialBasedOnTransactionResult:", v4);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}