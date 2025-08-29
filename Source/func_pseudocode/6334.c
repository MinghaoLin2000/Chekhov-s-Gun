+[PAMediaConversionServiceImagingUtilities logMissingPropertiesInCMPhotoOutputData:comparedToProcessedSourceImagePropertiesByIndex:]
void __cdecl +[PAMediaConversionServiceImagingUtilities logMissingPropertiesInCMPhotoOutputData:comparedToProcessedSourceImagePropertiesByIndex:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  const __CFData *v5; // x20
  id v6; // x21
  CGImageSource *v7; // x0
  CGImageSource *v8; // x22
  size_t Count; // x19
  const __CFData *v10; // x20
  size_t v11; // x8
  size_t v12; // x19
  CFDictionaryRef v13; // x26
  void *v14; // x27
  void *v15; // x0
  void *v16; // x28
  __int64 v17; // x22
  void *i; // x23
  void *v19; // x20
  void *v20; // x19
  void *v21; // x0
  NSNull *v22; // x21
  unsigned __int8 v23; // w24
  const __CFData *v24; // [xsp+0h] [xbp-180h]
  CGImageSource *v25; // [xsp+8h] [xbp-178h]
  id v26; // [xsp+10h] [xbp-170h]
  void *v27; // [xsp+18h] [xbp-168h]
  size_t v28; // [xsp+38h] [xbp-148h]
  __int128 v29; // [xsp+40h] [xbp-140h] BYREF
  __int128 v30; // [xsp+50h] [xbp-130h]
  __int128 v31; // [xsp+60h] [xbp-120h]
  __int128 v32; // [xsp+70h] [xbp-110h]
  uint8_t v33[128]; // [xsp+80h] [xbp-100h] BYREF
  uint8_t buf[4]; // [xsp+100h] [xbp-80h] BYREF
  const __CFData *v35; // [xsp+104h] [xbp-7Ch]
  __int16 v36; // [xsp+10Ch] [xbp-74h]
  void *v37; // [xsp+10Eh] [xbp-72h]

  v5 = (const __CFData *)objc_retain(a3);
  v6 = objc_retain(a4);
  v7 = CGImageSourceCreateWithData(v5, 0LL);
  if ( v7 )
  {
    v8 = v7;
    v24 = v5;
    Count = CGImageSourceGetCount(v7);
    v10 = (const __CFData *)objc_msgSend(v6, "count");
    if ( v10 != (const __CFData *)Count && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 134218240;
      v35 = v10;
      v36 = 2048;
      v37 = (void *)Count;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unexpected input (%tu) / output (%tu) image count mismatch",
        buf,
        0x16u);
    }
    if ( (unsigned __int64)v10 >= Count )
      v11 = Count;
    else
      v11 = (size_t)v10;
    v27 = (void *)v11;
    if ( v11 )
    {
      v12 = 0LL;
      v25 = v8;
      v26 = v6;
      do
      {
        v13 = CGImageSourceCopyPropertiesAtIndex(v8, v12, 0LL);
        v28 = v12;
        v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "objectAtIndexedSubscript:", v12));
        v29 = 0u;
        v30 = 0u;
        v31 = 0u;
        v32 = 0u;
        v15 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
        if ( v15 )
        {
          v16 = v15;
          v17 = *(_QWORD *)v30;
          do
          {
            for ( i = 0LL; i != v16; i = (char *)i + 1 )
            {
              if ( *(_QWORD *)v30 != v17 )
                objc_enumerationMutation(v14);
              v19 = *(void **)(*((_QWORD *)&v29 + 1) + 8LL * (_QWORD)i);
              v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", v19, v24));
              v21 = objc_retainAutoreleasedReturnValue(-[__CFDictionary objectForKeyedSubscript:](v13, "objectForKeyedSubscript:", v19));
              if ( v21 )
              {
                objc_release(v21);
              }
              else
              {
                v22 = objc_retainAutoreleasedReturnValue(+[NSNull null](&OBJC_CLASS___NSNull, "null"));
                v23 = (unsigned __int8)objc_msgSend(v20, "isEqual:", v22);
                objc_release(v22);
                if ( (v23 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
                {
                  *(_DWORD *)buf = 134218242;
                  v35 = (const __CFData *)v28;
                  v36 = 2114;
                  v37 = v19;
                  _os_log_error_impl(
                    (void *)&_mh_execute_header,
                    (os_log_t)&_os_log_default,
                    OS_LOG_TYPE_ERROR,
                    "Output image at index %tu is missing image property '%{public}@' present in input image",
                    buf,
                    0x16u);
                }
              }
              objc_release(v20);
            }
            v16 = objc_msgSend(v14, "countByEnumeratingWithState:objects:count:", &v29, v33, 16LL);
          }
          while ( v16 );
        }
        objc_release(v14);
        objc_release(v13);
        v12 = v28 + 1;
        v6 = v26;
        v8 = v25;
      }
      while ( (void *)(v28 + 1) != v27 );
    }
    CFRelease(v8);
    v5 = v24;
  }
  else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 134218240;
    v35 = v5;
    v36 = 2048;
    v37 = -[__CFData length](v5, "length");
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unable to create an image source from Fig outputData %p of length %tu to inspect for missing metadata properties.",
      buf,
      0x16u);
  }
  objc_release(v6);
  objc_release(v5);
}