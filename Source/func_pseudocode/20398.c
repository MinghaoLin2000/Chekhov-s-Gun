-[device_http_t sendSingleIPPRequest:completionHandler:]
void __cdecl -[device_http_t sendSingleIPPRequest:completionHandler:](
        device_http_t *self,
        SEL a2,
        const Real_IPP_Message *a3,
        id a4)
{
  id v6; // x20
  id v7; // x19
  id v8; // x21
  os_log_s *v9; // x23
  id v10; // x22
  _QWORD v11[5]; // [xsp+8h] [xbp-98h] BYREF
  id v12; // [xsp+30h] [xbp-70h]
  uint8_t v13[24]; // [xsp+38h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+50h] [xbp-50h] BYREF
  device_http_t *v15; // [xsp+54h] [xbp-4Ch]
  __int16 v16; // [xsp+5Ch] [xbp-44h]
  id v17; // [xsp+5Eh] [xbp-42h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[device_http_t makeConnection](self, "makeConnection"));
  sub_10004B5B0(v13, a3);
  -[device_http_t _updateInitialMessageIfDefaultCredential:](self, "_updateInitialMessageIfDefaultCredential:", v13);
  v8 = objc_retainAutoreleasedReturnValue((id)sub_10004A71C(v13));
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 134218242;
    v15 = self;
    v16 = 2114;
    v17 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "device_http<%p>: Sending message async: %{public}@",
      buf,
      0x16u);
  }
  objc_release(v9);
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_10004A9F0;
  v11[3] = &unk_100091980;
  v11[4] = self;
  v10 = objc_retain(v6);
  v12 = v10;
  objc_msgSend(v7, "sendSingleIPPRequest:completionHandler:", v13, v11);
  objc_release(v12);
  objc_release(v8);
  sub_10000DA08(v13);
  objc_release(v7);
  objc_release(v10);
}