+[PAMediaConversionServiceSharedUtilitiesServiceSide exporterImageOptionsForScaleFactor:maximumPixelCount:metadataPolicy:shouldApplyOrientationTransform:outputFileType:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide exporterImageOptionsForScaleFactor:maximumPixelCount:metadataPolicy:shouldApplyOrientationTransform:outputFileType:](
        id a1,
        SEL a2,
        double a3,
        signed __int64 a4,
        id a5,
        bool a6,
        id a7)
{
  _BOOL4 v8; // w23
  id v13; // x19
  id v14; // x20
  id v15; // x21
  void *v16; // x22
  id v17; // x26
  void *v18; // x24
  id v19; // x23
  NSAssertionHandler *v21; // x22
  _QWORD v22[4]; // [xsp+8h] [xbp-98h] BYREF
  id v23; // [xsp+28h] [xbp-78h]
  uint8_t buf[4]; // [xsp+30h] [xbp-70h] BYREF
  id v25; // [xsp+34h] [xbp-6Ch]
  __int64 vars8; // [xsp+A8h] [xbp+8h]

  v8 = a6;
  v13 = objc_retain(a5);
  v14 = objc_retain(a7);
  if ( !v14 )
  {
    v21 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v21,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1937LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outputFileType"));
    objc_release(v21);
  }
  v15 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporterImageOptions);
  v16 = objc_retainAutoreleasedReturnValue(
          +[PFUniformTypeUtilities typeWithIdentifier:](
            &OBJC_CLASS___PFUniformTypeUtilities,
            "typeWithIdentifier:",
            v14));
  if ( (unsigned int)objc_msgSend(v16, "conformsToType:", UTTypeJPEG) )
  {
    v17 = objc_alloc_init((Class)&OBJC_CLASS___NUImageExportFormatJPEG);
    objc_msgSend(v17, "setCompressionQuality:", 0.800000012);
LABEL_7:
    objc_msgSend(v15, "setImageExportFormat:", v17);
    objc_release(v17);
    v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "scalePolicyForScaleFactor:maximumPixelCount:", a4, a3));
    if ( v18 )
      objc_msgSend(v15, "setScalePolicy:", v18);
    if ( v13 )
    {
      v22[0] = _NSConcreteStackBlock;
      v22[1] = 3254779904LL;
      v22[2] = sub_100013814;
      v22[3] = &unk_1000413F0;
      v23 = objc_retain(v13);
      objc_msgSend(v15, "setMetadataProcessor:", v22);
      objc_release(v23);
    }
    objc_msgSend(v15, "setApplyImageOrientationAsMetadata:", !v8);
    objc_msgSend(v15, "setOptimizeForBackgroundProcessing:", 1LL);
    objc_msgSend(v15, "setEnableHDR:", 1LL);
    v19 = objc_retain(v15);
    objc_release(v18);
    goto LABEL_15;
  }
  if ( (unsigned int)objc_msgSend(v16, "conformsToType:", UTTypeHEIC) )
  {
    v17 = objc_alloc_init((Class)&OBJC_CLASS___NUImageExportFormatHEIF);
    goto LABEL_7;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
  {
    *(_DWORD *)buf = 138412290;
    v25 = v14;
    _os_log_error_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_ERROR,
      "Unexpected output file type: %@",
      buf,
      0xCu);
  }
  v19 = 0LL;
LABEL_15:
  objc_release(v16);
  objc_release(v15);
  objc_release(v14);
  objc_release(v13);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v19);
}