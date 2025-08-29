-[SinglePassVideoTranscodingTask performExport]
void __cdecl -[SinglePassVideoTranscodingTask performExport](SinglePassVideoTranscodingTask *self, SEL a2)
{
  NSMutableDictionary *v3; // x20
  void *v4; // x22
  void *v5; // x19
  NSURL *v6; // x22
  NSURL *v7; // x23
  void *v8; // x19
  void *v9; // x22
  NSMutableDictionary *v10; // x20
  void *v11; // x22
  void *v12; // x20
  NSMutableDictionary *v13; // x23
  double v14; // d0
  double v15; // d8
  NSString *v16; // x24
  void *v17; // x23
  void *v18; // x24
  void *v19; // x20
  id v20; // x24
  id v21; // x23
  void *v22; // x20
  id v23; // x24
  _QWORD *v24; // x20
  _QWORD *v25; // x25
  id v26; // x24
  id v27; // x0
  NSString *v28; // x26
  NSURL *v29; // x27
  NSString *v30; // x28
  NSURL *v31; // x21
  NSString *v32; // x20
  int v33; // w9
  NSURL *v34; // x22
  NSString *v35; // x23
  NSDictionary *v36; // x20
  NSError *v37; // x24
  id v38; // [xsp+10h] [xbp-1A0h]
  _QWORD v39[5]; // [xsp+18h] [xbp-198h] BYREF
  id v40; // [xsp+40h] [xbp-170h]
  id v41; // [xsp+48h] [xbp-168h]
  id v42; // [xsp+50h] [xbp-160h]
  __int64 *v43; // [xsp+58h] [xbp-158h]
  __int64 v44; // [xsp+60h] [xbp-150h] BYREF
  __int64 *v45; // [xsp+68h] [xbp-148h]
  __int64 v46; // [xsp+70h] [xbp-140h]
  char v47; // [xsp+78h] [xbp-138h]
  _QWORD v48[5]; // [xsp+80h] [xbp-130h] BYREF
  id v49; // [xsp+A8h] [xbp-108h]
  _QWORD v50[4]; // [xsp+B0h] [xbp-100h] BYREF
  id v51; // [xsp+D0h] [xbp-E0h]
  SinglePassVideoTranscodingTask *v52; // [xsp+D8h] [xbp-D8h]
  id v53; // [xsp+E0h] [xbp-D0h]
  id v54; // [xsp+E8h] [xbp-C8h] BYREF
  uint8_t buf[4]; // [xsp+F0h] [xbp-C0h] BYREF
  id v56; // [xsp+F4h] [xbp-BCh]
  __int16 v57; // [xsp+FCh] [xbp-B4h]
  NSString *v58; // [xsp+FEh] [xbp-B2h]
  __int16 v59; // [xsp+106h] [xbp-AAh]
  NSString *v60; // [xsp+108h] [xbp-A8h]
  __int16 v61; // [xsp+110h] [xbp-A0h]
  NSString *v62; // [xsp+112h] [xbp-9Eh]
  __int16 v63; // [xsp+11Ah] [xbp-96h]
  int v64; // [xsp+11Ch] [xbp-94h]
  NSErrorUserInfoKey v65; // [xsp+128h] [xbp-88h] BYREF
  NSString *v66; // [xsp+130h] [xbp-80h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
  v4 = objc_retainAutoreleasedReturnValue(
         -[NSMutableDictionary objectForKeyedSubscript:](
           v3,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceOptionTargetFileSizeKey")));
  v5 = objc_msgSend(v4, "unsignedLongLongValue");
  objc_release(v4);
  objc_release(v3);
  v6 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
  v7 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
  v54 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(
         +[PFVideoExport singlePassExportItemForAssetAtFileURL:destinationURL:targetFileSize:error:](
           &OBJC_CLASS___PFVideoExport,
           "singlePassExportItemForAssetAtFileURL:destinationURL:targetFileSize:error:",
           v6,
           v7,
           v5,
           &v54));
  v38 = objc_retain(v54);
  objc_release(v7);
  objc_release(v6);
  if ( v8 )
  {
    v9 = (void *)objc_opt_class(self);
    v10 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v11 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v9,
              "metadataItemsByApplyingSignatureMetadataFromOptions:toMetadataItems:",
              v10,
              &__NSArray0__struct));
    objc_release(v10);
    if ( objc_msgSend(v11, "count") )
      objc_msgSend(v8, "setAdditionalMetadata:", v11);
    v12 = (void *)objc_opt_class(self);
    v13 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    objc_msgSend(v8, "inputAssetDuration");
    v15 = v14;
    v16 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    objc_msgSend(
      v8,
      "setMaximizePowerEfficiency:",
      objc_msgSend(
        v12,
        "shouldMaximizeVideoConversionPowerEfficiencyForOptions:inputAssetDuration:taskIdentifier:",
        v13,
        v16,
        v15));
    objc_release(v16);
    objc_release(v13);
    v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "identifier"));
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "progress"));
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "cancellationHandler"));
    objc_release(v18);
    v50[0] = _NSConcreteStackBlock;
    v50[1] = 3254779904LL;
    v50[2] = sub_10001F644;
    v50[3] = &unk_1000416B0;
    v20 = objc_retain(v17);
    v51 = v20;
    v52 = self;
    v21 = objc_retain(v19);
    v53 = v21;
    v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "progress"));
    objc_msgSend(v22, "setCancellationHandler:", v50);
    objc_release(v22);
    v48[0] = _NSConcreteStackBlock;
    v48[1] = 3254779904LL;
    v48[2] = sub_10001F72C;
    v48[3] = &unk_1000416E0;
    v48[4] = self;
    v23 = objc_retain(v20);
    v49 = v23;
    v24 = objc_retainBlock(v48);
    v44 = 0LL;
    v45 = &v44;
    v46 = 0x2020000000LL;
    v47 = 0;
    v39[0] = _NSConcreteStackBlock;
    v39[1] = 3254779904LL;
    v39[2] = sub_10001F9BC;
    v39[3] = &unk_100041710;
    v39[4] = self;
    v40 = objc_retain(v8);
    v43 = &v44;
    v25 = objc_retain(v24);
    v42 = v25;
    v26 = objc_retain(v23);
    v41 = v26;
    -[VideoTranscodingTask transitionToRunningStateAndConditionallyRunBlock:](
      self,
      "transitionToRunningStateAndConditionallyRunBlock:",
      v39);
    v27 = objc_retain(&_os_log_default);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v28 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
      v29 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
      v30 = objc_retainAutoreleasedReturnValue(-[NSURL path](v29, "path"));
      v31 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputMainResourceURL](self, "outputMainResourceURL"));
      v32 = objc_retainAutoreleasedReturnValue(-[NSURL path](v31, "path"));
      v33 = *((unsigned __int8 *)v45 + 24);
      *(_DWORD *)buf = 138544386;
      v56 = v26;
      v57 = 2114;
      v58 = v28;
      v59 = 2112;
      v60 = v30;
      v61 = 2112;
      v62 = v32;
      v63 = 1024;
      v64 = v33;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Single pass video export item %{public}@ for conversion task %{public}@ exporting %@ to %@ didStart: %d",
        buf,
        0x30u);
      objc_release(v32);
      objc_release(v31);
      objc_release(v30);
      objc_release(v29);
      objc_release(v28);
    }
    objc_release(&_os_log_default);
    objc_release(v41);
    objc_release(v42);
    objc_release(v40);
    _Block_object_dispose(&v44, 8);
    objc_release(v25);
    objc_release(v49);
    objc_release(v53);
    objc_release(v51);
    objc_release(v21);
    objc_release(v26);
    objc_release(v11);
  }
  else
  {
    -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
    v65 = NSLocalizedDescriptionKey;
    v34 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
    v35 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Unable to create single pass export item for source %@"),
              v34));
    v66 = v35;
    v36 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v66,
              &v65,
              1LL));
    v37 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              3LL,
              v36));
    -[VideoConversionTask setError:](self, "setError:", v37);
    objc_release(v37);
    objc_release(v36);
    objc_release(v35);
    objc_release(v34);
    -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
  }
  objc_release(v8);
  objc_release(v38);
}