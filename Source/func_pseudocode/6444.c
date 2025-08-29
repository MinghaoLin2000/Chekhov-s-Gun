-[ExportSessionVideoTranscodingTask performMetadataTrackExtractionConversion]
void __cdecl -[ExportSessionVideoTranscodingTask performMetadataTrackExtractionConversion](
        ExportSessionVideoTranscodingTask *self,
        SEL a2)
{
  NSString *v3; // x21
  AVAsset *v4; // x22
  void *v5; // x19
  __int64 v6; // x1
  void *v7; // x22
  AVAsset *v8; // x23
  void *v9; // x22
  id v10; // x23
  void *v11; // x0
  void *v12; // x28
  __int64 v13; // x20
  void *i; // x21
  void *v15; // x26
  const char *v16; // x1
  id v17; // x25
  unsigned __int8 v18; // w19
  id v19; // x0
  void *v20; // x27
  NSString *v21; // x24
  NSDictionary *v22; // x28
  NSError *v23; // x19
  NSString *v24; // x23
  NSDictionary *v25; // x24
  NSError *v26; // x22
  AVAsset *v27; // x22
  AVAsset *v28; // x19
  void *v29; // [xsp+8h] [xbp-1F8h]
  NSString *v30; // [xsp+10h] [xbp-1F0h]
  ExportSessionVideoTranscodingTask *v31; // [xsp+18h] [xbp-1E8h]
  __int128 v32; // [xsp+20h] [xbp-1E0h] BYREF
  __int64 v33; // [xsp+30h] [xbp-1D0h]
  id v34; // [xsp+38h] [xbp-1C8h] BYREF
  __int128 v35; // [xsp+40h] [xbp-1C0h] BYREF
  __int128 v36; // [xsp+50h] [xbp-1B0h]
  __int128 v37; // [xsp+60h] [xbp-1A0h]
  __int128 v38; // [xsp+70h] [xbp-190h]
  _QWORD v39[2]; // [xsp+80h] [xbp-180h] BYREF
  _QWORD v40[2]; // [xsp+90h] [xbp-170h] BYREF
  _BYTE v41[32]; // [xsp+A0h] [xbp-160h] BYREF
  __int128 v42; // [xsp+C0h] [xbp-140h]
  uint8_t buf[32]; // [xsp+D0h] [xbp-130h] BYREF
  __int128 v44; // [xsp+F0h] [xbp-110h]
  _BYTE v45[128]; // [xsp+108h] [xbp-F8h] BYREF
  NSErrorUserInfoKey v46; // [xsp+188h] [xbp-78h] BYREF
  NSString *v47; // [xsp+190h] [xbp-70h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask identifier](self, "identifier"));
  v4 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[PFMediaUtilities tracksWithMediaType:forAsset:](
           &OBJC_CLASS___PFMediaUtilities,
           "tracksWithMediaType:forAsset:",
           AVMediaTypeMetadata,
           v4));
  objc_release(v4);
  if ( objc_msgSend(v5, "count") )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
    {
      v7 = objc_msgSend(v5, "count");
      v8 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
      *(_DWORD *)buf = 138543874;
      *(_QWORD *)&buf[4] = v3;
      *(_WORD *)&buf[12] = 2048;
      *(_QWORD *)&buf[14] = v7;
      *(_WORD *)&buf[22] = 2112;
      *(_QWORD *)&buf[24] = v8;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "Metadata track extraction job %{public}@: found %lu input metadata tracks in asset %@",
        buf,
        0x20u);
      objc_release(v8);
    }
    v30 = v3;
    v31 = self;
    v9 = (void *)objc_opt_new(&OBJC_CLASS___AVMutableComposition, v6);
    v35 = 0u;
    v36 = 0u;
    v37 = 0u;
    v38 = 0u;
    v29 = v5;
    v10 = objc_retain(v5);
    v11 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v35, v45, 16LL);
    if ( v11 )
    {
      v12 = v11;
      v13 = *(_QWORD *)v36;
      while ( 2 )
      {
        for ( i = 0LL; i != v12; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v36 != v13 )
            objc_enumerationMutation(v10);
          v15 = *(void **)(*((_QWORD *)&v35 + 1) + 8LL * (_QWORD)i);
          v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "addMutableTrackWithMediaType:preferredTrackID:", AVMediaTypeMetadata, 0LL));
          v44 = 0u;
          memset(buf, 0, sizeof(buf));
          if ( v15 )
            objc_msgSend_timeRange(buf, v15, v16);
          *(_OWORD *)v41 = *(_OWORD *)buf;
          *(_OWORD *)&v41[16] = *(_OWORD *)&buf[16];
          v42 = v44;
          v32 = *(_OWORD *)buf;
          v33 = *(_QWORD *)&buf[16];
          v34 = 0LL;
          v18 = (unsigned __int8)objc_msgSend(v17, "insertTimeRange:ofTrack:atTime:error:", v41, v15, &v32, &v34);
          v19 = objc_retain(v34);
          v20 = v19;
          if ( (v18 & 1) == 0 )
          {
            -[VideoConversionTask setStatus:](v31, "setStatus:", 2LL);
            v39[0] = NSLocalizedDescriptionKey;
            v3 = v30;
            v21 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithFormat:](
                      &OBJC_CLASS___NSString,
                      "stringWithFormat:",
                      CFSTR("Unable to create export session for job %@"),
                      v30));
            v39[1] = NSUnderlyingErrorKey;
            v40[0] = v21;
            v40[1] = v20;
            v22 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      v40,
                      v39,
                      2LL));
            v23 = objc_retainAutoreleasedReturnValue(
                    +[NSError errorWithDomain:code:userInfo:](
                      &OBJC_CLASS___NSError,
                      "errorWithDomain:code:userInfo:",
                      CFSTR("PAMediaConversionServiceErrorDomain"),
                      8LL,
                      v22));
            -[VideoConversionTask setError:](v31, "setError:", v23);
            objc_release(v23);
            objc_release(v22);
            objc_release(v21);
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            {
              v28 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](v31, "asset"));
              *(_DWORD *)v41 = 138544130;
              *(_QWORD *)&v41[4] = v30;
              *(_WORD *)&v41[12] = 2114;
              *(_QWORD *)&v41[14] = v15;
              *(_WORD *)&v41[22] = 2112;
              *(_QWORD *)&v41[24] = v28;
              LOWORD(v42) = 2114;
              *(_QWORD *)((char *)&v42 + 2) = v20;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_ERROR,
                "Metadata track extraction job %{public}@: Unable to insert metadata track %{public}@ of input asset %@: %{public}@",
                v41,
                0x2Au);
              objc_release(v28);
            }
            -[VideoTranscodingTask callCompletionHandler](v31, "callCompletionHandler");
            objc_release(v20);
            goto LABEL_21;
          }
          objc_release(v19);
          objc_release(v17);
        }
        v12 = objc_msgSend(v10, "countByEnumeratingWithState:objects:count:", &v35, v45, 16LL);
        if ( v12 )
          continue;
        break;
      }
    }
    objc_release(v10);
    v10 = objc_retainAutoreleasedReturnValue(
            -[ExportSessionVideoTranscodingTask exportSessionForInputAsset:presetName:](
              v31,
              "exportSessionForInputAsset:presetName:",
              v9,
              AVAssetExportPresetPassthrough));
    if ( v10 )
    {
      v17 = objc_retainAutoreleasedReturnValue(
              -[ExportSessionVideoTranscodingTask outputFileTypeForExportSession:](
                v31,
                "outputFileTypeForExportSession:",
                v10));
      if ( v17 )
      {
        -[ExportSessionVideoTranscodingTask configureOutputForExportSession:outputFileType:](
          v31,
          "configureOutputForExportSession:outputFileType:",
          v10,
          v17);
        -[ExportSessionVideoTranscodingTask startExportSession:](v31, "startExportSession:", v10);
      }
      v3 = v30;
LABEL_21:
      v5 = v29;
      objc_release(v17);
    }
    else
    {
      v5 = v29;
      v3 = v30;
    }
    objc_release(v10);
    objc_release(v9);
  }
  else
  {
    -[VideoConversionTask setStatus:](self, "setStatus:", 2LL);
    v46 = NSLocalizedDescriptionKey;
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithFormat:](
              &OBJC_CLASS___NSString,
              "stringWithFormat:",
              CFSTR("Metadata track extraction for job %@ failed because the input video has no metadata tracks"),
              v3));
    v47 = v24;
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v47,
              &v46,
              1LL));
    v26 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              7LL,
              v25));
    -[VideoConversionTask setError:](self, "setError:", v26);
    objc_release(v26);
    objc_release(v25);
    objc_release(v24);
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      v27 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
      *(_DWORD *)buf = 138543618;
      *(_QWORD *)&buf[4] = v3;
      *(_WORD *)&buf[12] = 2112;
      *(_QWORD *)&buf[14] = v27;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Metadata track extraction job %{public}@: input asset has no metadata tracks: %@",
        buf,
        0x16u);
      objc_release(v27);
    }
    -[VideoTranscodingTask callCompletionHandler](self, "callCompletionHandler");
  }
  objc_release(v5);
  objc_release(v3);
}