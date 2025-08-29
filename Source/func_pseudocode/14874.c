-[AppStoreService startOperation:toFetchAppStoreIconsForAppBundleIDs:desiredSizeToScale:completionHandler:]
void __cdecl -[AppStoreService startOperation:toFetchAppStoreIconsForAppBundleIDs:desiredSizeToScale:completionHandler:](
        AppStoreService *self,
        SEL a2,
        id a3,
        id a4,
        CGSize a5,
        id a6)
{
  double height; // d8
  double width; // d9
  id v10; // x21
  void *v11; // x19
  void *v12; // x20
  void *v13; // x21
  NSArray *v14; // x22
  os_log_s *v15; // x22
  id v16; // x0
  void *v17; // x23
  void *v18; // x24
  id v19; // x0
  void *v20; // x22
  os_log_s *v21; // x25
  id v22; // x0
  dispatch_group_t v23; // x19
  void *v24; // x0
  void *i; // x23
  void *v26; // x0
  void *v27; // x28
  void *v28; // x21
  void *v29; // x24
  void *v30; // x22
  void *v31; // x25
  void *v32; // x27
  void *v33; // x0
  void *v34; // x19
  os_log_s *v35; // x20
  NSURLSession *v36; // x20
  _QWORD *v37; // x21
  NSURLSessionDownloadTask *v38; // x26
  dispatch_queue_s *v39; // x19
  id v40; // [xsp+8h] [xbp-308h]
  id v41; // [xsp+10h] [xbp-300h]
  void (**v42)(void); // [xsp+18h] [xbp-2F8h]
  __int64 v43; // [xsp+30h] [xbp-2E0h]
  id v44; // [xsp+38h] [xbp-2D8h]
  dispatch_group_s *group; // [xsp+58h] [xbp-2B8h]
  id v46; // [xsp+60h] [xbp-2B0h]
  id obj; // [xsp+68h] [xbp-2A8h]
  __int64 v48; // [xsp+70h] [xbp-2A0h]
  __int64 v49; // [xsp+78h] [xbp-298h]
  __int64 v50; // [xsp+80h] [xbp-290h]
  void *v51; // [xsp+88h] [xbp-288h]
  id v52; // [xsp+90h] [xbp-280h]
  _QWORD block[4]; // [xsp+98h] [xbp-278h] BYREF
  id v54; // [xsp+B8h] [xbp-258h]
  _QWORD v55[4]; // [xsp+C0h] [xbp-250h] BYREF
  id v56; // [xsp+E0h] [xbp-230h]
  id v57; // [xsp+E8h] [xbp-228h]
  id v58; // [xsp+F0h] [xbp-220h]
  bool v59; // [xsp+F8h] [xbp-218h]
  __int128 v60; // [xsp+100h] [xbp-210h] BYREF
  __int128 v61; // [xsp+110h] [xbp-200h]
  __int128 v62; // [xsp+120h] [xbp-1F0h]
  __int128 v63; // [xsp+130h] [xbp-1E0h]
  id v64; // [xsp+140h] [xbp-1D0h] BYREF
  _QWORD v65[5]; // [xsp+148h] [xbp-1C8h] BYREF
  _QWORD v66[5]; // [xsp+170h] [xbp-1A0h] BYREF
  id v67; // [xsp+198h] [xbp-178h]
  uint8_t buf[4]; // [xsp+1A0h] [xbp-170h] BYREF
  void *v69; // [xsp+1A4h] [xbp-16Ch]
  __int16 v70; // [xsp+1ACh] [xbp-164h]
  double v71; // [xsp+1AEh] [xbp-162h]
  __int16 v72; // [xsp+1B6h] [xbp-15Ah]
  double v73; // [xsp+1B8h] [xbp-158h]
  __int16 v74; // [xsp+1C0h] [xbp-150h]
  __int64 v75; // [xsp+1C2h] [xbp-14Eh]
  uint8_t v76[128]; // [xsp+1D0h] [xbp-140h] BYREF
  uint8_t v77[16]; // [xsp+250h] [xbp-C0h] BYREF
  uint8_t v78[16]; // [xsp+260h] [xbp-B0h] BYREF
  _QWORD v79[3]; // [xsp+270h] [xbp-A0h] BYREF

  height = a5.height;
  width = a5.width;
  v10 = objc_retain(a3);
  v44 = objc_retain(a4);
  v42 = (void (**)(void))objc_retain(a6);
  v66[0] = 0LL;
  v66[1] = v66;
  v66[2] = 0x3032000000LL;
  v66[3] = sub_1000028F4;
  v66[4] = sub_100002904;
  v67 = 0LL;
  v65[0] = _NSConcreteStackBlock;
  v65[1] = 3254779904LL;
  v65[2] = sub_10000290C;
  v65[3] = &unk_100004160;
  v65[4] = v66;
  v40 = v10;
  v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "remoteObjectProxyWithErrorHandler:", v65));
  v11 = objc_autoreleasePoolPush();
  v12 = objc_retainAutoreleasedReturnValue(
          +[AMSBag bagForProfile:profileVersion:](
            &OBJC_CLASS___AMSBag,
            "bagForProfile:profileVersion:",
            CFSTR("fileproviderd"),
            CFSTR("1")));
  v13 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___AMSMediaTask),
          "initWithType:clientIdentifier:clientVersion:bag:",
          0LL,
          CFSTR("com.apple.FileProvider"),
          CFSTR("1"),
          v12);
  v79[0] = AMSMediaTaskPlatformiPad;
  v79[1] = AMSMediaTaskPlatformiPhone;
  v79[2] = AMSMediaTaskPlatformMac;
  v14 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v79, 3LL));
  objc_msgSend(v13, "setAdditionalPlatforms:", v14);
  objc_release(v14);
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)fp_current_or_default_log(objc_msgSend(v13, "setBundleIdentifiers:", v44)));
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
  {
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v44, "componentsJoinedByString:", CFSTR(", ")));
    sub_100002DE0((int)v16, v78, v15);
  }
  objc_release(v15);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "perform"));
  v64 = 0LL;
  v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "resultWithTimeout:error:", &v64, 30.0));
  v19 = objc_retain(v64);
  v20 = v19;
  if ( v19 )
  {
    v21 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)fp_current_or_default_log(v19));
    if ( os_log_type_enabled(v21, OS_LOG_TYPE_ERROR) )
    {
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "fp_prettyDescription"));
      sub_100002D84((int)v22, v77, v21);
    }
    objc_release(v21);
    v42[2]();
    v41 = 0LL;
  }
  else
  {
    v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "responseDataItems"));
  }
  objc_release(v18);
  objc_release(v20);
  objc_release(v17);
  objc_release(v13);
  objc_release(v12);
  objc_autoreleasePoolPop(v11);
  if ( !v20 )
  {
    v23 = dispatch_group_create();
    v60 = 0u;
    v61 = 0u;
    v62 = 0u;
    v63 = 0u;
    obj = objc_retain(v41);
    v24 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v60, v76, 16LL);
    group = v23;
    if ( v24 )
    {
      v49 = AMSMediaArtworkCropStyleBoundedBox;
      v50 = *(_QWORD *)v61;
      v48 = AMSMediaArtworkFormatPNG;
      v43 = AMSLookupItemArtworkFormatPNG;
      do
      {
        v51 = v24;
        for ( i = 0LL; i != v51; i = (char *)i + 1 )
        {
          if ( *(_QWORD *)v61 != v50 )
            objc_enumerationMutation(obj);
          v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(*(id *)(*((_QWORD *)&v60 + 1) + 8LL * (_QWORD)i), "objectForKey:", CFSTR("attributes")));
          v27 = v26;
          if ( v26 )
          {
            v52 = objc_retainAutoreleasedReturnValue(objc_msgSend(v26, "objectForKey:", CFSTR("platformAttributes")));
            v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v52, "objectForKey:", CFSTR("osx")));
            v29 = v28;
            if ( !v28 )
              v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v52, "objectForKey:", CFSTR("ios")));
            v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "objectForKey:", CFSTR("bundleId")));
            v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v29, "objectForKey:", CFSTR("artwork")));
            v32 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___AMSMediaArtwork), "initWithDictionary:", v31);
            v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "URLWithSize:cropStyle:format:", v49, v48, width, height));
            v34 = v33;
            if ( v33 )
            {
              v35 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)fp_current_or_default_log(v33));
              if ( os_log_type_enabled(v35, OS_LOG_TYPE_DEBUG) )
              {
                *(_DWORD *)buf = 138412290;
                v69 = v30;
                _os_log_debug_impl(
                  (void *)&_mh_execute_header,
                  v35,
                  OS_LOG_TYPE_DEBUG,
                  "[DEBUG] fetching remote icon for %@...",
                  buf,
                  0xCu);
              }
              objc_release(v35);
              dispatch_group_enter(group);
              v36 = objc_retainAutoreleasedReturnValue(+[NSURLSession sharedSession](&OBJC_CLASS___NSURLSession, "sharedSession"));
              v55[0] = _NSConcreteStackBlock;
              v55[1] = 3254779904LL;
              v55[2] = sub_1000029A4;
              v55[3] = &unk_1000041C0;
              v56 = objc_retain(v30);
              v59 = v28 == 0LL;
              v57 = objc_retain(v46);
              v58 = objc_retain(group);
              v37 = objc_retainBlock(v55);
              v38 = objc_retainAutoreleasedReturnValue(
                      -[NSURLSession downloadTaskWithURL:completionHandler:](
                        v36,
                        "downloadTaskWithURL:completionHandler:",
                        v34,
                        v37));
              -[NSURLSessionDownloadTask resume](v38, "resume");
              objc_release(v38);
              objc_release(v37);
              objc_release(v58);
              objc_release(v57);
              objc_release(v56);
            }
            else
            {
              v36 = (NSURLSession *)objc_retainAutoreleasedReturnValue((id)fp_current_or_default_log(0LL));
              if ( os_log_type_enabled((os_log_t)v36, OS_LOG_TYPE_DEBUG) )
              {
                *(_DWORD *)buf = 138413058;
                v69 = v30;
                v70 = 2048;
                v71 = width;
                v72 = 2048;
                v73 = height;
                v74 = 2112;
                v75 = v43;
                _os_log_debug_impl(
                  (void *)&_mh_execute_header,
                  (os_log_t)v36,
                  OS_LOG_TYPE_DEBUG,
                  "[DEBUG] can't craft URL for %@ (s:%.2fx%.2f, format:%@)",
                  buf,
                  0x2Au);
              }
            }
            objc_release(v36);
            objc_release(v34);
            objc_release(v32);
            objc_release(v31);
            objc_release(v30);
            objc_release(v29);
            objc_release(v52);
          }
          objc_release(v27);
        }
        v24 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v60, v76, 16LL);
      }
      while ( v24 );
    }
    objc_release(obj);
    if ( qword_100008778 != -1 )
      dispatch_once(&qword_100008778, &stru_100004240);
    v39 = (dispatch_queue_s *)qword_100008780;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100002CE0;
    block[3] = &unk_1000041F0;
    v54 = objc_retain(v42);
    dispatch_group_notify(group, v39, block);
    objc_release(v54);
    objc_release(group);
  }
  objc_release(v41);
  objc_release(v46);
  _Block_object_dispose(v66, 8);
  objc_release(v67);
  objc_release(v42);
  objc_release(v44);
  objc_release(v40);
}