-[device_http_t passwordChallenge:request:completionHandler:]
void __cdecl -[device_http_t passwordChallenge:request:completionHandler:](
        device_http_t *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  id v11; // x23
  os_log_s *v12; // x23
  void (__fastcall **v13)(id, device_http_t *, id, id, _QWORD *); // x23
  _QWORD v14[5]; // [xsp+8h] [xbp-88h] BYREF
  id v15; // [xsp+30h] [xbp-60h]
  id v16; // [xsp+38h] [xbp-58h]
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  device_http_t *v18; // [xsp+44h] [xbp-4Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(-[device_http_t performAuthenticationForDeviceHTTP](self, "performAuthenticationForDeviceHTTP"));
  objc_release(v11);
  if ( v11 )
  {
    v12 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
    if ( os_log_type_enabled(v12, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 134217984;
      v18 = self;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEFAULT,
        "device_http<%p>: Invoking external auth handler",
        buf,
        0xCu);
    }
    objc_release(v12);
    v13 = (void (__fastcall **)(id, device_http_t *, id, id, _QWORD *))objc_retainAutoreleasedReturnValue(
                                                                         -[device_http_t performAuthenticationForDeviceHTTP](
                                                                           self,
                                                                           "performAuthenticationForDeviceHTTP"));
    v14[0] = _NSConcreteStackBlock;
    v14[1] = 3254779904LL;
    v14[2] = sub_100049C54;
    v14[3] = &unk_10009F0E8;
    v14[4] = self;
    v15 = objc_retain(v8);
    v16 = objc_retain(v10);
    v13[2](v13, self, v9, v15, v14);
    objc_release(v13);
    objc_release(v16);
    objc_release(v15);
  }
  else
  {
    -[device_http_t passwordChallengeContinue:completionHandler:](
      self,
      "passwordChallengeContinue:completionHandler:",
      v8,
      v10);
  }
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
}