+[PKPrinterBonjourEndpoint resolveWithBonjourEndpoint:timeout:completionHandler:]
void __cdecl +[PKPrinterBonjourEndpoint resolveWithBonjourEndpoint:timeout:completionHandler:](
        id a1,
        SEL a2,
        id a3,
        double a4,
        id a5)
{
  id v8; // x19
  id v9; // x20
  dispatch_queue_attr_s *v10; // x23
  dispatch_queue_s *v11; // x22
  dispatch_time_t v12; // x23
  id v13; // x24
  __int64 v14; // x23
  dispatch_queue_s *v15; // x22
  os_log_s *v16; // x21
  _QWORD v17[4]; // [xsp+8h] [xbp-118h] BYREF
  id v18; // [xsp+28h] [xbp-F8h]
  id v19; // [xsp+30h] [xbp-F0h]
  __int64 *v20; // [xsp+38h] [xbp-E8h]
  id v21; // [xsp+40h] [xbp-E0h]
  double v22; // [xsp+48h] [xbp-D8h]
  _QWORD block[4]; // [xsp+50h] [xbp-D0h] BYREF
  id v24; // [xsp+70h] [xbp-B0h]
  __int64 *v25; // [xsp+78h] [xbp-A8h]
  __int64 v26; // [xsp+80h] [xbp-A0h] BYREF
  __int64 *v27; // [xsp+88h] [xbp-98h]
  __int64 v28; // [xsp+90h] [xbp-90h]
  __int64 (__fastcall *v29)(); // [xsp+98h] [xbp-88h]
  __int64 (__fastcall *v30)(); // [xsp+A0h] [xbp-80h]
  id v31; // [xsp+A8h] [xbp-78h]
  uint8_t buf[4]; // [xsp+B0h] [xbp-70h] BYREF
  id v33; // [xsp+B4h] [xbp-6Ch]

  v8 = objc_retain(a3);
  v9 = objc_retain(a5);
  v26 = 0LL;
  v27 = &v26;
  v28 = 0x3032000000LL;
  v29 = sub_10006064C;
  v30 = sub_10006065C;
  v31 = (id)nw_resolver_create_with_endpoint(v8, 0LL);
  if ( v27[5] )
  {
    v10 = objc_retainAutoreleasedReturnValue(dispatch_queue_attr_make_with_autorelease_frequency(0LL, DISPATCH_AUTORELEASE_FREQUENCY_WORK_ITEM));
    v11 = dispatch_queue_create("com.apple.printing.BrowseInfo", v10);
    objc_release(v10);
    v12 = dispatch_time(0LL, (__int64)(a4 * 1000000000.0));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100060ED4;
    block[3] = &unk_10009FAF8;
    v25 = &v26;
    v13 = objc_retain(v9);
    v24 = v13;
    dispatch_after(v12, v11, block);
    v14 = v27[5];
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_100060F4C;
    v17[3] = &unk_10009FB28;
    v18 = v11;
    v20 = &v26;
    v19 = objc_retain(v13);
    v21 = a1;
    v22 = a4;
    v15 = objc_retain(v11);
    nw_resolver_set_update_handler(v14, v15, v17);
    objc_release(v19);
    objc_release(v18);
    objc_release(v24);
    objc_release(v15);
  }
  else
  {
    v16 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryDiscovery[0]));
    if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138477827;
      v33 = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v16,
        OS_LOG_TYPE_ERROR,
        "Couldn't create resolver for %{private}@",
        buf,
        0xCu);
    }
    objc_release(v16);
    (*((void (__fastcall **)(id, _QWORD, _QWORD))v9 + 2))(v9, 0LL, 0LL);
  }
  _Block_object_dispose(&v26, 8);
  objc_release(v31);
  objc_release(v9);
  objc_release(v8);
}