-[ImageConversionService convertImageWithOptions:sourceURLCollection:outputURLCollection:outputData:outputFileType:outputImageInfo:error:]
bool __cdecl -[ImageConversionService convertImageWithOptions:sourceURLCollection:outputURLCollection:outputData:outputFileType:outputImageInfo:error:](
        ImageConversionService *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id *a6,
        id *a7,
        id *a8,
        id *a9)
{
  id v14; // x19
  id v15; // x21
  void *v16; // x20
  unsigned __int8 v17; // w22
  NSAssertionHandler *v18; // x20
  void *v19; // x20
  unsigned int v20; // w25
  void *v21; // x20
  unsigned int v22; // w26
  void *v23; // x22
  void *v24; // x24
  char v25; // w8
  void *v26; // x20
  const char *v27; // x23
  NSUserDefaults *v28; // x27
  char v29; // w28
  NSUserDefaults *v30; // x0
  void *v31; // x20
  NSData *v32; // x25
  NSData *v33; // x20
  NSDictionary *v34; // x26
  void *v35; // x20
  unsigned __int8 v36; // w27
  NSDictionary *v37; // x28
  PAMediaConversionServiceResourceURLCollection *v38; // x25
  void *v39; // x27
  void *v40; // x26
  void *v41; // x20
  void *v42; // x27
  id v43; // x20
  PAMediaConversionServiceImageConversionJob *v44; // x20
  void *v45; // x25
  PAMediaConversionServiceImageConversionJob *v46; // x23
  void *v47; // x20
  void *v48; // x20
  id *v49; // x26
  NSNumber *v50; // x20
  NSNumber *v51; // x20
  void *v52; // x25
  NSString *v53; // x25
  void *v54; // x25
  void *v55; // x27
  void *v56; // x22
  id v57; // x24
  id *v58; // x21
  unsigned int v59; // w26
  __int64 v60; // x3
  void *v62; // x20
  void *v63; // x20
  void *v64; // x20
  void *v65; // x25
  void *v66; // x25
  void *v67; // x20
  void *v68; // x0
  NSDictionary *v69; // x25
  void *v70; // x20
  void *v71; // x20
  NSAssertionHandler *v72; // x0
  NSAssertionHandler *v73; // x20
  void *v74; // x0
  id v75; // x20
  unsigned int v76; // w25
  void *v77; // x20
  void *v78; // x20
  void *v79; // x20
  void *v80; // x0
  _BOOL4 v81; // w20
  CGFloat v82; // d0
  CGFloat v83; // d1
  PAMediaConversionServiceResourceURLCollection *v84; // x25
  PAMediaConversionServiceResourceURLCollection *v85; // x26
  PAMediaConversionServiceResourceURLCollection *v86; // x25
  NSDictionary *v87; // x26
  PAMediaConversionServiceResourceURLCollection *v88; // x25
  NSDictionary *v89; // x26
  PAMediaConversionServiceResourceURLCollection *v90; // x25
  NSURL *v91; // x26
  PAMediaConversionServiceResourceURLCollection *v92; // x28
  NSURL *v93; // x26
  NSError *v94; // x0
  PAMediaConversionServiceResourceURLCollection *v95; // x20
  NSAssertionHandler *v96; // x20
  NSAssertionHandler *v97; // x20
  NSAssertionHandler *v98; // x20
  NSAssertionHandler *v99; // x20
  NSFileManager *v100; // [xsp+8h] [xbp-128h]
  unsigned __int8 v101; // [xsp+10h] [xbp-120h]
  int v102; // [xsp+14h] [xbp-11Ch]
  id v103; // [xsp+18h] [xbp-118h]
  NSAssertionHandler *v104; // [xsp+20h] [xbp-110h]
  id v105; // [xsp+28h] [xbp-108h]
  id v106; // [xsp+30h] [xbp-100h]
  id v107; // [xsp+38h] [xbp-F8h]
  ImageConversionService *v110; // [xsp+50h] [xbp-E0h]
  id *v111; // [xsp+58h] [xbp-D8h]
  id v112; // [xsp+68h] [xbp-C8h]
  id v113; // [xsp+70h] [xbp-C0h]
  id v114; // [xsp+78h] [xbp-B8h] BYREF
  id v115; // [xsp+80h] [xbp-B0h] BYREF
  id v116; // [xsp+88h] [xbp-A8h] BYREF
  CGSize v117; // [xsp+90h] [xbp-A0h] BYREF
  NSErrorUserInfoKey v118; // [xsp+A0h] [xbp-90h] BYREF
  const __CFString *v119; // [xsp+A8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+B0h] [xbp-80h] BYREF
  PAMediaConversionServiceResourceURLCollection *v121; // [xsp+B4h] [xbp-7Ch]
  __int16 v122; // [xsp+BCh] [xbp-74h]
  NSDictionary *v123; // [xsp+BEh] [xbp-72h]

  v14 = objc_retain(a3);
  v113 = objc_retain(a4);
  v15 = objc_retain(a5);
  if ( !a8 )
  {
    v96 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v96,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("ImageConversionService.m"),
      344LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("outputImageInfo"));
    objc_release(v96);
  }
  v111 = a8;
  if ( !v15 )
  {
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionWantsResultAsDataKey")));
    v17 = (unsigned __int8)objc_msgSend(v16, "boolValue");
    objc_release(v16);
    if ( (v17 & 1) == 0 )
    {
      v18 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v18,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        self,
        CFSTR("ImageConversionService.m"),
        346LL,
        CFSTR("Neither destination URL collection nor NSData output option, should have been rejected at request enqueue time"));
      objc_release(v18);
    }
  }
  v19 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v14,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionIsPassthroughConversionKey")));
  v20 = (unsigned int)objc_msgSend(v19, "boolValue");
  objc_release(v19);
  v21 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v14,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionIsPhotosAdjustmentsCalculationKey")));
  v22 = (unsigned int)objc_msgSend(v21, "boolValue");
  objc_release(v21);
  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOutputFileTypeKey")));
  if ( !v23 )
  {
    v23 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v15,
              "typeIdentifierForResourceURLWithRole:",
              CFSTR("PAMediaConversionResourceRoleMainResource")));
    if ( !v23 )
    {
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_WORD *)buf = 0;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Unable to determine output file type from destination URL, defaulting to JPEG.",
          buf,
          2u);
      }
      v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(UTTypeJPEG, "identifier"));
    }
  }
  v110 = self;
  v117 = CGSizeZero;
  v112 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v24 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionMetadataPolicyKey")));
  if ( v24 )
    v25 = 1;
  else
    v25 = v22;
  if ( (v25 & 1) == 0 )
  {
    v97 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v97,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("ImageConversionService.m"),
      372LL,
      CFSTR("Missing metadata policy"));
    objc_release(v97);
  }
  v26 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v14,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionRequiresBlastDoorAccessKey")));
  if ( (unsigned int)objc_msgSend(v26, "boolValue") )
  {
    v27 = a2;
    v28 = objc_retainAutoreleasedReturnValue(+[NSUserDefaults standardUserDefaults](&OBJC_CLASS___NSUserDefaults, "standardUserDefaults"));
    v29 = !-[NSUserDefaults boolForKey:](v28, "boolForKey:", CFSTR("PADisablePhotosBlastDoorProcessing"));
    v30 = v28;
    a2 = v27;
    objc_release(v30);
  }
  else
  {
    v29 = 0;
  }
  objc_release(v26);
  if ( v20 && (v29 & 1) == 0 )
  {
    v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v113, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
    v32 = (NSData *)objc_retainAutoreleasedReturnValue(
                      +[PAMediaConversionServiceImagingUtilities imageDataForPassthroughConversionForSourceURL:metadataPolicy:outResultImageSize:](
                        &OBJC_CLASS___PAMediaConversionServiceImagingUtilities,
                        "imageDataForPassthroughConversionForSourceURL:metadataPolicy:outResultImageSize:",
                        v31,
                        v24,
                        &v117));
    objc_release(v31);
    v33 = 0LL;
    if ( v32 )
    {
      v34 = 0LL;
      goto LABEL_23;
    }
    v36 = 0;
    v37 = 0LL;
LABEL_44:
    v49 = a9;
    if ( !a9 )
      goto LABEL_52;
    goto LABEL_45;
  }
  if ( v22 )
  {
    v38 = objc_retainAutoreleasedReturnValue(objc_msgSend(v113, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
    v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceInputFileTypeKey")));
    v40 = objc_retainAutoreleasedReturnValue(
            +[PFUniformTypeUtilities typeWithIdentifier:](
              &OBJC_CLASS___PFUniformTypeUtilities,
              "typeWithIdentifier:",
              v39));
    objc_release(v39);
    v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOrientationKey")));
    v42 = objc_msgSend(v41, "unsignedIntValue");
    objc_release(v41);
    v116 = 0LL;
    v43 = objc_retainAutoreleasedReturnValue(
            -[ImageConversionService performPhotosPortraitAdjustmentsCalculationForURL:contentType:orientation:error:](
              v110,
              "performPhotosPortraitAdjustmentsCalculationForURL:contentType:orientation:error:",
              v38,
              v40,
              v42,
              &v116));
    v37 = (NSDictionary *)objc_retain(v116);
    if ( v43 )
    {
      objc_msgSend(
        v112,
        "setObject:forKeyedSubscript:",
        v43,
        CFSTR("PAMediaConversionServiceCalculatedAdjustmentInformationKey"));
      objc_release(v43);
      objc_release(v40);
      objc_release(v38);
      v32 = 0LL;
      v36 = 1;
      goto LABEL_39;
    }
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412546;
      v121 = v38;
      v122 = 2112;
      v123 = v37;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)&_os_log_default,
        OS_LOG_TYPE_ERROR,
        "Unable to calculate photos adjustments information for %@: %@",
        buf,
        0x16u);
    }
    objc_release(v40);
    objc_release(v38);
    v33 = 0LL;
    v36 = 0;
    goto LABEL_44;
  }
  v44 = objc_alloc(&OBJC_CLASS___PAMediaConversionServiceImageConversionJob);
  v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceJobIdentifierKey")));
  v46 = -[PAMediaConversionServiceImageConversionJob initWithRequestIdentifier:sourceResourceURLCollection:outputFileType:](
          v44,
          "initWithRequestIdentifier:sourceResourceURLCollection:outputFileType:",
          v45,
          v113,
          v23);
  objc_release(v45);
  -[PAMediaConversionServiceImageConversionJob setDestinationResourceURLCollection:](
    v46,
    "setDestinationResourceURLCollection:",
    v15);
  -[PAMediaConversionServiceImageConversionJob setMetadataPolicy:](v46, "setMetadataPolicy:", v24);
  v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOrientationKey")));
  objc_release(v47);
  if ( v47 )
  {
    v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionOrientationKey")));
    -[PAMediaConversionServiceImageConversionJob setOrientation:](
      v46,
      "setOrientation:",
      objc_msgSend(v48, "integerValue"));
    objc_release(v48);
    v49 = a9;
  }
  else
  {
    v62 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v14,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionRotationAngleDegreesKey")));
    objc_release(v62);
    v49 = a9;
    if ( v62 )
    {
      v63 = objc_retainAutoreleasedReturnValue(
              objc_msgSend(
                v14,
                "objectForKeyedSubscript:",
                CFSTR("PAMediaConversionServiceOptionRotationAngleDegreesKey")));
      -[PAMediaConversionServiceImageConversionJob setOrientation:](
        v46,
        "setOrientation:",
        IPAOrientationFromClockwiseRotation(objc_msgSend(v63, "integerValue")));
      objc_release(v63);
    }
    else
    {
      -[PAMediaConversionServiceImageConversionJob setOrientation:](v46, "setOrientation:", 0LL);
    }
  }
  v64 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionColorSpaceKey")));
  objc_release(v64);
  if ( v64 )
  {
    v65 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionColorSpaceKey")));
    v64 = objc_msgSend(v65, "integerValue");
    objc_release(v65);
    if ( (unsigned __int64)v64 >= 3 )
    {
      if ( v49 )
      {
        v118 = NSLocalizedDescriptionKey;
        v119 = CFSTR("Illegal ColorSpace option");
        v69 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v119,
                  &v118,
                  1LL));
        *v49 = objc_autorelease(
                 objc_retainAutoreleasedReturnValue(
                   +[NSError errorWithDomain:code:userInfo:](
                     &OBJC_CLASS___NSError,
                     "errorWithDomain:code:userInfo:",
                     CFSTR("PAMediaConversionServiceErrorDomain"),
                     2LL,
                     v69)));
        objc_release(v69);
      }
      v37 = 0LL;
      v33 = 0LL;
      goto LABEL_50;
    }
  }
  -[PAMediaConversionServiceImageConversionJob setColorspaceMode:](v46, "setColorspaceMode:", v64);
  v66 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionScaleFactorKey")));
  v67 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionMaximumPixelCountKey")));
  v68 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionMaximumLongSideLengthKey")));
  v106 = v67;
  v107 = v66;
  v105 = v68;
  if ( v66 )
  {
    objc_msgSend(v66, "doubleValue");
    -[PAMediaConversionServiceImageConversionJob setScaleFactor:](v46, "setScaleFactor:");
  }
  else if ( v67 )
  {
    -[PAMediaConversionServiceImageConversionJob setRequestedMaximumPixelCount:](
      v46,
      "setRequestedMaximumPixelCount:",
      objc_msgSend(v67, "integerValue"));
  }
  else
  {
    if ( !v68 )
    {
      v104 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v104,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        v110,
        CFSTR("ImageConversionService.m"),
        478LL,
        CFSTR("Missing scale parameters"));
      v37 = 0LL;
      v102 = 0;
      v33 = 0LL;
      v76 = 1;
      goto LABEL_99;
    }
    -[PAMediaConversionServiceImageConversionJob setRequestedMaximumLongSideLength:](
      v46,
      "setRequestedMaximumLongSideLength:",
      objc_msgSend(v68, "integerValue"));
  }
  v70 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v14,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionApplyOrientationTransformKey")));
  -[PAMediaConversionServiceImageConversionJob setApplySourceOrientationTransform:](
    v46,
    "setApplySourceOrientationTransform:",
    objc_msgSend(v70, "boolValue"));
  objc_release(v70);
  v71 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionFormatConversionOnlyKey")));
  -[PAMediaConversionServiceImageConversionJob setFormatConversionOnly:](
    v46,
    "setFormatConversionOnly:",
    objc_msgSend(v71, "boolValue"));
  objc_release(v71);
  v72 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "objectForKeyedSubscript:", CFSTR("PAMediaConversionServiceOptionRasterizationDPIKey")));
  v73 = v72;
  if ( v72 )
    -[PAMediaConversionServiceImageConversionJob setRasterizationDPI:](
      v46,
      "setRasterizationDPI:",
      -[NSAssertionHandler integerValue](v72, "integerValue"));
  v104 = v73;
  v74 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            v14,
            "objectForKeyedSubscript:",
            CFSTR("PAMediaConversionServiceOptionCropAdjustmentInformationKey")));
  v103 = v74;
  if ( !v74 )
  {
    v77 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v14,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey")));
    -[PAMediaConversionServiceImageConversionJob setAdjustmentInformation:](v46, "setAdjustmentInformation:", v77);
    objc_release(v77);
LABEL_73:
    v78 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v14,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionEnableOutputCorruptionDetectionHeuristicsKey")));
    -[PAMediaConversionServiceImageConversionJob setShouldCheckForOutputCorruption:](
      v46,
      "setShouldCheckForOutputCorruption:",
      objc_msgSend(v78, "boolValue"));
    objc_release(v78);
    v79 = objc_retainAutoreleasedReturnValue(
            objc_msgSend(
              v14,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionUseEmbeddedImageAsSourceKey")));
    -[PAMediaConversionServiceImageConversionJob setShouldUseEmbeddedImageAsSource:](
      v46,
      "setShouldUseEmbeddedImageAsSource:",
      objc_msgSend(v79, "boolValue"));
    objc_release(v79);
    +[PAMediaConversionServiceSharedUtilitiesServiceSide executeConversionJob:](
      &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
      "executeConversionJob:",
      v46);
    if ( !-[PAMediaConversionServiceImageConversionJob status](v46, "status") )
    {
      v99 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v99,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        v110,
        CFSTR("ImageConversionService.m"),
        504LL,
        CFSTR("Unexpected unknown image conversion job state after execution"));
      objc_release(v99);
    }
    v80 = -[PAMediaConversionServiceImageConversionJob status](v46, "status");
    v81 = v80 == (void *)1;
    if ( v80 == (void *)1 )
    {
      v102 = 1;
      v33 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob destinationData](v46, "destinationData"));
      objc_release(v33);
      if ( v33 )
        v33 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob destinationData](v46, "destinationData"));
      -[PAMediaConversionServiceImageConversionJob outputImageSize](v46, "outputImageSize");
      v117.width = v82;
      v117.height = v83;
      v84 = objc_retainAutoreleasedReturnValue(
              -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                v46,
                "sourceResourceURLCollection"));
      if ( -[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired](v84, "isBlastDoorAccessRequired") )
      {
        v85 = objc_retainAutoreleasedReturnValue(
                -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                  v46,
                  "sourceResourceURLCollection"));
        v37 = objc_retainAutoreleasedReturnValue(
                -[PAMediaConversionServiceResourceURLCollection blastDoorMainSourceProperties](
                  v85,
                  "blastDoorMainSourceProperties"));
        objc_release(v37);
        objc_release(v85);
        objc_release(v84);
        if ( v37 )
        {
          v86 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                    v46,
                    "sourceResourceURLCollection"));
          v87 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceResourceURLCollection blastDoorMainSourceProperties](
                    v86,
                    "blastDoorMainSourceProperties"));
          objc_msgSend(
            v112,
            "setObject:forKeyedSubscript:",
            v87,
            CFSTR("PAMediaConversionServiceBlastDoorSourcePropertiesKey"));
          objc_release(v87);
          objc_release(v86);
          v88 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                    v46,
                    "sourceResourceURLCollection"));
          v89 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceResourceURLCollection blastDoorVideoComplementProperties](
                    v88,
                    "blastDoorVideoComplementProperties"));
          objc_msgSend(
            v112,
            "setObject:forKeyedSubscript:",
            v89,
            CFSTR("PAMediaConversionServiceBlastDoorVideoComplementSourcePropertiesKey"));
          objc_release(v89);
          objc_release(v88);
          v90 = objc_retainAutoreleasedReturnValue(
                  -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                    v46,
                    "sourceResourceURLCollection"));
          v91 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection blastDoorSourceURL](v90, "blastDoorSourceURL"));
          objc_release(v91);
          objc_release(v90);
          if ( v91 )
          {
            v100 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
            v92 = objc_retainAutoreleasedReturnValue(
                    -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                      v46,
                      "sourceResourceURLCollection"));
            v93 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection blastDoorSourceURL](v92, "blastDoorSourceURL"));
            v115 = 0LL;
            v101 = -[NSFileManager removeItemAtURL:error:](v100, "removeItemAtURL:error:", v93, &v115);
            v84 = (PAMediaConversionServiceResourceURLCollection *)objc_retain(v115);
            objc_release(v93);
            objc_release(v92);
            objc_release(v100);
            if ( (v101 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            {
              *(_DWORD *)buf = 138543362;
              v121 = v84;
              _os_log_error_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_LOG_TYPE_ERROR,
                "[BlastDoor] Failed to remove temporary blast door source file: %{public}@",
                buf,
                0xCu);
            }
            v37 = 0LL;
            v49 = a9;
            goto LABEL_91;
          }
          v76 = 0;
          v37 = 0LL;
        }
        else
        {
          v76 = 0;
        }
        v102 = 1;
        v49 = a9;
        goto LABEL_98;
      }
      v37 = 0LL;
    }
    else
    {
      v94 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob error](v46, "error"));
      if ( v94 )
      {
        v37 = (NSDictionary *)v94;
        v76 = 0;
LABEL_94:
        v102 = 0;
        v33 = 0LL;
        goto LABEL_98;
      }
      v102 = v81;
      v95 = objc_retainAutoreleasedReturnValue(
              -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                v46,
                "sourceResourceURLCollection"));
      v76 = -[PAMediaConversionServiceResourceURLCollection isBlastDoorAccessRequired](v95, "isBlastDoorAccessRequired");
      objc_release(v95);
      if ( !v76 )
      {
        v37 = 0LL;
        goto LABEL_94;
      }
      v84 = objc_retainAutoreleasedReturnValue(
              -[PAMediaConversionServiceImageConversionJob sourceResourceURLCollection](
                v46,
                "sourceResourceURLCollection"));
      v37 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceResourceURLCollection blastDoorError](v84, "blastDoorError"));
      v33 = 0LL;
    }
