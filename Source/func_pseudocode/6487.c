-[VideoConversionService modifyJobWithIdentifier:modifications:]
void __cdecl -[VideoConversionService modifyJobWithIdentifier:modifications:](
        VideoConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x19
  id v8; // x22
  MediaConversionQueue *requestQueue; // x23
  id v10; // x20
  id v11; // x19
  _QWORD v12[4]; // [xsp+0h] [xbp-90h] BYREF
  id v13; // [xsp+20h] [xbp-70h]
  id v14; // [xsp+28h] [xbp-68h]
  VideoConversionService *v15; // [xsp+30h] [xbp-60h]
  SEL v16; // [xsp+38h] [xbp-58h]
  uint8_t buf[4]; // [xsp+40h] [xbp-50h] BYREF
  id v18; // [xsp+44h] [xbp-4Ch]
  __int16 v19; // [xsp+4Ch] [xbp-44h]
  id v20; // [xsp+4Eh] [xbp-42h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 138543618;
    v18 = v7;
    v19 = 2114;
    v20 = v8;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Modify job for request %{public}@: %{public}@",
      buf,
      0x16u);
  }
  requestQueue = self->_requestQueue;
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100021888;
  v12[3] = &unk_1000417D0;
  v13 = v7;
  v14 = v8;
  v15 = self;
  v16 = a2;
  v10 = objc_retain(v8);
  v11 = objc_retain(v7);
  -[MediaConversionQueue modifyRequestWithIdentifier:changeHandler:](
    requestQueue,
    "modifyRequestWithIdentifier:changeHandler:",
    v11,
    v12);
  objc_release(v14);
  objc_release(v13);
  objc_release(v10);
  objc_release(v11);
}