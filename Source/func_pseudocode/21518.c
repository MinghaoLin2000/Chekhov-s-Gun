-[LSRConnection configParametersForVoicemailWithLanguage:clientID:completion:]
void __cdecl -[LSRConnection configParametersForVoicemailWithLanguage:clientID:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  id v9; // x21
  _QWORD *v10; // x22
  dispatch_queue_s *v11; // x23
  os_log_s *v12; // x23
  _QWORD block[4]; // [xsp+8h] [xbp-C8h] BYREF
  id v14; // [xsp+28h] [xbp-A8h]
  id v15; // [xsp+30h] [xbp-A0h]
  id v16; // [xsp+38h] [xbp-98h]
  id v17; // [xsp+40h] [xbp-90h]
  _QWORD v18[4]; // [xsp+48h] [xbp-88h] BYREF
  id v19; // [xsp+68h] [xbp-68h]
  uint8_t buf[4]; // [xsp+70h] [xbp-60h] BYREF
  const char *v21; // [xsp+74h] [xbp-5Ch]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 3254779904LL;
  v18[2] = sub_100038A44;
  v18[3] = &unk_10005A078;
  v9 = objc_retain(objc_retain(a5));
  v19 = v9;
  v10 = objc_retainBlock(v18);
  if ( (sub_100035FE0() & 1) != 0 )
  {
    v11 = (dispatch_queue_s *)qword_100065418;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100038A5C;
    block[3] = &unk_10005A0A8;
    v14 = objc_retain(v7);
    v15 = objc_retain(v8);
    v16 = objc_retain(v9);
    v17 = objc_retain(v10);
    dispatch_async(v11, block);
    objc_release(v17);
    objc_release(v16);
    objc_release(v15);
    objc_release(v14);
  }
  else
  {
    v12 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 136315138;
      v21 = "-[LSRConnection configParametersForVoicemailWithLanguage:clientID:completion:]";
      _os_log_error_impl((void *)&_mh_execute_header, v12, OS_LOG_TYPE_ERROR, "%s Request not authorized", buf, 0xCu);
    }
    ((void (__fastcall *)(_QWORD *, _QWORD))v10[2])(v10, 0LL);
  }
  objc_release(v10);
  objc_release(v19);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}