LABEL_91:
    objc_release(v84);
    v76 = 0;
    goto LABEL_98;
  }
  v75 = objc_retainAutoreleasedReturnValue(
          -[ImageConversionService adjustmentInformationForCropAdjustmentInformation:sourceURLCollection:error:](
            v110,
            "adjustmentInformationForCropAdjustmentInformation:sourceURLCollection:error:",
            v74,
            v113,
            v49));
  -[PAMediaConversionServiceImageConversionJob setAdjustmentInformation:](v46, "setAdjustmentInformation:", v75);
  objc_release(v75);
  v33 = objc_retainAutoreleasedReturnValue(-[PAMediaConversionServiceImageConversionJob adjustmentInformation](v46, "adjustmentInformation"));
  objc_release(v33);
  if ( v33 )
    goto LABEL_73;
  v37 = 0LL;
  v102 = 0;
  v76 = 1;
LABEL_98:
  objc_release(v103);
LABEL_99:
  objc_release(v104);
  objc_release(v105);
  objc_release(v106);
  objc_release(v107);
  objc_release(v46);
  if ( v76 )
    goto LABEL_51;
  if ( !v102 )
  {
    v36 = 0;
    if ( !v49 )
      goto LABEL_52;
    goto LABEL_45;
  }
  if ( v33 )
  {
    v34 = v37;
    v32 = v33;
LABEL_23:
    if ( v15 )
    {
      v35 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "resourceURLForRole:", CFSTR("PAMediaConversionResourceRoleMainResource")));
      v114 = v34;
      v36 = -[NSData writeToURL:options:error:](v32, "writeToURL:options:error:", v35, 0LL, &v114);
      v37 = (NSDictionary *)objc_retain(v114);
      objc_release(v34);
      if ( (v36 & 1) == 0 && os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
      {
        *(_DWORD *)buf = 138543362;
        v121 = (PAMediaConversionServiceResourceURLCollection *)v37;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)&_os_log_default,
          OS_LOG_TYPE_ERROR,
          "Error writing result image data to URL passed in destination URL collection: %{public}@",
          buf,
          0xCu);
      }
      objc_release(v35);
    }
    else
    {
      if ( a6 )
      {
        v32 = objc_retainAutorelease(v32);
        *a6 = v32;
      }
      else
      {
        v98 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
        -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
          v98,
          "handleFailureInMethod:object:file:lineNumber:description:",
          a2,
          v110,
          CFSTR("ImageConversionService.m"),
          542LL,
          CFSTR("Invalid request output configuration, missing both destination URL collection and data pointer"));
        objc_release(v98);
      }
      v36 = 1;
      v37 = v34;
    }
    goto LABEL_37;
  }
  v32 = 0LL;
  v36 = 1;
