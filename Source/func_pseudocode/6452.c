-[ExportSessionVideoTranscodingTask performExport]
void __cdecl -[ExportSessionVideoTranscodingTask performExport](ExportSessionVideoTranscodingTask *self, SEL a2)
{
  AVAsset *v3; // x19
  id v4; // x20
  void *v5; // x23
  void *v6; // x22
  AVAsset *v7; // x24
  NSMutableDictionary *v8; // x25
  id v9; // x23
  void *v10; // x25
  id v11; // x0
  void *v12; // x26
  NSDictionary *v13; // x22
  NSError *v14; // x23
  NSDictionary *v15; // x23
  NSError *v16; // x24
  id v17; // x0
  void *v18; // x25
  const char *v19; // x1
  NSMutableDictionary *v20; // x23
  void *v21; // x0
  double Seconds; // d8
  NSString *v23; // x26
  void *v24; // x0
  NSMutableDictionary *v25; // x26
  void *v26; // x25
  void *v27; // x0
  NSMutableDictionary *v28; // x26
  void *v29; // x28
  unsigned int v30; // w27
  id v31; // x0
  NSError *v32; // x24
  NSString *v33; // x24
  CMTime v34; // [xsp+0h] [xbp-160h] BYREF
  _QWORD v35[7]; // [xsp+18h] [xbp-148h] BYREF
  __int64 v36; // [xsp+50h] [xbp-110h] BYREF
  __int64 *v37; // [xsp+58h] [xbp-108h]
  __int64 v38; // [xsp+60h] [xbp-100h]
  __int64 (__fastcall *v39)(); // [xsp+68h] [xbp-F8h]
  __int64 (__fastcall *v40)(); // [xsp+70h] [xbp-F0h]
  id v41; // [xsp+78h] [xbp-E8h]
  __int64 v42; // [xsp+80h] [xbp-E0h] BYREF
  __int64 *v43; // [xsp+88h] [xbp-D8h]
  __int64 v44; // [xsp+90h] [xbp-D0h]
  __int64 (__fastcall *v45)(); // [xsp+98h] [xbp-C8h]
  __int64 (__fastcall *v46)(); // [xsp+A0h] [xbp-C0h]
  id v47; // [xsp+A8h] [xbp-B8h]
  uint8_t buf[4]; // [xsp+B0h] [xbp-B0h] BYREF
  NSString *v49; // [xsp+B4h] [xbp-ACh]
  __int16 v50; // [xsp+BCh] [xbp-A4h]
  id v51; // [xsp+BEh] [xbp-A2h]
  NSErrorUserInfoKey v52; // [xsp+C8h] [xbp-98h] BYREF
  const __CFString *v53; // [xsp+D0h] [xbp-90h] BYREF
  NSErrorUserInfoKey v54; // [xsp+D8h] [xbp-88h] BYREF
  const __CFString *v55; // [xsp+E0h] [xbp-80h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  if ( !v3 )
  {
    -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
    -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
    goto LABEL_32;
  }
  if ( !-[VideoConversionTask isMetadataTrackExtractionConversion](self, "isMetadataTrackExtractionConversion") )
  {
    if ( -[VideoConversionTask isPassthroughConversion](self, "isPassthroughConversion") )
    {
      -[ExportSessionVideoTranscodingTask performPassthroughConversion](self, "performPassthroughConversion");
      goto LABEL_32;
    }
    v4 = objc_retainAutoreleasedReturnValue(-[ExportSessionVideoTranscodingTask exportPresetName](self, "exportPresetName"));
    if ( !v4 )
    {
      v54 = NSLocalizedDescriptionKey;
      v55 = CFSTR("Unable to determine export preset");
      v13 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v55,
                &v54,
                1LL));
      v14 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                3LL,
                v13));
      -[VideoConversionTask setError:](self, "setError:", v14);
      objc_release(v14);
      objc_release(v13);
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
LABEL_31:
      objc_release(v4);
      goto LABEL_32;
    }
    v5 = objc_retainAutoreleasedReturnValue(
           +[PFMediaUtilities tracksWithMediaType:forAsset:](
             &OBJC_CLASS___PFMediaUtilities,
             "tracksWithMediaType:forAsset:",
             AVMediaTypeVideo,
             v3));
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "firstObject"));
    objc_release(v5);
    if ( !v6 )
    {
      -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
      v52 = NSLocalizedDescriptionKey;
      v53 = CFSTR("Unable to get input asset video track");
      v15 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v53,
                &v52,
                1LL));
      v16 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                CFSTR("PAMediaConversionServiceErrorDomain"),
                3LL,
                v15));
      -[VideoConversionTask setError:](self, "setError:", v16);
      objc_release(v16);
      objc_release(v15);
      -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
