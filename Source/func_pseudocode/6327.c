+[PAMediaConversionServiceSharedUtilitiesServiceSide isOutputCorruptionLikelyComparingFileSizeOfInputURL:toOutputURL:]
bool __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide isOutputCorruptionLikelyComparingFileSizeOfInputURL:toOutputURL:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  id v6; // x20
  NSArray *v7; // x21
  void *v8; // x22
  id v9; // x28
  void *v10; // x24
  void *v11; // x25
  void *v12; // x27
  void *v13; // x25
  void *v14; // x28
  _BYTE *v15; // x23
  void *v16; // x26
  void *v17; // x28
  double v18; // d8
  bool v19; // w23
  _BYTE *v20; // x23
  _BYTE *v21; // x26
  void *v23; // x23
  void *v24; // x23
  _BYTE *v25; // [xsp+0h] [xbp-E0h]
  id v26; // [xsp+18h] [xbp-C8h]
  id v27; // [xsp+20h] [xbp-C0h] BYREF
  id v28; // [xsp+28h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+30h] [xbp-B0h] BYREF
  double v30; // [xsp+34h] [xbp-ACh]
  __int16 v31; // [xsp+3Ch] [xbp-A4h]
  __int64 v32; // [xsp+3Eh] [xbp-A2h]
  __int16 v33; // [xsp+46h] [xbp-9Ah]
  _BYTE *v34; // [xsp+48h] [xbp-98h]
  __int16 v35; // [xsp+50h] [xbp-90h]
  _BYTE *v36; // [xsp+52h] [xbp-8Eh]
  _QWORD v37[2]; // [xsp+68h] [xbp-78h] BYREF

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  v37[0] = NSURLFileSizeKey;
  v37[1] = NSURLTypeIdentifierKey;
  v7 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v37, 2LL));
  objc_msgSend(v5, "removeCachedResourceValueForKey:", NSURLFileSizeKey);
  v28 = 0LL;
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "resourceValuesForKeys:error:", v7, &v28));
  v9 = objc_retain(v28);
  if ( v8 )
  {
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", NSURLFileSizeKey));
    v25 = objc_msgSend(v10, "unsignedLongLongValue");
    objc_release(v10);
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "objectForKeyedSubscript:", NSURLTypeIdentifierKey));
    v12 = objc_retainAutoreleasedReturnValue(
            +[PFUniformTypeUtilities typeWithIdentifier:](
              &OBJC_CLASS___PFUniformTypeUtilities,
              "typeWithIdentifier:",
              v11));
    objc_release(v11);
    objc_msgSend(v6, "removeCachedResourceValueForKey:", NSURLFileSizeKey);
    v27 = v9;
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "resourceValuesForKeys:error:", v7, &v27));
    v26 = objc_retain(v27);
    objc_release(v9);
    if ( !v13 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
        *(_DWORD *)buf = 138412546;
        v30 = *(double *)&v24;
        v31 = 2112;
        v9 = v26;
        v32 = (__int64)v26;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to read output image file attributes for %@: %@",
          buf,
          0x16u);
        objc_release(v24);
        v19 = 0;
        goto LABEL_21;
      }
      v19 = 0;
LABEL_20:
      v9 = v26;
LABEL_21:
      objc_release(v13);
      objc_release(v12);
      goto LABEL_22;
    }
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", NSURLFileSizeKey));
    v15 = objc_msgSend(v14, "unsignedLongLongValue");
    objc_release(v14);
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "objectForKeyedSubscript:", NSURLTypeIdentifierKey));
    v17 = objc_retainAutoreleasedReturnValue(
            +[PFUniformTypeUtilities typeWithIdentifier:](
              &OBJC_CLASS___PFUniformTypeUtilities,
              "typeWithIdentifier:",
              v16));
    objc_release(v16);
    if ( ((unsigned int)objc_msgSend(v12, "isEqual:", v17) & 1) != 0 )
    {
      v18 = (double)(v15 - v25) / (double)(unsigned __int64)v25 * 100.0;
      if ( fabs(v18) > 10.0 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          *(_DWORD *)buf = 134218752;
          v30 = (double)(v15 - v25) / (double)(unsigned __int64)v25 * 100.0;
          v31 = 2048;
          v32 = 0x4024000000000000LL;
          v33 = 2048;
          v34 = v25;
          v35 = 2048;
          v36 = v15;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Conversion output corruption possible based on input/output file size comparison: abs(%f) > %f, %llu/%llu",
            buf,
            0x2Au);
        }
        v19 = 1;
        goto LABEL_19;
      }
      if ( !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
      {
        v19 = 0;
        goto LABEL_19;
      }
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path"));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
      *(_DWORD *)buf = 134218754;
      v30 = v18;
      v31 = 2048;
      v32 = 0x4024000000000000LL;
      v33 = 2112;
      v34 = v20;
      v35 = 2112;
      v36 = v21;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_INFO,
        "File size percentage change abs(%f) < %f for conversion of %@ to %@",
        buf,
        0x2Au);
    }
    else
    {
      if ( !os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        v19 = 0;
LABEL_19:
        objc_release(v17);
        goto LABEL_20;
      }
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path"));
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
      *(_DWORD *)buf = 138413058;
      v30 = *(double *)&v20;
      v31 = 2112;
      v32 = (__int64)v12;
      v33 = 2112;
      v34 = v21;
      v35 = 2112;
      v36 = v17;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to check for output corruption based on file size because the file types are different: %@ (%@) / %@ (%@)",
        buf,
        0x2Au);
    }
    objc_release(v21);
    objc_release(v20);
    v19 = 0;
    goto LABEL_19;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "path"));
    *(_DWORD *)buf = 138412546;
    v30 = *(double *)&v23;
    v31 = 2112;
    v32 = (__int64)v9;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to read input image file attributes for %@: %@",
      buf,
      0x16u);
    objc_release(v23);
  }
  v19 = 0;
LABEL_22:
  objc_release(v8);
  objc_release(v7);
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
  return v19;
}