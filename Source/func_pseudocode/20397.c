-[device_http_t sendSingleIPPRequest:]
id __cdecl -[device_http_t sendSingleIPPRequest:](device_http_t *self, SEL a2, const Real_IPP_Message *a3)
{
  id v5; // x19
  id v6; // x20
  os_log_s *v7; // x22
  void *v8; // x22
  void *v9; // x23
  os_log_s *v10; // x24
  uint8_t v12[24]; // [xsp+8h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-50h] BYREF
  device_http_t *v14; // [xsp+24h] [xbp-4Ch]
  __int16 v15; // [xsp+2Ch] [xbp-44h]
  id v16; // [xsp+2Eh] [xbp-42h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v5 = objc_retainAutoreleasedReturnValue(-[device_http_t makeConnection](self, "makeConnection"));
  sub_10004B5B0(v12, a3);
  -[device_http_t _updateInitialMessageIfDefaultCredential:](self, "_updateInitialMessageIfDefaultCredential:", v12);
  v6 = objc_retainAutoreleasedReturnValue((id)sub_10004A71C(v12));
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 134218242;
    v14 = self;
    v15 = 2114;
    v16 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_DEFAULT,
      "device_http<%p>: Sending message sync: %{public}@",
      buf,
      0x16u);
  }
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sendSingleIPPRequest:", v12));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "description"));
  v10 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v10, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 134218242;
    v14 = self;
    v15 = 2114;
    v16 = v9;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v10,
      OS_LOG_TYPE_DEFAULT,
      "device_http<%p>: Received response sync: %{public}@",
      buf,
      0x16u);
  }
  objc_release(v10);
  -[device_http_t storeCredentialBasedOnTransactionResult:](self, "storeCredentialBasedOnTransactionResult:", v8);
  objc_release(v9);
  objc_release(v6);
  sub_10000DA08(v12);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}