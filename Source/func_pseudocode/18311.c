-[AUCrashHandlerService _getAuditTokenFromEndpoint:]
optional<audit_token_t> *__cdecl -[AUCrashHandlerService _getAuditTokenFromEndpoint:](
        optional<audit_token_t> *__return_ptr retstr,
        AUCrashHandlerService *self,
        SEL a3,
        id a4)
{
  id v5; // x19
  NSXPCInterface *v6; // x20
  id v7; // x22
  id v8; // x23
  id v9; // x23
  void *v10; // x23
  __int64 v11; // x0
  _BYTE *v12; // x24
  __int64 v13; // x0
  os_log_s *v14; // x23
  os_log_s *v15; // x20
  os_log_s *v16; // x20
  const char *v17; // x1
  id v18; // x0
  id v19; // x23
  id v20; // x23
  void *v21; // x23
  __int64 v22; // x0
  _BYTE *v23; // x24
  __int128 v24; // q1
  optional<audit_token_t> *result; // x0
  __int128 v26; // [xsp+0h] [xbp-130h] BYREF
  __int128 v27; // [xsp+10h] [xbp-120h]
  id *v28; // [xsp+28h] [xbp-108h] BYREF
  id v29; // [xsp+30h] [xbp-100h] BYREF
  id v30; // [xsp+38h] [xbp-F8h] BYREF
  _BYTE v31[32]; // [xsp+40h] [xbp-F0h] BYREF
  id v32; // [xsp+60h] [xbp-D0h]
  int v33; // [xsp+68h] [xbp-C8h]
  _BYTE buf[24]; // [xsp+70h] [xbp-C0h] BYREF
  _BYTE *v35; // [xsp+88h] [xbp-A8h]
  _BYTE v36[40]; // [xsp+90h] [xbp-A0h] BYREF
  _BYTE v37[32]; // [xsp+B8h] [xbp-78h] BYREF

  v5 = objc_retain(a4);
  if ( v5 )
  {
    v29 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSXPCConnection), "initWithListenerEndpoint:", v5);
    if ( v29 )
    {
      v6 = objc_retainAutoreleasedReturnValue(
             +[NSXPCInterface interfaceWithProtocol:](
               &OBJC_CLASS___NSXPCInterface,
               "interfaceWithProtocol:",
               &OBJC_PROTOCOL___AUHostingService_AUXPC_Protocol));
      v7 = objc_retainAutoreleasedReturnValue((id)ConfigureAUAudioUnitXPCInterface());
      objc_msgSend(v29, "setRemoteObjectInterface:", v7);
      objc_release(v7);
      objc_msgSend(v29, "setInterruptionHandler:", &stru_100008220);
      objc_msgSend(v29, "setInvalidationHandler:", &stru_100008240);
      objc_msgSend(v29, "resume");
      v28 = &v29;
      *(_QWORD *)buf = off_1000082A0;
      *(_QWORD *)&buf[8] = &v30;
      v35 = buf;
      v8 = objc_retain(objc_retain(v29));
      v30 = v8;
      sub_100005070(v31, buf);
      objc_release(v8);
      sub_100004B78(buf);
      v32 = 0LL;
      sub_100005070(v37, v31);
      v9 = v30;
      *(_QWORD *)buf = _NSConcreteStackBlock;
      *(_QWORD *)&buf[8] = 3321888768LL;
      *(_QWORD *)&buf[16] = sub_1000051D8;
      v35 = &unk_1000082D8;
      sub_100005070(v36, v37);
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "synchronousRemoteObjectProxyWithErrorHandler:", buf));
      sub_100004B78(v36);
      v11 = sub_100004B78(v37);
      sub_100005070(v11, v31);
      *(_QWORD *)buf = _NSConcreteStackBlock;
      *(_QWORD *)&buf[8] = 3321888768LL;
      *(_QWORD *)&buf[16] = sub_100005108;
      v35 = &unk_1000082D8;
      sub_100005070(v36, v37);
      v12 = objc_retainBlock(buf);
      sub_100004B78(v36);
      sub_100004B78(v37);
      objc_msgSend(v10, "establishConnection:", v12);
      objc_release(v12);
      objc_release(v10);
      if ( v32 )
      {
        sub_100003198(v13);
        v14 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
        if ( os_log_type_enabled(v14, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 136315394;
          *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
          *(_WORD *)&buf[12] = 1024;
          *(_DWORD *)&buf[14] = 91;
          _os_log_impl(
            (void *)&_mh_execute_header,
            v14,
            OS_LOG_TYPE_ERROR,
            "%25s:%-5d Error establishing connection to Hosting Service",
            buf,
            0x12u);
        }
        retstr->var0.var0 = 0;
        retstr->var1 = 0;
        objc_release(v32);
        sub_100004B78(v31);
        objc_release(v30);
      }
      else
      {
        objc_release(0LL);
        sub_100004B78(v31);
        objc_release(v30);
        v26 = 0u;
        v27 = 0u;
        v18 = v29;
        if ( v29 )
        {
          objc_msgSend_auditToken(&v26, v29, v17);
          v18 = v29;
        }
        *(_QWORD *)buf = off_100008358;
        *(_QWORD *)&buf[8] = &v30;
        v35 = buf;
        v19 = objc_retain(objc_retain(v18));
        v30 = v19;
        sub_100004D5C(v31, buf);
        objc_release(v19);
        sub_100004BFC(buf);
        v32 = 0LL;
        v33 = 0;
        sub_100004D5C(v37, v31);
        v20 = v30;
        *(_QWORD *)buf = _NSConcreteStackBlock;
        *(_QWORD *)&buf[8] = 3321888768LL;
        *(_QWORD *)&buf[16] = sub_100004F4C;
        v35 = &unk_100008390;
        sub_100004D5C(v36, v37);
        v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "synchronousRemoteObjectProxyWithErrorHandler:", buf));
        sub_100004BFC(v36);
        v22 = sub_100004BFC(v37);
        sub_100004D5C(v22, v31);
        *(_QWORD *)buf = _NSConcreteStackBlock;
        *(_QWORD *)&buf[8] = 3321888768LL;
        *(_QWORD *)&buf[16] = sub_100004DF4;
        v35 = &unk_1000083C0;
        sub_100004D5C(v36, v37);
        v23 = objc_retainBlock(buf);
        sub_100004BFC(v36);
        sub_100004BFC(v37);
        objc_msgSend(v21, "closeHost:", v23);
        objc_release(v23);
        objc_release(v21);
        objc_release(v32);
        sub_100004BFC(v31);
        objc_release(v30);
        v24 = v27;
        *(_OWORD *)&retstr->var0.var0 = v26;
        *(_OWORD *)&retstr->var0.var1.var0[4] = v24;
        retstr->var1 = 1;
      }
      sub_100004CF8(&v28);
      objc_release(v6);
    }
    else
    {
      sub_100003198(0LL);
      v16 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
      if ( os_log_type_enabled(v16, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 136315394;
        *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
        *(_WORD *)&buf[12] = 1024;
        *(_DWORD *)&buf[14] = 65;
        _os_log_impl(
          (void *)&_mh_execute_header,
          v16,
          OS_LOG_TYPE_ERROR,
          "%25s:%-5d Error creating XPC connection to Hosting Service",
          buf,
          0x12u);
      }
      retstr->var0.var0 = 0;
      retstr->var1 = 0;
    }
    objc_release(v29);
  }
  else
  {
    sub_100003198(0LL);
    v15 = (os_log_s *)objc_retainAutorelease((id)qword_10000D080);
    if ( os_log_type_enabled(v15, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315394;
      *(_QWORD *)&buf[4] = "AUCrashHandlerService.mm";
      *(_WORD *)&buf[12] = 1024;
      *(_DWORD *)&buf[14] = 58;
      _os_log_impl((void *)&_mh_execute_header, v15, OS_LOG_TYPE_ERROR, "%25s:%-5d Invalid endpoint", buf, 0x12u);
    }
    retstr->var0.var0 = 0;
    retstr->var1 = 0;
  }
  objc_release(v5);
  return result;
}