-[TSPPackageWriter linkOrCopyData:fromURL:fromTemporaryLocation:decryptionInfo:preferredFilename:error:]
id __cdecl -[TSPPackageWriter linkOrCopyData:fromURL:fromTemporaryLocation:decryptionInfo:preferredFilename:error:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6,
        id a7,
        id *a8)
{
  id v13; // x20
  id v14; // x21
  id v15; // x22
  id v16; // x23
  unsigned __int8 v17; // w19
  id v18; // x27
  id v19; // x24
  void *v20; // x27
  id v21; // x25
  void *v23; // x28
  objc_class *v24; // x0
  void *v25; // x0
  id v26; // [xsp+8h] [xbp-B8h]
  NSString *v27; // [xsp+10h] [xbp-B0h]
  id v28; // [xsp+18h] [xbp-A8h]
  id v29; // [xsp+20h] [xbp-A0h] BYREF
  id v30; // [xsp+28h] [xbp-98h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-90h] BYREF
  void *v32; // [xsp+34h] [xbp-8Ch]
  __int16 v33; // [xsp+3Ch] [xbp-84h]
  NSString *v34; // [xsp+3Eh] [xbp-82h]
  __int16 v35; // [xsp+46h] [xbp-7Ah]
  id v36; // [xsp+48h] [xbp-78h]
  __int16 v37; // [xsp+50h] [xbp-70h]
  void *v38; // [xsp+52h] [xbp-6Eh]
  __int16 v39; // [xsp+5Ah] [xbp-66h]
  id v40; // [xsp+5Ch] [xbp-64h]
  __int64 vars8; // [xsp+C8h] [xbp+8h]

  v28 = objc_retain(a3);
  v13 = objc_retain(a4);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  v16 = -[TSUFileIOChannel initForReadingURL:error:](
          objc_alloc(&OBJC_CLASS___TSUFileIOChannel),
          "initForReadingURL:error:",
          v13,
          a8);
  if ( v16 )
  {
    v30 = 0LL;
    v29 = 0LL;
    v17 = (unsigned __int8)objc_msgSend(v13, "getResourceValue:forKey:error:", &v30, NSURLFileSizeKey, &v29);
    v18 = objc_retain(v30);
    v19 = objc_retain(v29);
    if ( (v17 & 1) == 0 )
    {
      objc_release(v18);
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D1308);
      v20 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v20, OS_LOG_TYPE_ERROR) )
      {
        v23 = objc_retain(objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "path")));
        v24 = (objc_class *)objc_opt_class(v19);
        v27 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v24)));
        v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "domain"));
        v25 = objc_msgSend(v19, "code");
        *(_DWORD *)buf = 138413314;
        v32 = v23;
        v33 = 2114;
        v34 = v27;
        v35 = 2114;
        v36 = v26;
        v37 = 2048;
        v38 = v25;
        v39 = 2112;
        v40 = v19;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v20,
          OS_LOG_TYPE_ERROR,
          "Failed to retrieve file size for path: %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v27);
        objc_release(v23);
        objc_release(v26);
        objc_release(v27);
        objc_release(v23);
      }
      objc_release(v20);
      v18 = 0LL;
    }
    v21 = -[TSPPackageWriter copyData:withReadChannel:decryptionInfo:size:calculateCRC:preferredFilename:error:](
            self,
            "copyData:withReadChannel:decryptionInfo:size:calculateCRC:preferredFilename:error:",
            v28,
            v16,
            v14,
            objc_msgSend(v18, "unsignedLongLongValue"),
            1LL,
            v15,
            a8);
    objc_msgSend(v16, "close");
    objc_release(v19);
    objc_release(v18);
  }
  else
  {
    v21 = 0LL;
  }
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  objc_release(v28);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v21);
}