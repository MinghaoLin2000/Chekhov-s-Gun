-[IPPSessionTransaction URLSession:task:didReceiveChallenge:completionHandler:]
void __cdecl -[IPPSessionTransaction URLSession:task:didReceiveChallenge:completionHandler:](
        IPPSessionTransaction *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v9; // x19
  id v10; // x20
  void (__fastcall **v11)(id, __int64, _QWORD); // x21
  void *v12; // x24
  void *v13; // x22
  os_log_s *v14; // x24
  _QWORD *v15; // x24
  void *v16; // x26
  void *v17; // x25
  _QWORD *v18; // x26
  PKSecTrustWrapper *v19; // x25
  _QWORD *v20; // x24
  id pass_callback; // x0
  dispatch_queue_global_s *v22; // x23
  _QWORD block[4]; // [xsp+8h] [xbp-118h] BYREF
  id v24; // [xsp+28h] [xbp-F8h]
  void (__fastcall **v25)(id, __int64, _QWORD); // [xsp+30h] [xbp-F0h]
  id v26; // [xsp+38h] [xbp-E8h] BYREF
  _QWORD v27[4]; // [xsp+40h] [xbp-E0h] BYREF
  id v28; // [xsp+60h] [xbp-C0h]
  id v29; // [xsp+68h] [xbp-B8h]
  id v30; // [xsp+70h] [xbp-B0h]
  _QWORD v31[4]; // [xsp+78h] [xbp-A8h] BYREF
  PKSecTrustWrapper *v32; // [xsp+98h] [xbp-88h]
  id v33; // [xsp+A0h] [xbp-80h]
  id v34; // [xsp+A8h] [xbp-78h]
  uint8_t buf[4]; // [xsp+B0h] [xbp-70h] BYREF
  id v36; // [xsp+B4h] [xbp-6Ch]
  __int16 v37; // [xsp+BCh] [xbp-64h]
  void *v38; // [xsp+BEh] [xbp-62h]

  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = (void (__fastcall **)(id, __int64, _QWORD))objc_retain(a6);
  v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "protectionSpace"));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "authenticationMethod"));
  objc_release(v12);
  v14 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)_PKLogCategory(PKLogCategoryDefault[0]));
  if ( os_log_type_enabled(v14, OS_LOG_TYPE_DEFAULT) )
  {
    *(_DWORD *)buf = 138543618;
    v36 = v9;
    v37 = 2114;
    v38 = v13;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v14,
      OS_LOG_TYPE_DEFAULT,
      "task %{public}@ received challenge %{public}@",
      buf,
      0x16u);
  }
  objc_release(v14);
  if ( (unsigned int)objc_msgSend(v13, "isEqualToString:", NSURLAuthenticationMethodServerTrust) )
  {
    v15 = objc_retainBlock(self->_trust_callback);
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "protectionSpace"));
    v17 = objc_msgSend(v16, "serverTrust");
    objc_release(v16);
    if ( !v17 )
    {
      v11[2](v11, 3LL, 0LL);
      goto LABEL_13;
    }
    v31[0] = _NSConcreteStackBlock;
    v31[1] = 3254779904LL;
    v31[2] = sub_1000092F4;
    v31[3] = &unk_1000910D8;
    v32 = -[PKSecTrustWrapper initWithTrust:](objc_alloc(&OBJC_CLASS___PKSecTrustWrapper), "initWithTrust:", v17);
    v34 = v15;
    v33 = objc_retain(v9);
    v18 = objc_retain(v15);
    v19 = objc_retain(v32);
    v20 = objc_retainBlock(v31);
    objc_release(v33);
    objc_release(v34);
    objc_release(v32);
  }
  else
  {
    if ( ((unsigned int)objc_msgSend(v13, "isEqualToString:", NSURLAuthenticationMethodClientCertificate) & 1) != 0 )
      goto LABEL_11;
    pass_callback = self->_pass_callback;
    if ( !pass_callback )
      goto LABEL_11;
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 3254779904LL;
    v27[2] = sub_10000966C;
    v27[3] = &unk_1000910D8;
    v30 = objc_retainBlock(pass_callback);
    v28 = objc_retain(v10);
    v29 = objc_retain(v9);
    v19 = (PKSecTrustWrapper *)objc_retain(v30);
    v20 = objc_retainBlock(v27);
    objc_release(v29);
    objc_release(v28);
    v18 = v30;
  }
  objc_release(v18);
  objc_release(v19);
  if ( v20 )
  {
    objc_initWeak((id *)buf, self);
    v22 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100009714;
    block[3] = &unk_100091138;
    v24 = v20;
    v25 = objc_retain(v11);
    v15 = objc_retain(v20);
    objc_copyWeak(&v26, (id *)buf);
    dispatch_async(v22, block);
    objc_release(v22);
    objc_destroyWeak(&v26);
    objc_release(v25);
    objc_release(v24);
    objc_destroyWeak((id *)buf);
LABEL_13:
    objc_release(v15);
    goto LABEL_14;
  }
LABEL_11:
  v11[2](v11, 1LL, 0LL);
LABEL_14:
  objc_release(v13);
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
}