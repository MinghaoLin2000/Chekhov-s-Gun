-[PhotosAdjustmentsVideoTranscodingTask performExport]
void __cdecl -[PhotosAdjustmentsVideoTranscodingTask performExport](
        PhotosAdjustmentsVideoTranscodingTask *self,
        SEL a2)
{
  AVAsset *v3; // x19
  NSString *v4; // x21
  NSDictionary *v5; // x23
  NSError *v6; // x22
  NSString *v7; // x0
  NSURL *v8; // x22
  unsigned __int8 v9; // w23
  id v10; // x21
  id v11; // x26
  NSMutableDictionary *v12; // x23
  void *v13; // x22
  NSMutableDictionary *v14; // x24
  void *v15; // x23
  NSDictionary *v16; // x25
  NSError *v17; // x24
  NSDictionary *v18; // x23
  NSError *v19; // x22
  void *v20; // x28
  NSMutableDictionary *v21; // x25
  void *v22; // x27
  id v23; // x27
  id v24; // x24
  void *v25; // x25
  id v26; // x25
  void *v27; // x26
  void *v28; // x25
  NSNumber *v29; // x26
  NSURL *v30; // x26
  void *v31; // x25
  void *v32; // x26
  id v33; // x27
  id v34; // x28
  void *v35; // x25
  id v36; // x25
  double v37; // d0
  __int64 v38; // x0
  __int64 v39; // x1
  void *v40; // x0
  void *v41; // x25
  NSMutableDictionary *v42; // x25
  void *v43; // x24
  id v44; // x24
  NSDictionary *v45; // x26
  id v46; // x25
  void *v47; // x24
  void *v48; // x25
  NSString *v49; // x22
  NSURL *v50; // x23
  NSString *v51; // x24
  NSError *v52; // x25
  NSString *v53; // x25
  NSURL *v54; // x26
  NSString *v55; // x27
  id v56; // [xsp+10h] [xbp-170h]
  void *v57; // [xsp+18h] [xbp-168h]
  _QWORD v58[5]; // [xsp+20h] [xbp-160h] BYREF
  id v59; // [xsp+48h] [xbp-138h]
  id v60; // [xsp+50h] [xbp-130h]
  id v61; // [xsp+58h] [xbp-128h]
  _QWORD v62[5]; // [xsp+60h] [xbp-120h] BYREF
  id v63; // [xsp+88h] [xbp-F8h] BYREF
  id v64; // [xsp+90h] [xbp-F0h] BYREF
  id v65; // [xsp+98h] [xbp-E8h] BYREF
  const __CFString *v66; // [xsp+A0h] [xbp-E0h] BYREF
  void *v67; // [xsp+A8h] [xbp-D8h] BYREF
  uint8_t buf[4]; // [xsp+B0h] [xbp-D0h] BYREF
  NSString *v69; // [xsp+B4h] [xbp-CCh]
  __int16 v70; // [xsp+BCh] [xbp-C4h]
  NSString *v71; // [xsp+BEh] [xbp-C2h]
  __int16 v72; // [xsp+C6h] [xbp-BAh]
  id v73; // [xsp+C8h] [xbp-B8h]
  NSErrorUserInfoKey v74; // [xsp+D8h] [xbp-A8h] BYREF
  const __CFString *v75; // [xsp+E0h] [xbp-A0h] BYREF
  NSErrorUserInfoKey v76; // [xsp+E8h] [xbp-98h] BYREF
  id v77; // [xsp+F0h] [xbp-90h] BYREF
  NSErrorUserInfoKey v78; // [xsp+F8h] [xbp-88h] BYREF
  NSString *v79; // [xsp+100h] [xbp-80h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  if ( v3 )
  {
    if ( -[VideoTranscodingTask hasSlowMotionAdjustments](self, "hasSlowMotionAdjustments") )
    {
      v4 = objc_retainAutoreleasedReturnValue(
             +[NSString stringWithFormat:](
               &OBJC_CLASS___NSString,
               "stringWithFormat:",
               CFSTR("%@ and %@ are mutually exclusive"),
               CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey"),
               CFSTR("PAMediaConversionServiceOptionVideoAdjustmentsPropertyListKey")));
      v78 = NSLocalizedDescriptionKey;
      v79 = v4;
      v5 = objc_retainAutoreleasedReturnValue(
             +[NSDictionary dictionaryWithObjects:forKeys:count:](
               &OBJC_CLASS___NSDictionary,
               "dictionaryWithObjects:forKeys:count:",
               &v79,
               &v78,
               1LL));
      v6 = objc_retainAutoreleasedReturnValue(
             +[NSError errorWithDomain:code:userInfo:](
               &OBJC_CLASS___NSError,
               "errorWithDomain:code:userInfo:",
               CFSTR("PAMediaConversionServiceErrorDomain"),
               6LL,
               v5));
      -[VideoConversionTask setError:](self, "setError:", v6);
      objc_release(v6);
      objc_release(v5);
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
      v7 = v4;
LABEL_32:
      objc_release(v7);
      goto LABEL_33;
    }
    v8 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
    v65 = 0LL;
    v64 = 0LL;
    v9 = -[NSURL getResourceValue:forKey:error:](
           v8,
           "getResourceValue:forKey:error:",
           &v65,
           NSURLTypeIdentifierKey,
           &v64);
    v10 = objc_retain(v65);
    v11 = objc_retain(v64);
    objc_release(v8);
    if ( (v9 & 1) == 0 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v49 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
        v50 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
        v51 = objc_retainAutoreleasedReturnValue(-[NSURL path](v50, "path"));
        *(_DWORD *)buf = 138543618;
        v69 = v49;
        v70 = 2112;
        v71 = v51;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Task %{public}@: Unable to determine type identifier for input file %@",
          buf,
          0x16u);
        objc_release(v51);
        objc_release(v50);
        objc_release(v49);
      }
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      v76 = NSUnderlyingErrorKey;
      v77 = v11;
      v18 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v77,
                &v76,
                1LL));
      v19 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                3LL,
                v18));
      -[VideoConversionTask setError:](self, "setError:", v19);
      objc_release(v19);
      objc_release(v18);
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
      goto LABEL_31;
    }
    v12 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v13 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v12,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionScaleFactorKey")));
    objc_release(v12);
    v14 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v15 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v14,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionMaximumPixelCountKey")));
    objc_release(v14);
    if ( v13 && v15 )
    {
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      v74 = NSLocalizedDescriptionKey;
      v75 = CFSTR("Scale factor and maximum pixel count options are mutually exclusive");
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v75,
                &v74,
                1LL));
      v17 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                6LL,
                v16));
      -[VideoConversionTask setError:](self, "setError:", v17);
      objc_release(v17);
      objc_release(v16);
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
LABEL_30:
      objc_release(v15);
      objc_release(v13);
