-[LSRConnection installedLanguagesForAssetType:completion:]
void __cdecl -[LSRConnection installedLanguagesForAssetType:completion:](
        LSRConnection *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v6; // x0
  void (__fastcall **v7)(_QWORD, _QWORD); // x19
  __int64 v8; // x8
  dispatch_queue_s *v9; // x20
  id v10; // x20
  id v11; // x21
  os_log_s *v12; // x22
  __int64 v13; // x9
  _QWORD block[4]; // [xsp+8h] [xbp-D8h] BYREF
  id v15; // [xsp+28h] [xbp-B8h]
  unsigned __int64 v16; // [xsp+30h] [xbp-B0h]
  _QWORD v17[5]; // [xsp+38h] [xbp-A8h] BYREF
  __int64 v18; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v19; // [xsp+68h] [xbp-78h]
  __int64 v20; // [xsp+70h] [xbp-70h]
  __int64 (__fastcall *v21)(); // [xsp+78h] [xbp-68h]
  __int64 (__fastcall *v22)(); // [xsp+80h] [xbp-60h]
  id v23; // [xsp+88h] [xbp-58h]
  uint8_t buf[4]; // [xsp+90h] [xbp-50h] BYREF
  const char *v25; // [xsp+94h] [xbp-4Ch]
  __int16 v26; // [xsp+9Ch] [xbp-44h]
  id v27; // [xsp+9Eh] [xbp-42h]
  __int16 v28; // [xsp+A6h] [xbp-3Ah]
  __int64 v29; // [xsp+A8h] [xbp-38h]

  v6 = objc_retain(a4);
  v7 = (void (__fastcall **)(_QWORD, _QWORD))v6;
  if ( v6 )
  {
    if ( (a3 & 0xFFFFFFFFFFFFFFFBLL) != 3 )
    {
      v9 = (dispatch_queue_s *)qword_100065418;
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_10003A998;
      block[3] = &unk_100059DC8;
      v16 = a3;
      v15 = objc_retain(v6);
      dispatch_async(v9, block);
      v10 = v15;
LABEL_13:
      objc_release(v10);
      goto LABEL_14;
    }
    if ( a3 == 3 )
    {
      v8 = 208LL;
    }
    else
    {
      if ( a3 != 7 )
      {
        v10 = 0LL;
        goto LABEL_10;
      }
      v8 = 216LL;
    }
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)((char *)&self->super.isa + v8), "statusForLanguage"));
LABEL_10:
    v11 = objc_retainAutoreleasedReturnValue((id)SFEntitledAssetTypeToString(a3));
    v18 = 0LL;
    v19 = &v18;
    v20 = 0x3032000000LL;
    v21 = sub_10003A914;
    v22 = sub_10003A924;
    v23 = objc_retainAutoreleasedReturnValue(+[NSMutableSet set](&OBJC_CLASS___NSMutableSet, "set"));
    v17[0] = _NSConcreteStackBlock;
    v17[1] = 3254779904LL;
    v17[2] = sub_10003A92C;
    v17[3] = &unk_100059D98;
    v17[4] = &v18;
    objc_msgSend(v10, "enumerateKeysAndObjectsUsingBlock:", v17);
    v12 = (os_log_s *)SFLogConnection;
    if ( os_log_type_enabled(SFLogConnection, OS_LOG_TYPE_DEBUG) )
    {
      v13 = v19[5];
      *(_DWORD *)buf = 136315650;
      v25 = "-[LSRConnection installedLanguagesForAssetType:completion:]";
      v26 = 2112;
      v27 = v11;
      v28 = 2112;
      v29 = v13;
      _os_log_debug_impl(
        (void *)&_mh_execute_header,
        v12,
        OS_LOG_TYPE_DEBUG,
        "%s Using the cached status for %@ assets, available languages: %@",
        buf,
        0x20u);
    }
    v7[2](v7, v19[5]);
    _Block_object_dispose(&v18, 8);
    objc_release(v23);
    objc_release(v11);
    goto LABEL_13;
  }
LABEL_14:
  objc_release(v7);
}