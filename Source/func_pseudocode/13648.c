-[IWXPCPackageConverter prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:]
id __cdecl -[IWXPCPackageConverter prepareFileForUploadingAtURL:originalURLExtension:inDirectory:destinationSandboxExtension:completionHandler:](
        IWXPCPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v12; // x19
  void (__fastcall **v13)(id, _QWORD, NSError *); // x20
  id v14; // x26
  id v15; // x27
  id v16; // x22
  NSProgress *v17; // x21
  void *v18; // x24
  NSFileManager *v19; // x24
  void *v20; // x25
  __objc2_prop_list **p_inst_props; // x27
  void *v22; // x24
  id v23; // x25
  id v24; // x0
  void *v25; // x24
  void *v26; // x25
  NSError *v27; // x23
  NSProgress *v28; // x22
  void *v29; // x24
  id v30; // x27
  unsigned __int8 v31; // w26
  void *v32; // x0
  dispatch_queue_global_s *v33; // x23
  void *v34; // x0
  os_log_s *v35; // x26
  NSFileManager *v36; // x27
  unsigned int v37; // w28
  id v38; // x26
  void *v39; // x28
  id v40; // x27
  void *v41; // x27
  dispatch_queue_global_s *v42; // x26
  objc_class *v44; // x0
  NSString *v45; // x28
  void *v46; // x27
  void *v47; // x0
  os_log_s *log; // [xsp+8h] [xbp-158h]
  id v49; // [xsp+10h] [xbp-150h]
  _QWORD block[4]; // [xsp+18h] [xbp-148h] BYREF
  void (__fastcall **v51)(id, _QWORD, NSError *); // [xsp+38h] [xbp-128h]
  _QWORD v52[5]; // [xsp+40h] [xbp-120h] BYREF
  id v53; // [xsp+68h] [xbp-F8h]
  id v54; // [xsp+70h] [xbp-F0h]
  __int64 v55; // [xsp+78h] [xbp-E8h]
  __int64 v56; // [xsp+80h] [xbp-E0h]
  id v57; // [xsp+88h] [xbp-D8h] BYREF
  id v58; // [xsp+90h] [xbp-D0h] BYREF
  char v59; // [xsp+9Fh] [xbp-C1h] BYREF
  __int64 v60; // [xsp+A0h] [xbp-C0h] BYREF
  __int64 v61; // [xsp+A8h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+B0h] [xbp-B0h] BYREF
  id v63; // [xsp+B4h] [xbp-ACh]
  __int16 v64; // [xsp+BCh] [xbp-A4h]
  id v65; // [xsp+BEh] [xbp-A2h]
  __int16 v66; // [xsp+C6h] [xbp-9Ah]
  NSString *v67; // [xsp+C8h] [xbp-98h]
  __int16 v68; // [xsp+D0h] [xbp-90h]
  void *v69; // [xsp+D2h] [xbp-8Eh]
  __int16 v70; // [xsp+DAh] [xbp-86h]
  void *v71; // [xsp+DCh] [xbp-84h]
  __int16 v72; // [xsp+E4h] [xbp-7Ch]
  id v73; // [xsp+E6h] [xbp-7Ah]
  __int64 vars8; // [xsp+168h] [xbp+8h]

  v12 = objc_retain(a3);
  v13 = (void (__fastcall **)(id, _QWORD, NSError *))objc_retain(a7);
  v14 = objc_retain(a6);
  v15 = objc_retain(a5);
  v16 = objc_retain(a4);
  v17 = objc_retainAutoreleasedReturnValue(+[NSProgress progressWithTotalUnitCount:](&OBJC_CLASS___NSProgress, "progressWithTotalUnitCount:", 1LL));
  v60 = 0LL;
  v61 = 0LL;
  -[IWXPCPackageConverter consumeSandboxInputURLExtension:outputURLExtension:inputSandBoxToken:outputSandBoxToken:](
    self,
    "consumeSandboxInputURLExtension:outputURLExtension:inputSandBoxToken:outputSandBoxToken:",
    v16,
    v14,
    &v61,
    &v60);
  objc_release(v14);
  objc_release(v16);
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "lastPathComponent"));
  v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "URLByAppendingPathComponent:", v18));
  objc_release(v15);
  objc_release(v18);
  v59 = 0;
  v19 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "path"));
  LODWORD(v14) = -[NSFileManager fileExistsAtPath:isDirectory:](v19, "fileExistsAtPath:isDirectory:", v20, &v59);
  objc_release(v20);
  objc_release(v19);
  p_inst_props = &OBJC_PROTOCOL___SFUSimpleOutputStream.inst_props;
  if ( !(_DWORD)v14 )
  {
    v27 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              NSURLErrorDomain,
              -1100LL,
              0LL));
    if ( IWXPCPackageConverterCat_init_token != -1 )
      dispatch_once(&IWXPCPackageConverterCat_init_token, &stru_1001DF930);
    v28 = v17;
    v29 = IWXPCPackageConverterCat_log_t;
    if ( os_log_type_enabled((os_log_t)IWXPCPackageConverterCat_log_t, OS_LOG_TYPE_ERROR) )
    {
      sub_10016896C(v12, v29);
      if ( !v13 )
        goto LABEL_18;
    }
    else if ( !v13 )
    {
LABEL_18:
      objc_release(v27);
      v25 = 0LL;
      v23 = 0LL;
      goto LABEL_52;
    }
    v13[2](v13, 0LL, v27);
    goto LABEL_18;
  }
  if ( IWXPCPackageConverterCat_init_token != -1 )
    dispatch_once(&IWXPCPackageConverterCat_init_token, &stru_1001DF8F0);
  v22 = IWXPCPackageConverterCat_log_t;
  if ( os_log_type_enabled((os_log_t)IWXPCPackageConverterCat_log_t, OS_LOG_TYPE_DEBUG) )
    sub_100168904(v12, v49, v22);
  v58 = 0LL;
  v23 = +[TSPPackageConverter newPackageConverterWithURL:error:](
          &OBJC_CLASS___TSPPackageConverter,
          "newPackageConverterWithURL:error:",
          v12,
          &v58);
  v24 = objc_retain(v58);
  v25 = v24;
  if ( !v23 && v24 )
  {
    if ( IWXPCPackageConverterCat_init_token != -1 )
      dispatch_once(&IWXPCPackageConverterCat_init_token, &stru_1001DF910);
    v26 = IWXPCPackageConverterCat_log_t;
    if ( os_log_type_enabled((os_log_t)IWXPCPackageConverterCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_100168834(v26, v25);
    v23 = 0LL;
LABEL_23:
    if ( v59 )
      goto LABEL_24;
LABEL_30:
    -[NSProgress becomeCurrentWithPendingUnitCount:](v17, "becomeCurrentWithPendingUnitCount:", 1LL);
    if ( IWXPCPackageConverterCat_init_token != -1 )
      dispatch_once(&IWXPCPackageConverterCat_init_token, &stru_1001DF950);
    v35 = (os_log_s *)p_inst_props[121];
    if ( os_log_type_enabled(v35, OS_LOG_TYPE_DEBUG) )
      sub_1001687CC(v12, v49, v35);
    v36 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v57 = 0LL;
    v37 = -[NSFileManager copyItemAtURL:toURL:error:](v36, "copyItemAtURL:toURL:error:", v12, v49, &v57);
    v38 = objc_retain(v57);
    objc_release(v36);
    if ( v37 )
    {
      if ( IWXPCPackageConverterCat_init_token != -1 )
        dispatch_once(&IWXPCPackageConverterCat_init_token, &stru_1001DF970);
      v28 = v17;
      v39 = IWXPCPackageConverterCat_log_t;
      v40 = v49;
      if ( os_log_type_enabled((os_log_t)IWXPCPackageConverterCat_log_t, OS_LOG_TYPE_DEBUG) )
      {
        v40 = v49;
        sub_100168764(v12, v49, v39);
      }
    }
    else
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DF990);
      v28 = v17;
      v41 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
      {
        log = objc_retain(v41);
        v44 = (objc_class *)objc_opt_class(v38);
        v45 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v44));
        v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v38, "domain"));
        v47 = objc_msgSend(v38, "code");
        *(_DWORD *)buf = 138413570;
        v63 = v12;
        v64 = 2112;
        v65 = v49;
        v66 = 2114;
        v67 = v45;
        v68 = 2114;
        v69 = v46;
        v70 = 2048;
        v71 = v47;
        v72 = 2112;
        v73 = v38;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          log,
          OS_LOG_TYPE_ERROR,
          "Error copying from \"%@\" to \"%@\". Error: errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x3Eu);
        objc_release(v46);
        objc_release(v45);
        objc_release(log);
      }
      v40 = 0LL;
    }
    -[NSProgress resignCurrent](v28, "resignCurrent");
    -[IWXPCPackageConverter releaseInputSandboxExtensionToken:outputSandBoxToken:](
      self,
      "releaseInputSandboxExtensionToken:outputSandBoxToken:",
      v61,
      v60);
    if ( v13 )
      ((void (__fastcall **)(id, id, NSError *))v13)[2](v13, v40, 0LL);
    v34 = v38;
    goto LABEL_47;
  }
  if ( !v23 )
    goto LABEL_23;
  if ( (unsigned int)objc_msgSend(v23, "isValid") && objc_msgSend(v23, "packageType") == (void *)2 )
  {
    v30 = objc_retainAutoreleasedReturnValue(-[IWXPCPackageConverter entriesToRemove](self, "entriesToRemove"));
    v31 = (unsigned __int8)objc_msgSend(v23, "hasEntriesMatchingFilter:", v30);
    v32 = v30;
    p_inst_props = (__objc2_prop_list **)(&OBJC_PROTOCOL___SFUSimpleOutputStream + 56);
    objc_release(v32);
  }
  else
  {
    v31 = 0;
  }
  if ( !v59 && (v31 & 1) == 0 )
    goto LABEL_30;
  if ( (unsigned int)objc_msgSend(v23, "isValid") )
  {
    v42 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v52[0] = _NSConcreteStackBlock;
    v52[1] = 3254779904LL;
    v52[2] = sub_1001683A0;
    v52[3] = &unk_1001DF9F0;
    v52[4] = self;
    v55 = v61;
    v56 = v60;
    v53 = objc_retain(v49);
    v54 = objc_retain(v13);
    v28 = (NSProgress *)objc_retainAutoreleasedReturnValue(
                          -[IWXPCPackageConverter convertWithConverter:toSFFAtURL:queue:completion:](
                            self,
                            "convertWithConverter:toSFFAtURL:queue:completion:",
                            v23,
                            v53,
                            v42,
                            v52));
    objc_release(v17);
    objc_release(v42);
    objc_release(v54);
    v34 = v53;
    goto LABEL_47;
  }
LABEL_24:
  -[IWXPCPackageConverter releaseInputSandboxExtensionToken:outputSandBoxToken:](
    self,
    "releaseInputSandboxExtensionToken:outputSandBoxToken:",
    v61,
    v60);
  if ( v13 )
  {
    v33 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    objc_release(v33);
    v28 = v17;
    if ( v33 )
    {
      block[0] = _NSConcreteStackBlock;
      block[1] = 3254779904LL;
      block[2] = sub_100168538;
      block[3] = &unk_1001D29A8;
      v51 = objc_retain(v13);
      dispatch_async(v33, block);
      objc_release(v33);
      v34 = v51;
LABEL_47:
      objc_release(v34);
      goto LABEL_52;
    }
    v13[2](v13, 0LL, 0LL);
  }
  else
  {
    v28 = v17;
  }
LABEL_52:
  objc_release(v25);
  objc_release(v23);
  objc_release(v49);
  objc_release(v13);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v28);
}