LABEL_37:
  v50 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v117.width));
  objc_msgSend(v112, "setObject:forKeyedSubscript:", v50, CFSTR("PAMediaConversionServicePixelWidthKey"));
  objc_release(v50);
  v51 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithDouble:](&OBJC_CLASS___NSNumber, "numberWithDouble:", v117.height));
  objc_msgSend(v112, "setObject:forKeyedSubscript:", v51, CFSTR("PAMediaConversionServicePixelHeightKey"));
  objc_release(v51);
  if ( a7 )
    *a7 = objc_retainAutorelease(v23);
LABEL_39:
  v49 = a9;
  *v111 = objc_retainAutorelease(v112);
  v33 = v32;
  if ( !a9 )
    goto LABEL_52;
LABEL_45:
  if ( (v36 & 1) == 0 )
  {
    v46 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
    v52 = objc_retainAutoreleasedReturnValue(objc_msgSend(v113, "logMessageSummary"));
    -[PAMediaConversionServiceImageConversionJob setObject:forKeyedSubscript:](
      v46,
      "setObject:forKeyedSubscript:",
      v52,
      CFSTR("PAMediaConversionServiceErrorSourceResourceSummaryKey"));
    objc_release(v52);
    v53 = objc_retainAutoreleasedReturnValue(-[NSDictionary description](v37, "description"));
    -[PAMediaConversionServiceImageConversionJob setObject:forKeyedSubscript:](
      v46,
      "setObject:forKeyedSubscript:",
      v53,
      CFSTR("PAMediaConversionServiceErrorUnderlyingErrorDescriptionKey"));
    objc_release(v53);
    v54 = objc_retainAutoreleasedReturnValue(-[NSDictionary domain](v37, "domain"));
    v55 = v23;
    v56 = v24;
    v57 = v15;
    v58 = v49;
    v59 = (unsigned int)objc_msgSend(v54, "isEqualToString:", CFSTR("BlastDoor.Explosion"));
    objc_release(v54);
    if ( v59 )
      v60 = 12LL;
    else
      v60 = 2LL;
    *v58 = objc_autorelease(
             objc_retainAutoreleasedReturnValue(
               +[NSError errorWithDomain:code:userInfo:](
                 &OBJC_CLASS___NSError,
                 "errorWithDomain:code:userInfo:",
                 CFSTR("PAMediaConversionServiceErrorDomain"),
                 v60,
                 v46)));
    v15 = v57;
    v24 = v56;
    v23 = v55;
LABEL_50:
    objc_release(v46);
LABEL_51:
    v36 = 0;
  }
LABEL_52:
  objc_release(v24);
  objc_release(v37);
  objc_release(v112);
  objc_release(v33);
  objc_release(v23);
  objc_release(v15);
  objc_release(v113);
  objc_release(v14);
  return v36;
}