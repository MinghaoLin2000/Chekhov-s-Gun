-[device_http_t startStreamedIPPRequest:compression:]
id __cdecl -[device_http_t startStreamedIPPRequest:compression:](
        device_http_t *self,
        SEL a2,
        const Real_IPP_Message *a3,
        id a4)
{
  id v6; // x19
  id v7; // x0
  void *v8; // x20
  os_log_s *v9; // x22
  id v10; // x23
  void *v11; // x22
  os_log_s *v12; // x23
  platform_http_t *v13; // x0
  platform_http_t *streamedPrinterEndpoint; // x23
  void *v15; // x24
  uint8_t v17[24]; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  device_http_t *v19; // [xsp+24h] [xbp-4Ch]
  __int16 v20; // [xsp+2Ch] [xbp-44h]
  id v21; // [xsp+2Eh] [xbp-42h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v6 = objc_retain(a4);
  if ( self->_streamedPrinterEndpoint )
    __assert_rtn(
      "-[device_http_t startStreamedIPPRequest:compression:]",
      "device_http.mm",
      499,
      "_streamedPrinterEndpoint == nil");
  v7 = objc_retainAutoreleasedReturnValue(-[device_http_t makeConnection](self, "makeConnection"));
  v8 = v7;
  if ( v6 )
    objc_msgSend(v7, "setDocumentCompression:", v6);
  sub_10004B5B0(v17, a3);
  -[device_http_t _updateInitialMessageIfDefaultCredential:](self, "_updateInitialMessageIfDefaultCredential:", v17);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = objc_retainAutoreleasedReturnValue((id)sub_10004A71C(v17));
    *(_DWORD *)buf = 134218242;
    v19 = self;
    v20 = 2114;
    v21 = v10;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "device_http<%p>: Starting streamed request for %{public}@",
      buf,
      0x16u);
    objc_release(v10);
  }
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "startStreamedIPPRequest:", v17));
  if ( (unsigned int)objc_msgSend(v11, "transportStatus") == 2 )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 134217984;
      v19 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEFAULT,
        "device_http<%p>: Continuing streaming request",
        buf,
        0xCu);
    }
    objc_release(v12);
    v13 = objc_retain(v8);
    streamedPrinterEndpoint = self->_streamedPrinterEndpoint;
    self->_streamedPrinterEndpoint = v13;
  }
  else
  {
    streamedPrinterEndpoint = (platform_http_t *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled((os_log_t)streamedPrinterEndpoint, OS_LOG_TYPE_ERROR) )
    {
      v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "description"));
      *(_DWORD *)buf = 134218242;
      v19 = self;
      v20 = 2114;
      v21 = v15;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)streamedPrinterEndpoint,
        OS_LOG_TYPE_ERROR,
        "device_http<%p>: Couldn't start streaming request, %{public}@",
        buf,
        0x16u);
      objc_release(v15);
    }
  }
  objc_release(streamedPrinterEndpoint);
  -[device_http_t storeCredentialBasedOnTransactionResult:](self, "storeCredentialBasedOnTransactionResult:", v11);
  sub_10000DA08(v17);
  objc_release(v8);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v11);
}