LABEL_31:
      objc_release(v10);
      v7 = (NSString *)v11;
      goto LABEL_32;
    }
    +[PAMediaConversionServiceSharedUtilitiesServiceSide registerPhotosAdjustmentsSubsystems](
      &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
      "registerPhotosAdjustmentsSubsystems");
    v20 = +[NUVideoUtilities videoOrientationForAsset:videoComposition:](
            &OBJC_CLASS___NUVideoUtilities,
            "videoOrientationForAsset:videoComposition:",
            v3,
            0LL);
    v21 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v22 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v21,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey")));
    objc_release(v21);
    v57 = v22;
    if ( v22 )
    {
      v63 = v11;
      v23 = objc_retainAutoreleasedReturnValue(
              +[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForPhotosAdjustmentInformation:error:](
                &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                "compositionForPhotosAdjustmentInformation:error:",
                v22,
                &v63));
      v24 = objc_retain(v63);
      objc_release(v11);
      v56 = v24;
      if ( !v23 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          v53 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
          v54 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
          v55 = objc_retainAutoreleasedReturnValue(-[NSURL path](v54, "path"));
          *(_DWORD *)buf = 138543874;
          v69 = v53;
          v70 = 2112;
          v71 = v55;
          v72 = 2114;
          v73 = v24;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Task %{public}@: Unable to deserialize adjustment data for input file %@: %{public}@",
            buf,
            0x20u);
          objc_release(v55);
          objc_release(v54);
          objc_release(v53);
        }
        -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
        if ( v24 )
        {
          v66 = CFSTR("PAMediaConversionServiceErrorUnderlyingErrorDescriptionKey");
          v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v24, "description"));
          v67 = v48;
          v45 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    &v67,
                    &v66,
                    1LL));
          objc_release(v48);
        }
        else
        {
          v45 = 0LL;
        }
        v47 = v57;
        v52 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  6LL,
                  v45));
        -[VideoConversionTask setError:](self, "setError:", v52);
        objc_release(v52);
        -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
        goto LABEL_29;
      }
      v25 = objc_retainAutoreleasedReturnValue(objc_msgSend(v23, "objectForKeyedSubscript:", CFSTR("orientation")));
      objc_release(v25);
      if ( !v25 )
      {
        v26 = objc_alloc((Class)&OBJC_CLASS___NUGenericAdjustment);
        v27 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUIdentifier), "initWithName:", CFSTR("Orientation"));
        v28 = objc_msgSend(v26, "initWithIdentifier:", v27);
        objc_release(v27);
        v29 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", v20));
        objc_msgSend(v28, "setObject:forKeyedSubscript:", v29, CFSTR("value"));
        objc_release(v29);
        objc_msgSend(v23, "setObject:forKeyedSubscript:", v28, CFSTR("orientation"));
        objc_release(v28);
      }
    }
    else
    {
      v23 = objc_retainAutoreleasedReturnValue(
              +[PAMediaConversionServiceSharedUtilitiesServiceSide emptyGenericCompositionWithAdjustmentForOrientation:](
                &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                "emptyGenericCompositionWithAdjustmentForOrientation:",
                v20));
      v56 = v11;
    }
    v30 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask sourceMainResourceURL](self, "sourceMainResourceURL"));
    v31 = objc_retainAutoreleasedReturnValue(+[PIPhotoEditHelper videoSourceWithURL:](&OBJC_CLASS___PIPhotoEditHelper, "videoSourceWithURL:", v30));
    objc_msgSend(v23, "setObject:forKeyedSubscript:", v31, CFSTR("source"));
    objc_release(v31);
    objc_release(v30);
    objc_msgSend(v23, "setMediaType:", 2LL);
    v32 = objc_retainAutoreleasedReturnValue(
            +[PIPhotoEditHelper validatedCompositionCopyForComposition:mediaType:](
              &OBJC_CLASS___PIPhotoEditHelper,
              "validatedCompositionCopyForComposition:mediaType:",
              v23,
              2LL));
    objc_release(v23);
    v33 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporter);
    v34 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporterVideoOptions);
    v35 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUPriority), "initWithLevel:", 1LL);
    objc_msgSend(v34, "setPriority:", v35);
    objc_release(v35);
    if ( v13 )
    {
      v36 = objc_alloc((Class)&OBJC_CLASS___NUFixedScalePolicy);
      objc_msgSend(v13, "doubleValue");
      v38 = NUScaleFromDouble(v37);
      v40 = objc_msgSend(v36, "initWithScale:", v38, v39);
    }
    else
    {
      if ( !v15 )
      {
LABEL_22:
        objc_msgSend(v34, "setBypassOutputSettingsIfNoComposition:", 1LL);
        v42 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
        v43 = objc_retainAutoreleasedReturnValue(
                -[NSMutableDictionary objectForKeyedSubscript:](
                  v42,
                  "objectForKeyedSubscript:",
                  CFSTR("PAMediaConversionServiceOptionApplyOrientationTransformKey")));
        objc_msgSend(v34, "setApplyVideoOrientationAsMetadata:", (unsigned int)objc_msgSend(v43, "boolValue") ^ 1);
        objc_release(v43);
        objc_release(v42);
        v62[0] = _NSConcreteStackBlock;
        v62[1] = 3254779904LL;
        v62[2] = sub_10001C16C;
        v62[3] = &unk_1000415A0;
        v62[4] = self;
        objc_msgSend(v34, "setMetadataProcessor:", v62);
        v58[0] = _NSConcreteStackBlock;
        v58[1] = 3254779904LL;
        v58[2] = sub_10001C204;
        v58[3] = &unk_1000415D0;
        v58[4] = self;
        v59 = v33;
        v60 = v32;
        v61 = v34;
        v44 = objc_retain(v34);
        v45 = objc_retain(v32);
        v46 = objc_retain(v33);
        -[VideoTranscodingTask transitionToRunningStateAndConditionallyRunBlock:](
          self,
          "transitionToRunningStateAndConditionallyRunBlock:",
          v58);
        objc_release(v61);
        objc_release(v60);
        objc_release(v59);
        objc_release(v44);
        objc_release(v46);
        v47 = v57;
LABEL_29:
        objc_release(v45);
        objc_release(v47);
        v11 = v56;
        goto LABEL_30;
      }
      v40 = objc_msgSend(
              objc_alloc((Class)&OBJC_CLASS___NUPixelCountScalePolicy),
              "initWithTargetPixelCount:",
              objc_msgSend(v15, "integerValue"));
    }
    v41 = v40;
    objc_msgSend(v34, "setScalePolicy:", v40);
    objc_release(v41);
    goto LABEL_22;
  }
  -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
  -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
LABEL_33:
  objc_release(v3);
}