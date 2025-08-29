-[INHService fetchShareExtensionIntentForExtensionContextUUID:completion:]
void __cdecl -[INHService fetchShareExtensionIntentForExtensionContextUUID:completion:](
        INHService *self,
        SEL a2,
        id a3,
        id a4)
{
  void (__fastcall **v6)(id, id); // x20
  NSXPCConnection *v7; // x0
  const char *v8; // x1
  NSXPCConnection *v9; // x21
  LSBundleProxy *v10; // x19
  __int64 v11; // x0
  LSBundleProxy *v12; // x0
  LSBundleProxy *v13; // x22
  void *v14; // x23
  void *v15; // x19
  unsigned int v16; // w24
  NSArray *v17; // x19
  NSSet *v18; // x24
  void *v19; // x19
  objc_class *v20; // x0
  NSString *v21; // x26
  NSSet *v22; // x25
  void *v23; // x25
  void *v24; // x27
  id v25; // x26
  id v26; // x19
  NSSet *v27; // x28
  __int64 (__fastcall *v28)(id, id, id, NSSet *); // x26
  os_log_s *v29; // x19
  char *v30; // x0
  id v31; // [xsp+8h] [xbp-F8h]
  id v32; // [xsp+10h] [xbp-F0h]
  id v33; // [xsp+18h] [xbp-E8h]
  _OWORD v34[2]; // [xsp+20h] [xbp-E0h] BYREF
  __int64 v35; // [xsp+48h] [xbp-B8h] BYREF
  __int64 *v36; // [xsp+50h] [xbp-B0h]
  __int64 v37; // [xsp+58h] [xbp-A8h]
  void *v38; // [xsp+60h] [xbp-A0h]
  LSBundleProxy *v39; // [xsp+68h] [xbp-98h] BYREF
  _BYTE buf[24]; // [xsp+70h] [xbp-90h] BYREF
  void *v41; // [xsp+88h] [xbp-78h]
  __int64 *v42; // [xsp+90h] [xbp-70h]

  v33 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, id))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(-[INHService servingConnection](self, "servingConnection"));
  v9 = v7;
  if ( v7 )
    objc_msgSend_auditToken(v34, v7, v8);
  else
    memset(v34, 0, sizeof(v34));
  v10 = objc_retainAutoreleasedReturnValue(
          +[LSBundleProxy bundleProxyWithAuditToken:error:](
            &OBJC_CLASS___LSBundleProxy,
            "bundleProxyWithAuditToken:error:",
            v34,
            0LL));
  if ( v10 )
  {
    v11 = objc_opt_class(&OBJC_CLASS___LSPlugInKitProxy);
    if ( (objc_opt_isKindOfClass(v10, v11) & 1) != 0 )
      v12 = v10;
    else
      v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = objc_retain(v12);
  objc_release(v10);
  v14 = objc_retainAutoreleasedReturnValue(-[LSBundleProxy bundleIdentifier](v13, "bundleIdentifier"));
  if ( v13
    && (v15 = objc_retainAutoreleasedReturnValue(-[LSBundleProxy protocol](v13, "protocol")),
        v16 = (unsigned int)objc_msgSend(v15, "isEqualToString:", CFSTR("com.apple.share-services")),
        objc_release(v15),
        v16) )
  {
    v39 = v13;
    v17 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v39, 1LL));
    v18 = (NSSet *)objc_retainAutoreleasedReturnValue((id)INSupportedIntentsByExtensions());
    objc_release(v17);
    if ( !-[NSSet count](v18, "count") )
    {
      v19 = objc_retainAutoreleasedReturnValue(
              -[LSBundleProxy objectForInfoDictionaryKey:ofClass:inScope:](
                v13,
                "objectForInfoDictionaryKey:ofClass:inScope:",
                CFSTR("ShareSheetSuggestionsSupported-Minimum-iOS13.5"),
                objc_opt_class(&OBJC_CLASS___NSNumber),
                0LL));
      if ( v19 )
      {
        v20 = (objc_class *)objc_opt_class(&OBJC_CLASS___INSendMessageIntent);
        v21 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v20));
        v22 = objc_retainAutoreleasedReturnValue(+[NSSet setWithObjects:](&OBJC_CLASS___NSSet, "setWithObjects:", v21, 0LL));
        objc_release(v18);
        objc_release(v21);
        v18 = v22;
      }
      objc_release(v19);
    }
    v23 = objc_retainAutoreleasedReturnValue(-[LSBundleProxy containingBundle](v13, "containingBundle"));
    v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "bundleIdentifier"));
    v25 = 0LL;
    if ( -[NSSet count](v18, "count") && v24 )
    {
      v31 = objc_retain(v24);
      v32 = objc_retain(v14);
      v26 = objc_retain(v33);
      v27 = objc_retain(v18);
      v35 = 0LL;
      v36 = &v35;
      v37 = 0x2020000000LL;
      v28 = (__int64 (__fastcall *)(id, id, id, NSSet *))off_10000CA28;
      v38 = off_10000CA28;
      if ( !off_10000CA28 )
      {
        *(_QWORD *)buf = _NSConcreteStackBlock;
        *(_QWORD *)&buf[8] = 3254779904LL;
        *(_QWORD *)&buf[16] = sub_100004E68;
        v41 = &unk_1000082C0;
        v42 = &v35;
        sub_100004E68(buf);
        v28 = (__int64 (__fastcall *)(id, id, id, NSSet *))v36[3];
      }
      _Block_object_dispose(&v35, 8);
      if ( !v28 )
      {
        v30 = dlerror();
        abort_report_np("%s", v30);
        __break(1u);
      }
      v25 = objc_retainAutoreleasedReturnValue((id)v28(v31, v32, v26, v27));
      objc_release(v27);
      objc_release(v26);
      objc_release(v32);
      objc_release(v31);
    }
    objc_release(v24);
    objc_release(v23);
    objc_release(v18);
  }
  else
  {
    v25 = 0LL;
  }
  v29 = (os_log_s *)INSiriLogContextIntents;
  if ( os_log_type_enabled(INSiriLogContextIntents, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 136315650;
    *(_QWORD *)&buf[4] = "-[INHService fetchShareExtensionIntentForExtensionContextUUID:completion:]";
    *(_WORD *)&buf[12] = 2112;
    *(_QWORD *)&buf[14] = v25;
    *(_WORD *)&buf[22] = 2112;
    v41 = v14;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v29,
      OS_LOG_TYPE_INFO,
      "%s Fetched share extension intent %@ from people suggester for bundleID %@",
      buf,
      0x20u);
  }
  if ( v6 )
    v6[2](v6, v25);
  objc_release(v14);
  objc_release(v13);
  objc_release(v9);
  objc_release(v25);
  objc_release(v6);
  objc_release(v33);
}