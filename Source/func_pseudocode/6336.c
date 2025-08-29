+[PAMediaConversionServiceImagingUtilities imageDataForPassthroughConversionForSourceURL:metadataPolicy:outResultImageSize:]
id __cdecl +[PAMediaConversionServiceImagingUtilities imageDataForPassthroughConversionForSourceURL:metadataPolicy:outResultImageSize:](
        id a1,
        SEL a2,
        id a3,
        id a4,
        CGSize *a5)
{
  const __CFURL *v7; // x19
  id v8; // x20
  NSDictionary *v9; // x21
  CGImageSource *v10; // x0
  CGImageSource *v11; // x22
  void *v12; // x24
  void *v13; // x23
  unsigned __int8 v14; // w27
  id v15; // x26
  const __CFURL *v16; // x23
  void *v17; // x23
  unsigned int v18; // w27
  const __CFDictionary *v19; // x23
  id v20; // x28
  id v21; // x23
  int v22; // w27
  const __CFURL *v23; // x23
  id v25; // [xsp+0h] [xbp-F0h]
  CFDictionaryRef v26; // [xsp+8h] [xbp-E8h]
  _QWORD v27[4]; // [xsp+10h] [xbp-E0h] BYREF
  const __CFDictionary *v28; // [xsp+30h] [xbp-C0h]
  id v29; // [xsp+38h] [xbp-B8h]
  CGImageSource *v30; // [xsp+40h] [xbp-B0h]
  id v31; // [xsp+48h] [xbp-A8h] BYREF
  id v32; // [xsp+50h] [xbp-A0h] BYREF
  id v33; // [xsp+58h] [xbp-98h] BYREF
  __int64 v34; // [xsp+60h] [xbp-90h] BYREF
  void *v35; // [xsp+68h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+70h] [xbp-80h] BYREF
  const __CFURL *v37; // [xsp+74h] [xbp-7Ch]
  CFStringRef v38; // [xsp+80h] [xbp-70h] BYREF
  void *v39; // [xsp+88h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+F8h] [xbp+8h]

  v7 = (const __CFURL *)objc_retain(a3);
  v8 = objc_retain(a4);
  v38 = kCGImageSourceShouldCache;
  v39 = &__kCFBooleanFalse;
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v39,
           &v38,
           1LL));
  v10 = CGImageSourceCreateWithURL(v7, (CFDictionaryRef)v9);
  if ( v10 )
  {
    v11 = v10;
    v34 = kCGImageSourceAddHEIFContainerItemID;
    v35 = &__kCFBooleanTrue;
    v26 = CGImageSourceCopyProperties(
            v10,
            (CFDictionaryRef)+[NSDictionary dictionaryWithObjects:forKeys:count:](
                               &OBJC_CLASS___NSDictionary,
                               "dictionaryWithObjects:forKeys:count:",
                               &v35,
                               &v34,
                               1LL));
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "imagePropertiesByImageIndexInImageSource:processedWithMetadataPolicy:", v11, v8));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(UTTypeJPEG, "identifier"));
    v33 = 0LL;
    v32 = 0LL;
    v14 = (unsigned __int8)-[__CFURL getResourceValue:forKey:error:](
                             v7,
                             "getResourceValue:forKey:error:",
                             &v33,
                             NSURLTypeIdentifierKey,
                             &v32);
    v15 = objc_retain(v33);
    objc_release(v13);
    v16 = (const __CFURL *)objc_retain(v32);
    if ( (v14 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412290;
      v37 = v16;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to get type identifier of image source URL: %@",
        buf,
        0xCu);
    }
    v17 = objc_retainAutoreleasedReturnValue(
            +[PFUniformTypeUtilities typeWithIdentifier:](
              &OBJC_CLASS___PFUniformTypeUtilities,
              "typeWithIdentifier:",
              v15,
              v16));
    v18 = (unsigned int)objc_msgSend(v17, "conformsToType:", UTTypeJPEG);
    objc_release(v17);
    if ( v18 )
    {
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "objectAtIndexedSubscript:", CGImageSourceGetPrimaryImageIndex(v11)));
      v20 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                a1,
                "dataForSingleImageJPEGPassthroughConversionForImageSource:primaryImageProperties:",
                v11,
                v19));
    }
    else
    {
      v30 = v11;
      v31 = 0LL;
      v27[0] = _NSConcreteStackBlock;
      v27[1] = 3254779904LL;
      v27[2] = sub_1000184C8;
      v27[3] = &unk_1000414D0;
      v28 = objc_retain(v26);
      v21 = objc_retain(v12);
      v29 = v21;
      v22 = PFFigCopyImageFileWithPropertiesToData(v7, &v31, 0LL, v27);
      v20 = objc_retain(v31);
      if ( v22 )
      {
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        {
          v23 = objc_retainAutoreleasedReturnValue(-[__CFURL path](v7, "path"));
          *(_DWORD *)buf = 138412290;
          v37 = v23;
          _os_log_error_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_ERROR,
            "Unable to perform passthrough conversion for %@",
            buf,
            0xCu);
          objc_release(v23);
        }
      }
      else
      {
        objc_msgSend(
          a1,
          "logMissingPropertiesInCMPhotoOutputData:comparedToProcessedSourceImagePropertiesByIndex:",
          v20,
          v21);
      }
      objc_release(v29);
      v19 = v28;
    }
    objc_release(v19);
    CFRelease(v11);
    objc_release(v25);
    objc_release(v15);
    objc_release(v12);
    objc_release(v26);
  }
  else
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEFAULT) )
    {
      *(_DWORD *)buf = 138412290;
      v37 = v7;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_DEFAULT,
        "Unable to create image source from %@",
        buf,
        0xCu);
    }
    v20 = 0LL;
  }
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v20);
}