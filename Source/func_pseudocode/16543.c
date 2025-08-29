-[HSModel scheduleCoreSpeechTask:minorVersion:downloadedModels:preinstalledModels:]
void __cdecl -[HSModel scheduleCoreSpeechTask:minorVersion:downloadedModels:preinstalledModels:](
        HSModel *self,
        SEL a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x20
  _QWORD *v12; // x23
  void *v13; // x0
  id v14; // x24
  _QWORD v15[5]; // [xsp+8h] [xbp-B8h] BYREF
  __int64 v16; // [xsp+30h] [xbp-90h] BYREF
  __int64 *v17; // [xsp+38h] [xbp-88h]
  __int64 v18; // [xsp+40h] [xbp-80h]
  __int64 v19; // [xsp+48h] [xbp-78h]
  __int128 buf; // [xsp+50h] [xbp-70h] BYREF
  __int64 (__fastcall *v21)(_QWORD); // [xsp+60h] [xbp-60h]
  void *v22; // [xsp+68h] [xbp-58h]
  __int64 *v23; // [xsp+70h] [xbp-50h]

  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  if ( self->delegate )
  {
    v15[0] = _NSConcreteStackBlock;
    v15[1] = 3254779904LL;
    v15[2] = sub_100014B30;
    v15[3] = &unk_100031978;
    v15[4] = self;
    v12 = objc_retainBlock(v15);
    v16 = 0LL;
    v17 = &v16;
    v18 = 0x2050000000LL;
    v13 = (void *)qword_100041F00;
    v19 = qword_100041F00;
    if ( !qword_100041F00 )
    {
      *(_QWORD *)&buf = _NSConcreteStackBlock;
      *((_QWORD *)&buf + 1) = 3254779904LL;
      v21 = sub_100015110;
      v22 = &unk_1000319A8;
      v23 = &v16;
      sub_100015110(&buf);
      v13 = (void *)v17[3];
    }
    v14 = objc_retainAutorelease(v13);
    _Block_object_dispose(&v16, 8);
    objc_msgSend(
      v14,
      "voiceTriggerRTModelForVersion:minorVersion:downloadedModels:preinstalledModels:completion:",
      a3,
      a4,
      v10,
      v11,
      v12);
    objc_release(v12);
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
  {
    LODWORD(buf) = 136315138;
    *(_QWORD *)((char *)&buf + 4) = "-[HSModel scheduleCoreSpeechTask:minorVersion:downloadedModels:preinstalledModels:]";
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_DEFAULT,
      "%s: delegate is nil",
      (uint8_t *)&buf,
      0xCu);
  }
  objc_release(v11);
  objc_release(v10);
}