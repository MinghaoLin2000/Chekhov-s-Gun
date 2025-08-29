+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]
void __cdecl +[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x23
  id v12; // x21
  id v13; // x23
  __int64 v14; // x19
  void *v15; // x20
  NSString *v16; // x19
  NSString *v17; // x21
  __int64 v18; // x19
  void *v19; // x20
  NSString *v20; // x19
  NSString *v21; // x21
  __int64 v22; // x19
  void *v23; // x20
  NSString *v24; // x19
  NSString *v25; // x21
  __int64 v26; // x19
  void *v27; // x20
  NSString *v28; // x19
  NSString *v29; // x21
  id v30; // x0
  void *v31; // x0
  void *v32; // x19
  void *v33; // x20
  void *v34; // x20
  NSFileManager *v35; // x19
  NSArray *v36; // x21
  NSDirectoryEnumerator *v37; // x20
  void *v38; // x19
  __int64 v39; // x20
  void *v40; // x23
  void *v41; // x28
  unsigned int v42; // w21
  id v43; // x0
  void *v44; // x24
  unsigned int v45; // w21
  id v46; // x0
  void *v47; // x27
  unsigned int v48; // w27
  os_log_s *v49; // x21
  NSString *v50; // x27
  NSString *v51; // x22
  void *v52; // x20
  void *v53; // x0
  void *v54; // x21
  void *i; // x19
  void *v56; // x24
  void *v57; // x23
  void *v58; // x26
  void *v59; // x20
  void *v60; // x23
  void *v61; // x26
  TSUFileIOChannel *v62; // x0
  id *v63; // x27
  id v64; // x26
  unsigned __int8 v65; // w27
  id v66; // x0
  void *v67; // x28
  unsigned __int8 v68; // w27
  id v69; // x0
  void *v70; // x24
  void *v71; // x27
  id v72; // [xsp+8h] [xbp-3C8h]
  id v73; // [xsp+10h] [xbp-3C0h]
  id v74; // [xsp+18h] [xbp-3B8h]
  id v75; // [xsp+20h] [xbp-3B0h]
  dispatch_queue_s *queue; // [xsp+28h] [xbp-3A8h]
  id v77; // [xsp+30h] [xbp-3A0h]
  char *v78; // [xsp+38h] [xbp-398h]
  id v79; // [xsp+58h] [xbp-378h]
  TSUZipFileWriter *v80; // [xsp+60h] [xbp-370h]
  id v81; // [xsp+68h] [xbp-368h]
  id v82; // [xsp+70h] [xbp-360h]
  id v83; // [xsp+70h] [xbp-360h]
  __int64 v84; // [xsp+80h] [xbp-350h]
  NSDirectoryEnumerator *obj; // [xsp+88h] [xbp-348h]
  _QWORD v86[4]; // [xsp+90h] [xbp-340h] BYREF
  id v87; // [xsp+B0h] [xbp-320h]
  uint8_t *v88; // [xsp+B8h] [xbp-318h]
  __int64 v89; // [xsp+C0h] [xbp-310h]
  _QWORD v90[4]; // [xsp+C8h] [xbp-308h] BYREF
  id v91; // [xsp+E8h] [xbp-2E8h]
  _QWORD *v92; // [xsp+F0h] [xbp-2E0h]
  uint8_t *v93; // [xsp+F8h] [xbp-2D8h]
  __int64 v94; // [xsp+100h] [xbp-2D0h]
  id v95; // [xsp+108h] [xbp-2C8h] BYREF
  id v96; // [xsp+110h] [xbp-2C0h] BYREF
  id v97; // [xsp+118h] [xbp-2B8h] BYREF
  __int128 v98; // [xsp+120h] [xbp-2B0h] BYREF
  __int128 v99; // [xsp+130h] [xbp-2A0h]
  __int128 v100; // [xsp+140h] [xbp-290h]
  __int128 v101; // [xsp+150h] [xbp-280h]
  id v102; // [xsp+160h] [xbp-270h] BYREF
  id v103; // [xsp+168h] [xbp-268h] BYREF
  __int128 v104; // [xsp+170h] [xbp-260h] BYREF
  __int128 v105; // [xsp+180h] [xbp-250h]
  __int128 v106; // [xsp+190h] [xbp-240h]
  __int128 v107; // [xsp+1A0h] [xbp-230h]
  _QWORD v108[4]; // [xsp+1B8h] [xbp-218h] BYREF
  _QWORD block[4]; // [xsp+1D8h] [xbp-1F8h] BYREF
  id v110; // [xsp+1F8h] [xbp-1D8h]
  id v111; // [xsp+200h] [xbp-1D0h]
  id v112; // [xsp+208h] [xbp-1C8h] BYREF
  uint8_t v113[128]; // [xsp+210h] [xbp-1C0h] BYREF
  uint8_t buf[8]; // [xsp+290h] [xbp-140h] BYREF
  _BYTE v115[40]; // [xsp+298h] [xbp-138h]
  _BYTE v116[128]; // [xsp+2C8h] [xbp-108h] BYREF
  _QWORD v117[2]; // [xsp+348h] [xbp-88h] BYREF

  v11 = objc_retain(a3);
  v79 = objc_retain(a4);
  v12 = objc_retain(a5);
  queue = (dispatch_queue_s *)objc_retain(a6);
  v81 = objc_retain(a7);
  v75 = v11;
  if ( !v11 )
  {
    v13 = v12;
    v14 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCD78);
    v15 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F3D8(v14, v15);
    v16 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]"));
    v17 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v16,
      v17,
      199LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "directoryURL");
    objc_release(v17);
    objc_release(v16);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
    v12 = v13;
  }
  v74 = v12;
  if ( !v12 )
  {
    v18 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCD98);
    v19 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F344(v18, v19);
    v20 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]"));
    v21 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v20,
      v21,
      200LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "URL");
    objc_release(v21);
    objc_release(v20);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( !queue )
  {
    v22 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCDB8);
    v23 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F2B0(v22, v23);
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]"));
    v25 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v24,
      v25,
      201LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "queue");
    objc_release(v25);
    objc_release(v24);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  if ( !v81 )
  {
    v26 = +[TSUAssertionHandler _atomicIncrementAssertCount](
            &OBJC_CLASS___TSUAssertionHandler,
            "_atomicIncrementAssertCount");
    if ( TSUAssertCat_init_token != -1 )
      dispatch_once(&TSUAssertCat_init_token, &stru_1001DCDD8);
    v27 = TSUAssertCat_log_t;
    if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
      sub_10016F21C(v26, v27);
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]"));
    v29 = objc_retainAutoreleasedReturnValue(
            +[NSString stringWithUTF8String:](
              &OBJC_CLASS___NSString,
              "stringWithUTF8String:",
              "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Source"
              "s/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
    +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
      &OBJC_CLASS___TSUAssertionHandler,
      "handleFailureInFunction:file:lineNumber:isFatal:description:",
      v28,
      v29,
      202LL,
      0LL,
      "invalid nil value for '%{public}s'",
      "progressHandler");
    objc_release(v29);
    objc_release(v28);
    +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
  }
  v112 = 0LL;
  v80 = -[TSUZipFileWriter initWithURL:error:](
          objc_alloc(&OBJC_CLASS___TSUZipFileWriter),
          "initWithURL:error:",
          v74,
          &v112);
  v30 = objc_retain(v112);
  v73 = v30;
  if ( v80 )
  {
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v75, "path"));
    v32 = v31;
    if ( !v79 )
    {
      v33 = objc_retainAutoreleasedReturnValue(objc_msgSend(v31, "stringByDeletingLastPathComponent"));
      objc_release(v32);
      v32 = v33;
    }
    v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "stringByStandardizingPath"));
    v72 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "precomposedStringWithCanonicalMapping"));
    objc_release(v32);
    objc_release(v34);
    v78 = (char *)objc_msgSend(v72, "length");
    v35 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v117[0] = NSURLIsDirectoryKey;
    v117[1] = NSURLFileSizeKey;
    v36 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v117, 2LL));
    v37 = objc_retainAutoreleasedReturnValue(
            -[NSFileManager enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:](
              v35,
              "enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:",
              v75,
              v36,
              0LL,
              0LL));
    objc_release(v36);
    objc_release(v35);
    v108[0] = 0LL;
    v108[1] = v108;
    v108[2] = 0x2020000000LL;
    v108[3] = 0LL;
    v82 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
    v106 = 0u;
    v107 = 0u;
    v104 = 0u;
    v105 = 0u;
    obj = objc_retain(v37);
    v38 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
            obj,
            "countByEnumeratingWithState:objects:count:",
            &v104,
            v116,
            16LL);
    if ( v38 )
    {
      v84 = 0LL;
      v39 = *(_QWORD *)v105;
      do
      {
        v40 = 0LL;
        do
        {
          if ( *(_QWORD *)v105 != v39 )
            objc_enumerationMutation(obj);
          v41 = *(void **)(*((_QWORD *)&v104 + 1) + 8LL * (_QWORD)v40);
          v103 = 0LL;
          v42 = (unsigned int)objc_msgSend(v41, "getResourceValue:forKey:error:", &v103, NSURLIsDirectoryKey, 0LL);
          v43 = objc_retain(v103);
          v44 = v43;
          if ( v42 )
          {
            if ( ((unsigned int)objc_msgSend(v43, "boolValue") & 1) == 0 )
            {
              v102 = 0LL;
              v45 = (unsigned int)objc_msgSend(v41, "getResourceValue:forKey:error:", &v102, NSURLFileSizeKey, 0LL);
              v46 = objc_retain(v102);
              v47 = v46;
              if ( v45 )
                v84 += (__int64)objc_msgSend(v46, "unsignedLongLongValue");
              objc_msgSend(v82, "addObject:", v41);
              objc_release(v47);
            }
          }
          else
          {
            v48 = +[TSUAssertionHandler _atomicIncrementAssertCount](
                    &OBJC_CLASS___TSUAssertionHandler,
                    "_atomicIncrementAssertCount");
            if ( TSUAssertCat_init_token != -1 )
              dispatch_once(&TSUAssertCat_init_token, &stru_1001DCDF8);
            v49 = (os_log_s *)TSUAssertCat_log_t;
            if ( os_log_type_enabled((os_log_t)TSUAssertCat_log_t, OS_LOG_TYPE_ERROR) )
            {
              *(_DWORD *)buf = 67110146;
              *(_DWORD *)&buf[4] = v48;
              *(_WORD *)v115 = 2082;
              *(_QWORD *)&v115[2] = "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]";
              *(_WORD *)&v115[10] = 2082;
              *(_QWORD *)&v115[12] = "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Cach"
                                     "es/com.apple.xbs/Sources/iWorkXPC/shared/utility/TSUZipFileWriter.m";
              *(_WORD *)&v115[20] = 1024;
              *(_DWORD *)&v115[22] = 239;
              *(_WORD *)&v115[26] = 2112;
              *(_QWORD *)&v115[28] = v41;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                v49,
                OS_LOG_TYPE_ERROR,
                "#Assert *** Assertion failure #%u: %{public}s %{public}s:%d Failed to obtain resource value for %@",
                buf,
                0x2Cu);
            }
            v50 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "+[TSUZipFileWriter zipDirectoryAtURL:customDirectoryFilename:toURL:queue:progressHandler:]"));
            v51 = objc_retainAutoreleasedReturnValue(
                    +[NSString stringWithUTF8String:](
                      &OBJC_CLASS___NSString,
                      "stringWithUTF8String:",
                      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xb"
                      "s/Sources/iWorkXPC/shared/utility/TSUZipFileWriter.m"));
            +[TSUAssertionHandler handleFailureInFunction:file:lineNumber:isFatal:description:](
              &OBJC_CLASS___TSUAssertionHandler,
              "handleFailureInFunction:file:lineNumber:isFatal:description:",
              v50,
              v51,
              239LL,
              0LL,
              "Failed to obtain resource value for %@",
              v41);
            objc_release(v51);
            objc_release(v50);
            +[TSUAssertionHandler logBacktraceThrottled](&OBJC_CLASS___TSUAssertionHandler, "logBacktraceThrottled");
          }
          objc_release(v44);
          v40 = (char *)v40 + 1;
        }
        while ( v38 != v40 );
        v38 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
                obj,
                "countByEnumeratingWithState:objects:count:",
                &v104,
                v116,
                16LL);
      }
      while ( v38 );
    }
    else
    {
      v84 = 0LL;
    }
    objc_release(obj);
    *(_QWORD *)buf = 0LL;
    *(_QWORD *)v115 = buf;
    *(_QWORD *)&v115[8] = 0x3032000000LL;
    *(_QWORD *)&v115[16] = sub_10012BE18;
    *(_QWORD *)&v115[24] = sub_10012BE28;
    *(_QWORD *)&v115[32] = 0LL;
    v98 = 0u;
    v99 = 0u;
    v100 = 0u;
    v101 = 0u;
    v77 = objc_retain(v82);
    v54 = objc_msgSend(v77, "countByEnumeratingWithState:objects:count:", &v98, v113, 16LL);
    if ( v54 )
    {
      v83 = *(id *)v99;
      while ( 2 )
      {
        for ( i = 0LL; i != v54; i = (char *)i + 1 )
        {
          if ( *(id *)v99 != v83 )
            objc_enumerationMutation(v77);
          v56 = *(void **)(*((_QWORD *)&v98 + 1) + 8LL * (_QWORD)i);
          v57 = objc_retainAutoreleasedReturnValue(objc_msgSend(v56, "path"));
          v58 = objc_retainAutoreleasedReturnValue(objc_msgSend(v57, "stringByStandardizingPath"));
          v59 = objc_retainAutoreleasedReturnValue(objc_msgSend(v58, "precomposedStringWithCanonicalMapping"));
          objc_release(v58);
          objc_release(v57);
          v60 = objc_retainAutoreleasedReturnValue(objc_msgSend(v59, "substringFromIndex:", v78 + 1));
          if ( v79 )
          {
            v61 = objc_retainAutoreleasedReturnValue(objc_msgSend(v79, "stringByAppendingPathComponent:", v60));
            objc_release(v60);
            v60 = v61;
          }
          v62 = objc_alloc(&OBJC_CLASS___TSUFileIOChannel);
          v63 = (id *)(*(_QWORD *)v115 + 40LL);
          v97 = *(id *)(*(_QWORD *)v115 + 40LL);
          v64 = -[TSUFileIOChannel initForReadingURL:error:](v62, "initForReadingURL:error:", v56, &v97);
          objc_storeStrong(v63, v97);
          if ( !v64 )
          {
            objc_release(v60);
            objc_release(v59);
            goto LABEL_64;
          }
          v96 = 0LL;
          v65 = (unsigned __int8)objc_msgSend(v56, "getResourceValue:forKey:error:", &v96, NSURLFileSizeKey, 0LL);
          v66 = objc_retain(v96);
          v67 = v66;
          if ( (v65 & 1) == 0 )
          {
            objc_release(v66);
            v67 = 0LL;
          }
          v95 = 0LL;
          v68 = (unsigned __int8)objc_msgSend(
                                   v56,
                                   "getResourceValue:forKey:error:",
                                   &v95,
                                   NSURLContentModificationDateKey,
                                   0LL);
          v69 = objc_retain(v95);
          v70 = v69;
          if ( (v68 & 1) == 0 )
          {
            objc_release(v69);
            v70 = 0LL;
          }
          v71 = objc_msgSend(v67, "unsignedLongLongValue");
          v90[0] = _NSConcreteStackBlock;
          v90[1] = 3254779904LL;
          v90[2] = sub_10012DC78;
          v90[3] = &unk_1001DCE18;
          v92 = v108;
          v91 = objc_retain(v81);
          v93 = buf;
          v94 = v84;
          -[TSUZipWriter writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:](
            v80,
            "writeEntryWithName:force32BitSize:lastModificationDate:size:CRC:fromReadChannel:writeHandler:",
            v60,
            0LL,
            v70,
            v71,
            0LL,
            v64,
            v90);
          objc_release(v91);
          objc_release(v70);
          objc_release(v67);
          objc_release(v64);
          objc_release(v60);
          objc_release(v59);
        }
        v54 = objc_msgSend(v77, "countByEnumeratingWithState:objects:count:", &v98, v113, 16LL);
        if ( v54 )
          continue;
        break;
      }
    }
LABEL_64:
    objc_release(v77);
    v86[0] = _NSConcreteStackBlock;
    v86[1] = 3254779904LL;
    v86[2] = sub_10012DD64;
    v86[3] = &unk_1001DCE48;
    v87 = objc_retain(v81);
    v88 = buf;
    v89 = v84;
    -[TSUZipWriter closeWithQueue:completion:](v80, "closeWithQueue:completion:", queue, v86);
    objc_release(v87);
    _Block_object_dispose(buf, 8);
    objc_release(*(id *)&v115[32]);
    objc_release(v77);
    _Block_object_dispose(v108, 8);
    objc_release(obj);
    v53 = v72;
  }
  else
  {
    v52 = v30;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_10012DBE8;
    block[3] = &unk_1001D19E0;
    v111 = objc_retain(v81);
    v110 = objc_retain(v52);
    dispatch_async(queue, block);
    objc_release(v110);
    v53 = v111;
  }
  objc_release(v53);
  objc_release(v80);
  objc_release(v73);
  objc_release(v81);
  objc_release(queue);
  objc_release(v74);
  objc_release(v79);
  objc_release(v75);
}