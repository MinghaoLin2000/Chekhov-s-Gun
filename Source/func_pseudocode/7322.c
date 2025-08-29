-[ImageConversionService conversionQueue:processNextEntry:]
void __cdecl -[ImageConversionService conversionQueue:processNextEntry:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x22
  id v7; // x23
  void *v8; // x24
  void *v9; // x0
  void *v10; // x25
  void *v11; // x20
  id v12; // x19
  id v13; // x26
  id v14; // x27
  void *v15; // x19
  void *v16; // x20
  _BOOL8 v17; // x25
  id v18; // x24
  id v19; // x28
  id v20; // x22
  id v21; // x21
  id v22; // x5
  void *v23; // x20
  void *v24; // x0
  void *v25; // x21
  __int64 v26; // x19
  void *i; // x26
  void *v28; // x27
  void *v29; // x20
  void *v30; // x25
  void *v31; // x0
  void *v32; // x28
  void *v33; // x23
  void *v34; // x22
  void *v35; // x24
  void *v36; // x0
  id v37; // [xsp+8h] [xbp-1C8h]
  id v38; // [xsp+10h] [xbp-1C0h]
  id v39; // [xsp+18h] [xbp-1B8h]
  id v40; // [xsp+20h] [xbp-1B0h]
  void *v41; // [xsp+28h] [xbp-1A8h]
  id v42; // [xsp+30h] [xbp-1A0h]
  id v43; // [xsp+38h] [xbp-198h]
  id obj; // [xsp+40h] [xbp-190h]
  _BOOL4 v45; // [xsp+4Ch] [xbp-184h]
  id v46; // [xsp+50h] [xbp-180h]
  ImageConversionService *v47; // [xsp+58h] [xbp-178h]
  __int128 v48; // [xsp+60h] [xbp-170h] BYREF
  __int128 v49; // [xsp+70h] [xbp-160h]
  __int128 v50; // [xsp+80h] [xbp-150h]
  __int128 v51; // [xsp+90h] [xbp-140h]
  id v52; // [xsp+A8h] [xbp-128h] BYREF
  id v53; // [xsp+B0h] [xbp-120h] BYREF
  id v54; // [xsp+B8h] [xbp-118h] BYREF
  id v55; // [xsp+C0h] [xbp-110h] BYREF
  id v56; // [xsp+C8h] [xbp-108h] BYREF
  uint8_t v57[128]; // [xsp+D0h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+150h] [xbp-80h] BYREF
  id v59; // [xsp+154h] [xbp-7Ch]
  __int16 v60; // [xsp+15Ch] [xbp-74h]
  id v61; // [xsp+15Eh] [xbp-72h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "initialRequestConversionOptions"));
  v47 = self;
  -[ImageConversionService performBeginRequestActionsForUnitTestSupportOptions:](
    self,
    "performBeginRequestActionsForUnitTestSupportOptions:",
    v8);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "anyDestinationURLCollectionForQueueEntry:", v7));
  v43 = v6;
  v40 = v9;
  v41 = v8;
  if ( !v9 )
  {
    v14 = 0LL;
    v13 = 0LL;
    goto LABEL_5;
  }
  v10 = v9;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "identifier"));
  v56 = 0LL;
  v12 = objc_retainAutoreleasedReturnValue(
          +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryFilesDirectoryURLForConversionTaskIdentifier:error:](
            &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
            "temporaryFilesDirectoryURLForConversionTaskIdentifier:error:",
            v11,
            &v56));
  v13 = objc_retain(v56);
  objc_release(v11);
  if ( v12 )
  {
    v14 = objc_retainAutoreleasedReturnValue(
            +[PAMediaConversionServiceSharedUtilitiesServiceSide temporaryDestinationURLCollectionForFinalDestinationURLCollection:inParentDirectoryURL:](
              &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
              "temporaryDestinationURLCollectionForFinalDestinationURLCollection:inParentDirectoryURL:",
              v10,
              v12));
    objc_msgSend(v7, "setTemporaryFilesParentDirectoryURL:", v12);
    objc_release(v12);
LABEL_5:
    v15 = objc_autoreleasePoolPush();
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "sourceURLCollection"));
    v54 = 0LL;
    v55 = 0LL;
    v52 = v13;
    v53 = 0LL;
    v17 = -[ImageConversionService convertImageWithOptions:sourceURLCollection:outputURLCollection:outputData:outputFileType:outputImageInfo:error:](
            v47,
            "convertImageWithOptions:sourceURLCollection:outputURLCollection:outputData:outputFileType:outputImageInfo:error:",
            v8,
            v16,
            v14,
            &v55,
            &v54,
            &v53,
            &v52);
    v18 = objc_retain(v55);
    v19 = objc_retain(v54);
    v20 = objc_retain(v53);
    v21 = objc_retain(v52);
    objc_release(v13);
    objc_release(v16);
    objc_autoreleasePoolPop(v15);
    v22 = v20;
    v23 = v21;
    v6 = v43;
    goto LABEL_8;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138543618;
    v59 = v7;
    v60 = 2112;
    v23 = v13;
    v61 = v13;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to create temporary files directory for request %{public}@: %@",
      buf,
      0x16u);
    v14 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v22 = 0LL;
    v19 = 0LL;
  }
  else
  {
    v14 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v22 = 0LL;
    v19 = 0LL;
    v23 = v13;
  }
LABEL_8:
  v37 = v22;
  v42 = v7;
  v38 = v19;
  v39 = v14;
  v45 = v17;
  v46 = v18;
  v48 = 0u;
  v49 = 0u;
  v50 = 0u;
  v51 = 0u;
  obj = objc_retain(
          objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v6,
              "markCompletionAndRetrieveClientRequestsForQueueEntry:resultURLCollection:didConvertSuccessfully:conversion"
              "OutputInformation:conversionOutputData:conversionOutputFileType:conversionError:",
              v7,
              v14,
              v17,
              v23)));
  v24 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v57, 16LL);
  if ( v24 )
  {
    v25 = v24;
    v26 = *(_QWORD *)v49;
    do
    {
      for ( i = 0LL; i != v25; i = (char *)i + 1 )
      {
        v28 = v23;
        if ( *(_QWORD *)v49 != v26 )
          objc_enumerationMutation(obj);
        v29 = *(void **)(*((_QWORD *)&v48 + 1) + 8LL * (_QWORD)i);
        v30 = objc_autoreleasePoolPush();
        v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "requestTracker"));
        v32 = v31;
        if ( v45 )
          v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "outputInformation"));
        else
          v33 = 0LL;
        v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "imageClientReplyHandler"));
        v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "identifier"));
        v36 = objc_msgSend(v29, "signpostID");
        v23 = v28;
        -[ImageConversionService replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:](
          v47,
          "replyToCompletionHandler:requestIdentifier:resultData:resultImageInformation:signpostID:error:",
          v34,
          v35,
          v46,
          v33,
          v36,
          v28);
        objc_release(v35);
        objc_release(v34);
        objc_release(v33);
        objc_release(v32);
        objc_autoreleasePoolPop(v30);
      }
      v25 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v48, v57, 16LL);
    }
    while ( v25 );
  }
  objc_release(obj);
  -[ImageConversionService performEndRequestActionsForUnitTestSupportOptions:](
    v47,
    "performEndRequestActionsForUnitTestSupportOptions:",
    v41);
  objc_release(obj);
  objc_release(v38);
  objc_release(v37);
  objc_release(v46);
  objc_release(v23);
  objc_release(v39);
  objc_release(v40);
  objc_release(v41);
  objc_release(v42);
  objc_release(v43);
}