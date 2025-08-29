-[AudioInfoHelperService listener:shouldAcceptNewConnection:]
bool __cdecl -[AudioInfoHelperService listener:shouldAcceptNewConnection:](
        AudioInfoHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  void *v8; // x21
  id v9; // x23
  id v10; // x0
  os_log_s *v11; // x24
  unsigned int v12; // w0
  _QWORD v14[5]; // [xsp+8h] [xbp-C8h] BYREF
  id v15; // [xsp+30h] [xbp-A0h] BYREF
  _QWORD v16[5]; // [xsp+38h] [xbp-98h] BYREF
  id v17; // [xsp+60h] [xbp-70h] BYREF
  id location; // [xsp+68h] [xbp-68h] BYREF
  uint8_t buf[4]; // [xsp+70h] [xbp-60h] BYREF
  const char *v20; // [xsp+74h] [xbp-5Ch]
  __int16 v21; // [xsp+7Ch] [xbp-54h]
  int v22; // [xsp+7Eh] [xbp-52h]
  __int16 v23; // [xsp+82h] [xbp-4Eh]
  unsigned int v24; // [xsp+84h] [xbp-4Ch]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "_queue"));
  objc_msgSend(v7, "_setQueue:", v8);
  objc_release(v8);
  objc_msgSend(v7, "setExportedInterface:", self->mExportedInterface);
  objc_msgSend(v7, "setExportedObject:", self);
  -[NSMutableArray addObject:](self->mConnections, "addObject:", v7);
  objc_initWeak(&location, v7);
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_100003064;
  v16[3] = &unk_100004100;
  v16[4] = self;
  objc_copyWeak(&v17, &location);
  objc_msgSend(v7, "setInterruptionHandler:", v16);
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_1000030C8;
  v14[3] = &unk_100004100;
  v14[4] = self;
  objc_copyWeak(&v15, &location);
  objc_msgSend(v7, "setInvalidationHandler:", v14);
  if ( qword_100008700 )
  {
    v9 = objc_retain(*(id *)qword_100008700);
    if ( !v9 )
      goto LABEL_8;
  }
  else
  {
    v9 = &_os_log_default;
    v10 = objc_retain(&_os_log_default);
  }
  v11 = (os_log_s *)objc_retain(v9);
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_INFO) )
  {
    v12 = (unsigned int)objc_msgSend(v7, "processIdentifier");
    *(_DWORD *)buf = 136315650;
    v20 = "InfoHelper.mm";
    v21 = 1024;
    v22 = 78;
    v23 = 1024;
    v24 = v12;
    _os_log_impl((void *)&_mh_execute_header, v11, OS_LOG_TYPE_INFO, "%25s:%-5d New connection from %d", buf, 0x18u);
  }
  objc_release(v11);
  objc_release(v11);
LABEL_8:
  objc_msgSend(v7, "resume");
  objc_destroyWeak(&v15);
  objc_destroyWeak(&v17);
  objc_destroyWeak(&location);
  objc_release(v7);
  objc_release(v6);
  return 1;
}