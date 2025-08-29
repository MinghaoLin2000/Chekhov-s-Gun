-[device_http_t makeConnection]
id __cdecl -[device_http_t makeConnection](device_http_t *self, SEL a2)
{
  NSString *v3; // x0
  __CFString *v4; // x19
  NSURL *v5; // x20
  id v6; // x21
  os_log_s *v7; // x25
  _QWORD v9[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v10; // [xsp+28h] [xbp-B8h] BYREF
  _QWORD v11[4]; // [xsp+30h] [xbp-B0h] BYREF
  id v12; // [xsp+50h] [xbp-90h] BYREF
  id location; // [xsp+58h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+60h] [xbp-80h] BYREF
  device_http_t *v15; // [xsp+64h] [xbp-7Ch]
  __int16 v16; // [xsp+6Ch] [xbp-74h]
  id v17; // [xsp+6Eh] [xbp-72h]
  __int16 v18; // [xsp+76h] [xbp-6Ah]
  NSURL *v19; // [xsp+78h] [xbp-68h]
  __int64 vars8; // [xsp+E8h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[NSURL scheme](self->_printerURL, "scheme"));
  v4 = (__CFString *)v3;
  if ( self->_forceEncryption && -[NSString isEqualToString:](v3, "isEqualToString:", CFSTR("ipp")) )
  {
    objc_release(v4);
    v4 = CFSTR("ipps");
  }
  v5 = objc_retainAutoreleasedReturnValue(PKURLByReplacingScheme(v4, self->_printerURL));
  v6 = objc_retainAutoreleasedReturnValue(-[IPPSession httpWithURL:](self->_session, "httpWithURL:", v5));
  objc_initWeak(&location, self);
  v11[0] = _NSConcreteStackBlock;
  v11[1] = 3254779904LL;
  v11[2] = sub_100049770;
  v11[3] = &unk_10009F088;
  objc_copyWeak(&v12, &location);
  objc_msgSend(v6, "setPass_callback:", v11);
  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10004987C;
  v9[3] = &unk_10009F0B8;
  objc_copyWeak(&v10, &location);
  objc_msgSend(v6, "setTrust_callback:", v9);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 134218498;
    v15 = self;
    v16 = 2114;
    v17 = v6;
    v18 = 2114;
    v19 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_DEFAULT,
      "device_http<%p>: Created connection object: %{public}@ to %{public}@",
      buf,
      0x20u);
  }
  objc_release(v7);
  objc_destroyWeak(&v10);
  objc_destroyWeak(&v12);
  objc_destroyWeak(&location);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}