LABEL_30:
      objc_release(v6);
      goto LABEL_31;
    }
    v42 = 0LL;
    v43 = &v42;
    v44 = 0x3032000000LL;
    v45 = sub_10001ABCC;
    v46 = sub_10001ABDC;
    v7 = objc_retain(v3);
    v47 = v7;
    v36 = 0LL;
    v37 = &v36;
    v38 = 0x3032000000LL;
    v39 = sub_10001ABCC;
    v40 = sub_10001ABDC;
    v41 = 0LL;
    if ( -[VideoTranscodingTask hasSlowMotionAdjustments](self, "hasSlowMotionAdjustments") )
    {
      v8 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
      v9 = objc_retainAutoreleasedReturnValue(
             -[NSMutableDictionary objectForKeyedSubscript:](
               v8,
               "objectForKeyedSubscript:",
               CFSTR("PAMediaConversionServiceOptionVideoAdjustmentsPropertyListKey")));
      objc_release(v8);
      v10 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___PFVideoAdjustments), "initWithPropertyListDictionary:", v9);
      if ( !v10 )
      {
        v31 = objc_retain(&_os_log_default);
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          v33 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
          *(_DWORD *)buf = 138543618;
          v49 = v33;
          v50 = 2114;
          v51 = v9;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to create adjustments for conversion task %{public}@ from property list %{public}@",
            buf,
            0x16u);
          objc_release(v33);
        }
        objc_release(&_os_log_default);
        v32 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  6LL,
                  0LL));
        -[VideoConversionTask setError:](self, "setError:", v32);
        objc_release(v32);
        -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
        goto LABEL_28;
      }
      v11 = objc_alloc((Class)&OBJC_CLASS___PFVideoAVObjectBuilder);
      v12 = objc_msgSend(v11, "initWithVideoAsset:videoAdjustments:", v43[5], v10);
      v35[0] = _NSConcreteStackBlock;
      v35[1] = 3254779904LL;
      v35[2] = sub_10001EB28;
      v35[3] = &unk_100041650;
      v35[4] = self;
      v35[5] = &v36;
      v35[6] = &v42;
      objc_msgSend(v12, "requestExportSessionWithExportPreset:resultHandler:", v4, v35);
      objc_release(v12);
      objc_release(v10);
    }
    else
    {
      v17 = objc_retainAutoreleasedReturnValue(
              -[ExportSessionVideoTranscodingTask exportSessionForInputAsset:presetName:](
                self,
                "exportSessionForInputAsset:presetName:",
                v43[5],
                v4));
      v9 = (id)v37[5];
      v37[5] = (__int64)v17;
    }
    objc_release(v9);
    if ( !v37[5] )
    {
LABEL_29:
      _Block_object_dispose(&v36, 8);
      objc_release(v41);
      _Block_object_dispose(&v42, 8);
      objc_release(v47);
      goto LABEL_30;
    }
    v18 = (void *)objc_opt_class(self);
    v20 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v21 = (void *)v43[5];
    if ( v21 )
      objc_msgSend_duration(&v34, v21, v19);
    else
      memset(&v34, 0, sizeof(v34));
    Seconds = CMTimeGetSeconds(&v34);
    v23 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
    v24 = objc_msgSend(
            v18,
            "shouldMaximizeVideoConversionPowerEfficiencyForOptions:inputAssetDuration:taskIdentifier:",
            v20,
            v23,
            Seconds);
    objc_msgSend((id)v37[5], "setMaximizePowerEfficiency:", v24);
    objc_release(v23);
    objc_release(v20);
    v9 = objc_retainAutoreleasedReturnValue(
           -[ExportSessionVideoTranscodingTask outputFileTypeForExportSession:](
             self,
             "outputFileTypeForExportSession:",
             v37[5]));
    if ( v9 )
    {
      v25 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
      v26 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                v25,
                "objectForKeyedSubscript:",
                CFSTR("PAMediaConversionServiceOptionAudioTrackGroupHandlingKey")));
      objc_release(v25);
      if ( v26 )
      {
        v27 = objc_msgSend(v26, "integerValue");
        objc_msgSend((id)v37[5], "setAudioTrackGroupHandling:", v27);
      }
      v28 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options", v34.value, *(_QWORD *)&v34.timescale, v34.epoch));
      v29 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                v28,
                "objectForKeyedSubscript:",
                CFSTR("PAMediaConversionServiceOptionAVIncludeMetadataKey")));
      v30 = (unsigned int)objc_msgSend(v29, "boolValue");
      objc_release(v29);
      objc_release(v28);
      if ( v30 )
        -[ExportSessionVideoTranscodingTask addOutputMetadataFromOptionsAndInputAsset:toExportSession:](
          self,
          "addOutputMetadataFromOptionsAndInputAsset:toExportSession:",
          v7,
          v37[5]);
      objc_msgSend((id)v37[5], "setShouldOptimizeForNetworkUse:", 1LL);
      objc_msgSend((id)v37[5], "setAudioTimePitchAlgorithm:", AVAudioTimePitchAlgorithmVarispeed);
      -[ExportSessionVideoTranscodingTask configureOutputForExportSession:outputFileType:](
        self,
        "configureOutputForExportSession:outputFileType:",
        v37[5],
        v9);
      -[ExportSessionVideoTranscodingTask startExportSession:](self, "startExportSession:", v37[5]);
      objc_release(v26);
    }
LABEL_28:
    objc_release(v9);
    goto LABEL_29;
  }
  -[ExportSessionVideoTranscodingTask performMetadataTrackExtractionConversion](
    self,
    "performMetadataTrackExtractionConversion");
LABEL_32:
  objc_release(v3);
}