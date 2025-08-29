+[PAMediaConversionServiceSharedUtilitiesServiceSide configureSourcesForComposition:fromPhotosAdjustmentsJob:]
void __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide configureSourcesForComposition:fromPhotosAdjustmentsJob:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  void *v7; // x21
  void *v8; // x22
  NSArray *v9; // x24
  unsigned int v10; // w25
  void *v11; // x24
  void *v12; // x23
  void *v13; // x25
  void *v14; // x26
  void *v15; // x24
  void *v16; // x23
  NSArray *v17; // x23
  unsigned int v18; // w24
  __int64 v19; // x2
  const __CFString *v20; // [xsp+8h] [xbp-88h] BYREF
  _QWORD v21[2]; // [xsp+10h] [xbp-80h] BYREF
  uint8_t buf[4]; // [xsp+20h] [xbp-70h] BYREF
  void *v23; // [xsp+24h] [xbp-6Ch]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "sourceResourceURLCollection"));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "typeIdentifierForResourceURLWithRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
  if ( !v8 )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "logMessageSummary"));
      *(_DWORD *)buf = 138412290;
      v23 = v16;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to determine type identifier of main resource: %@",
        buf,
        0xCu);
      objc_release(v16);
    }
    goto LABEL_15;
  }
  v21[0] = CFSTR("PAMediaConversionResourceRoleMainResource");
  v21[1] = CFSTR("PAMediaConversionResourceRoleVideoComplement");
  v9 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v21, 2LL));
  v10 = (unsigned int)objc_msgSend(v7, "containsAllRoles:", v9);
  objc_release(v9);
  if ( v10 )
  {
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "mainSourceResourceURL"));
    v12 = objc_retainAutoreleasedReturnValue(
            +[PIPhotoEditHelper imageSourceWithURL:type:useEmbeddedPreview:](
              &OBJC_CLASS___PIPhotoEditHelper,
              "imageSourceWithURL:type:useEmbeddedPreview:",
              v11,
              v8,
              0LL));
    objc_release(v11);
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleVideoComplement")));
    v14 = objc_retainAutoreleasedReturnValue(+[PIPhotoEditHelper videoSourceWithURL:](&OBJC_CLASS___PIPhotoEditHelper, "videoSourceWithURL:", v13));
    objc_release(v13);
    v15 = objc_retainAutoreleasedReturnValue(
            +[PIPhotoEditHelper livePhotoSourceWithPhotoSource:videoSource:](
              &OBJC_CLASS___PIPhotoEditHelper,
              "livePhotoSourceWithPhotoSource:videoSource:",
              v12,
              v14));
    objc_release(v14);
  }
  else
  {
    v20 = CFSTR("PAMediaConversionResourceRoleMainResource");
    v17 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", &v20, 1LL));
    v18 = (unsigned int)objc_msgSend(v7, "containsAllRoles:", v17);
    objc_release(v17);
    if ( !v18 )
      goto LABEL_13;
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "mainSourceResourceURL"));
    v15 = objc_retainAutoreleasedReturnValue(
            +[PIPhotoEditHelper imageSourceWithURL:type:useEmbeddedPreview:](
              &OBJC_CLASS___PIPhotoEditHelper,
              "imageSourceWithURL:type:useEmbeddedPreview:",
              v12,
              v8,
              0LL));
  }
  objc_release(v12);
  if ( !v15 )
  {
LABEL_13:
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_WORD *)buf = 0;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to determine photos adjustments request main source configuration",
        buf,
        2u);
    }
LABEL_15:
    objc_msgSend(v6, "setStatus:", 2LL);
    goto LABEL_16;
  }
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v15, CFSTR("source"));
  if ( (unsigned int)objc_msgSend(v6, "hasLivePhotoSourceURLs") )
    v19 = 3LL;
  else
    v19 = 1LL;
  objc_msgSend(v5, "setMediaType:", v19);
  objc_release(v15);
LABEL_16:
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
}