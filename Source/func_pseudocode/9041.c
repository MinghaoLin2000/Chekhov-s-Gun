+[TSPFileManager linkOrCopyItemAtURL:decryptionInfo:toURL:encryptionInfo:canLink:encodedLength:error:]
bool __cdecl +[TSPFileManager linkOrCopyItemAtURL:decryptionInfo:toURL:encryptionInfo:canLink:encodedLength:error:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        bool a7,
        unsigned __int64 *a8,
        id *a9)
{
  _BOOL4 v10; // w25
  id v15; // x19
  id v16; // x20
  id v17; // x21
  id v18; // x22
  __int64 v19; // x27
  TSUFileIOChannel *v20; // x0
  id *v21; // x26
  id v22; // x25
  TSUFileIOChannel *v23; // x0
  id *v24; // x27
  id v25; // x26
  unsigned __int8 v26; // w27
  id v27; // x28
  void *v28; // x27
  NSFileManager *v29; // x25
  unsigned __int8 v30; // w26
  NSFileManager *v31; // x25
  id *v32; // x26
  unsigned int v33; // w27
  id v34; // x25
  id v35; // x26
  void *v36; // x0
  void *v37; // x27
  void *v38; // x0
  void *v39; // x24
  void *v40; // x25
  id v41; // x0
  objc_class *v43; // x0
  void *v44; // x28
  void *v45; // x0
  objc_class *v46; // x0
  void *v47; // x28
  void *v48; // x0
  NSString *v49; // [xsp+10h] [xbp-170h]
  id v50; // [xsp+18h] [xbp-168h]
  id v51; // [xsp+18h] [xbp-168h]
  id v52; // [xsp+20h] [xbp-160h]
  NSString *v53; // [xsp+20h] [xbp-160h]
  _QWORD v54[6]; // [xsp+28h] [xbp-158h] BYREF
  id v55; // [xsp+58h] [xbp-128h] BYREF
  id v56; // [xsp+60h] [xbp-120h] BYREF
  id v57; // [xsp+68h] [xbp-118h] BYREF
  id obj; // [xsp+70h] [xbp-110h] BYREF
  id v59; // [xsp+78h] [xbp-108h] BYREF
  id v60; // [xsp+80h] [xbp-100h] BYREF
  id v61; // [xsp+88h] [xbp-F8h] BYREF
  __int64 v62; // [xsp+90h] [xbp-F0h] BYREF
  __int64 *v63; // [xsp+98h] [xbp-E8h]
  __int64 v64; // [xsp+A0h] [xbp-E0h]
  __int64 (__fastcall *v65)(); // [xsp+A8h] [xbp-D8h]
  __int64 (__fastcall *v66)(); // [xsp+B0h] [xbp-D0h]
  id v67; // [xsp+B8h] [xbp-C8h]
  __int64 v68; // [xsp+C0h] [xbp-C0h] BYREF
  __int64 *v69; // [xsp+C8h] [xbp-B8h]
  __int64 v70; // [xsp+D0h] [xbp-B0h]
  __int64 v71; // [xsp+D8h] [xbp-A8h]
  uint8_t buf[4]; // [xsp+E0h] [xbp-A0h] BYREF
  id v73; // [xsp+E4h] [xbp-9Ch]
  __int16 v74; // [xsp+ECh] [xbp-94h]
  NSString *v75; // [xsp+EEh] [xbp-92h]
  __int16 v76; // [xsp+F6h] [xbp-8Ah]
  void *v77; // [xsp+F8h] [xbp-88h]
  __int16 v78; // [xsp+100h] [xbp-80h]
  void *v79; // [xsp+102h] [xbp-7Eh]
  __int16 v80; // [xsp+10Ah] [xbp-76h]
  id v81; // [xsp+10Ch] [xbp-74h]

  v10 = a7;
  v15 = objc_retain(a3);
  v16 = objc_retain(a4);
  v17 = objc_retain(a5);
  v18 = objc_retain(a6);
  LOBYTE(v19) = 0;
  v68 = 0LL;
  v69 = &v68;
  v70 = 0x2020000000LL;
  v71 = 0LL;
  v62 = 0LL;
  v63 = &v62;
  v64 = 0x3032000000LL;
  v65 = sub_100004E98;
  v66 = sub_100004EA8;
  v67 = 0LL;
  if ( v15 && v17 )
  {
    if ( (UnsafePointer(v16, v18) & 1) != 0 )
    {
      v20 = objc_alloc(&OBJC_CLASS___TSUFileIOChannel);
      v21 = (id *)(v63 + 5);
      obj = (id)v63[5];
      v22 = -[TSUFileIOChannel initForReadingURL:error:](v20, "initForReadingURL:error:", v15, &obj);
      objc_storeStrong(v21, obj);
      if ( v22 )
      {
        v23 = objc_alloc(&OBJC_CLASS___TSUFileIOChannel);
        v24 = (id *)(v63 + 5);
        v57 = (id)v63[5];
        v25 = -[TSUFileIOChannel initForStreamWritingURL:error:](v23, "initForStreamWritingURL:error:", v17, &v57);
        objc_storeStrong(v24, v57);
        if ( v25 )
        {
          v56 = 0LL;
          v55 = 0LL;
          v26 = (unsigned __int8)objc_msgSend(v15, "getResourceValue:forKey:error:", &v56, NSURLFileSizeKey, &v55);
          v27 = objc_retain(v56);
          v52 = objc_retain(v55);
          if ( (v26 & 1) == 0 )
          {
            objc_release(v27);
            if ( TSUDefaultCat_init_token != -1 )
              dispatch_once(&TSUDefaultCat_init_token, &stru_1001D0FF8);
            v28 = objc_retain(TSUDefaultCat_log_t);
            if ( os_log_type_enabled((os_log_t)v28, OS_LOG_TYPE_ERROR) )
            {
              v51 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path")));
              v46 = (objc_class *)objc_opt_class(v52);
              v49 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v46)));
              v47 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v52, "domain")));
              v48 = objc_msgSend(v52, "code");
              *(_DWORD *)buf = 138413314;
              v73 = v51;
              v74 = 2114;
              v75 = v49;
              v76 = 2114;
              v77 = v47;
              v78 = 2048;
              v79 = v48;
              v80 = 2112;
              v81 = v52;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                (os_log_t)v28,
                OS_LOG_TYPE_ERROR,
                "Failed to retrieve file size for path: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
                buf,
                0x34u);
              objc_release(v47);
              objc_release(v49);
              objc_release(v51);
              objc_release(v47);
              objc_release(v49);
              objc_release(v51);
            }
            objc_release(v28);
            v27 = 0LL;
          }
          v54[0] = _NSConcreteStackBlock;
          v54[1] = 3254779904LL;
          v54[2] = sub_100004F48;
          v54[3] = &unk_1001D1018;
          v54[4] = &v68;
          v54[5] = &v62;
          objc_msgSend(
            a1,
            "transcodeReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:synchronous:completion:",
            v22,
            v16,
            objc_msgSend(v27, "unsignedLongLongValue"),
            v25,
            v18,
            1LL,
            v54);
          v19 = v63[5];
          objc_msgSend(v25, "close");
          LOBYTE(v19) = v19 == 0;
          objc_release(v52);
          objc_release(v27);
        }
        else
        {
          LOBYTE(v19) = 0;
        }
        objc_msgSend(v22, "close");
        objc_release(v25);
      }
      else
      {
        LOBYTE(v19) = 0;
      }
      objc_release(v22);
    }
    else
    {
      if ( v10
        && (v29 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager")),
            v30 = -[NSFileManager tsu_canCloneItemAtURL:toURL:](v29, "tsu_canCloneItemAtURL:toURL:", v15, v17),
            objc_release(v29),
            (v30 & 1) == 0)
        && ((unsigned int)objc_msgSend(
                            a1,
                            "linkOrCloneItemAtURL:toURL:canLink:canClone:error:",
                            v15,
                            v17,
                            1LL,
                            0LL,
                            0LL) & 1) != 0 )
      {
        LODWORD(v19) = 1;
      }
      else
      {
        v31 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
        v32 = (id *)(v63 + 5);
        v61 = (id)v63[5];
        LODWORD(v19) = -[NSFileManager copyItemAtURL:toURL:error:](v31, "copyItemAtURL:toURL:error:", v15, v17, &v61);
        objc_storeStrong(v32, v61);
        objc_release(v31);
      }
      if ( a8 && (_DWORD)v19 )
      {
        v60 = 0LL;
        v59 = 0LL;
        v33 = (unsigned int)objc_msgSend(v17, "getResourceValue:forKey:error:", &v60, NSURLFileSizeKey, &v59);
        v34 = objc_retain(v60);
        v35 = objc_retain(v59);
        if ( v33 )
        {
          v36 = objc_msgSend(v34, "unsignedLongLongValue");
          v69[3] = (__int64)v36;
        }
        else
        {
          if ( TSUDefaultCat_init_token != -1 )
            dispatch_once(&TSUDefaultCat_init_token, &stru_1001D0FD8);
          v37 = objc_retain(TSUDefaultCat_log_t);
          if ( os_log_type_enabled((os_log_t)v37, OS_LOG_TYPE_ERROR) )
          {
            v50 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "path"));
            v43 = (objc_class *)objc_opt_class(v35);
            v53 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v43)));
            v44 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v35, "domain")));
            v45 = objc_msgSend(v35, "code");
            *(_DWORD *)buf = 138413314;
            v73 = v50;
            v74 = 2114;
            v75 = v53;
            v76 = 2114;
            v77 = v44;
            v78 = 2048;
            v79 = v45;
            v80 = 2112;
            v81 = v35;
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)v37,
              OS_LOG_TYPE_ERROR,
              "Failed to retrieve file size for path: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
              buf,
              0x34u);
            objc_release(v44);
            objc_release(v53);
            objc_release(v50);
            objc_release(v44);
            objc_release(v53);
          }
          objc_release(v37);
        }
        objc_release(v35);
        objc_release(v34);
        LOBYTE(v19) = 1;
        goto LABEL_33;
      }
    }
  }
  if ( a8 )
LABEL_33:
    *a8 = v69[3];
  if ( a9 && (v19 & 1) == 0 )
  {
    v38 = (void *)v63[5];
    if ( v38 )
    {
      *a9 = objc_retainAutorelease(v38);
    }
    else
    {
      v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
      v40 = objc_retainAutoreleasedReturnValue(objc_msgSend(v17, "path"));
      v41 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "errorWithDomain:code:sourcePath:targetPath:", NSCocoaErrorDomain, 4LL, v39, v40)));
      *a9 = v41;
      objc_release(v41);
      objc_release(v40);
      objc_release(v39);
    }
  }
  _Block_object_dispose(&v62, 8);
  objc_release(v67);
  _Block_object_dispose(&v68, 8);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  return v19;
}