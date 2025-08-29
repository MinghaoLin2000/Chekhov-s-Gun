-[VideoStillImageExtractionTask extractStillImage]
void __cdecl -[VideoStillImageExtractionTask extractStillImage](VideoStillImageExtractionTask *self, SEL a2)
{
  AVAsset *v3; // x19
  void *v4; // x20
  const void *v5; // x22
  id v6; // x23
  double v7; // d0
  double v8; // d8
  NSMutableDictionary *v9; // x22
  void *v10; // x24
  NSMutableDictionary *v11; // x22
  void *v12; // x25
  NSMutableDictionary *v13; // x25
  const __CFString *v14; // x27
  PAMediaConversionServiceResourceURLCollection *v15; // x25
  id v16; // x0
  void *v17; // x26
  const __CFString *v18; // x0
  NSDictionary *v19; // x24
  NSError *v20; // x22
  void *v21; // x0
  NSMutableDictionary *v22; // x24
  NSDictionary *v23; // x28
  CIImage *v24; // x25
  void *v25; // x26
  id v26; // x28
  id v27; // x24
  id v28; // x0
  id v29; // x27
  double width; // d0
  NSMutableDictionary *v31; // x23
  NSNumber *v32; // x24
  NSNumber *v33; // x21
  NSDictionary *v34; // x22
  CGImage *v35; // x0
  CGImage *v36; // x24
  NSDictionary *v37; // x28
  CGImageDestination *v38; // x0
  CGImageDestination *v39; // x24
  bool v40; // w22
  NSNumber *v41; // x26
  NSNumber *v42; // x21
  NSDictionary *v43; // x22
  const __CFString **v44; // x2
  NSErrorUserInfoKey *v45; // x3
  id v46; // [xsp+8h] [xbp-168h]
  id v47; // [xsp+10h] [xbp-160h]
  const __CFString *v48; // [xsp+18h] [xbp-158h]
  NSDictionary *v49; // [xsp+20h] [xbp-150h]
  id v50; // [xsp+28h] [xbp-148h] BYREF
  CGSize v51; // [xsp+30h] [xbp-140h] BYREF
  CMTimeEpoch epoch; // [xsp+40h] [xbp-130h]
  id v53; // [xsp+48h] [xbp-128h] BYREF
  CFTypeRef arg; // [xsp+50h] [xbp-120h] BYREF
  _QWORD v55[3]; // [xsp+58h] [xbp-118h] BYREF
  _QWORD v56[2]; // [xsp+70h] [xbp-100h] BYREF
  _QWORD v57[2]; // [xsp+80h] [xbp-F0h] BYREF
  NSErrorUserInfoKey v58; // [xsp+90h] [xbp-E0h] BYREF
  const __CFString *v59; // [xsp+98h] [xbp-D8h] BYREF
  NSErrorUserInfoKey v60; // [xsp+A0h] [xbp-D0h] BYREF
  const __CFString *v61; // [xsp+A8h] [xbp-C8h] BYREF
  NSErrorUserInfoKey v62; // [xsp+B0h] [xbp-C0h] BYREF
  const __CFString *v63; // [xsp+B8h] [xbp-B8h] BYREF
  _QWORD v64[2]; // [xsp+C0h] [xbp-B0h] BYREF
  _QWORD v65[2]; // [xsp+D0h] [xbp-A0h] BYREF
  NSErrorUserInfoKey v66; // [xsp+E0h] [xbp-90h] BYREF
  const __CFString *v67; // [xsp+E8h] [xbp-88h] BYREF
  NSErrorUserInfoKey v68; // [xsp+F0h] [xbp-80h] BYREF
  const __CFString *v69; // [xsp+F8h] [xbp-78h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask asset](self, "asset"));
  if ( v3 )
  {
    v4 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___AVAssetImageGenerator), "initWithAsset:", v3);
    objc_msgSend(v4, "setAppliesPreferredTrackTransform:", 1LL);
    memset(v55, 0, sizeof(v55));
    v51 = *(CGSize *)&kCMTimeZero.value;
    epoch = kCMTimeZero.epoch;
    v53 = 0LL;
    v5 = +[PFMediaUtilities copyCGImageFromImageGenerator:atTime:actualTime:error:](
           &OBJC_CLASS___PFMediaUtilities,
           "copyCGImageFromImageGenerator:atTime:actualTime:error:",
           v4,
           &v51,
           v55,
           &v53);
    v6 = objc_retain(v53);
    arg = v5;
    if ( !v5 )
    {
      -[VideoConversionTask setError:](self, "setError:", v6);
LABEL_33:
      objc_release(v6);
      objc_release(v4);
      goto LABEL_34;
    }
    PFCGImageApplyTemporaryAVAssetImageGeneratorColorSpaceWorkaround(&arg);
    CFAutorelease(arg);
    -[VideoStillImageExtractionTask posterFrameScaleFactorForCGImage:](self, "posterFrameScaleFactorForCGImage:", arg);
    v8 = v7;
    v9 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v10 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v9,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionColorSpaceKey")));
    objc_release(v10);
    objc_release(v9);
    if ( v10 )
    {
      v11 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
      v12 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                v11,
                "objectForKeyedSubscript:",
                CFSTR("PAMediaConversionServiceOptionColorSpaceKey")));
      v10 = objc_msgSend(v12, "integerValue");
      objc_release(v12);
      objc_release(v11);
      if ( (unsigned __int64)v10 >= 3 )
      {
        v68 = NSLocalizedDescriptionKey;
        v69 = CFSTR("Illegal ColorSpace option");
        v19 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v69,
                  &v68,
                  1LL));
        v20 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  2LL,
                  v19));
        -[VideoConversionTask setError:](self, "setError:", v20);
        objc_release(v20);
        v21 = v19;
LABEL_32:
        objc_release(v21);
        goto LABEL_33;
      }
    }
    v13 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
    v14 = objc_retainAutoreleasedReturnValue(
            -[NSMutableDictionary objectForKeyedSubscript:](
              v13,
              "objectForKeyedSubscript:",
              CFSTR("PAMediaConversionServiceOptionOutputFileTypeKey")));
    objc_release(v13);
    if ( !v14 )
    {
      v15 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask outputURLCollection](self, "outputURLCollection"));
      v16 = objc_retainAutoreleasedReturnValue(
              -[PAMediaConversionServiceResourceURLCollection typeIdentifierForResourceURLWithRole:](
                v15,
                "typeIdentifierForResourceURLWithRole:",
                CFSTR("PAMediaConversionResourceRoleMainResource")));
      v17 = v16;
      if ( v16 )
        v18 = (const __CFString *)objc_retain(v16);
      else
        v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(UTTypeJPEG, "identifier"));
      v14 = v18;
      objc_release(v17);
      objc_release(v15);
    }
    if ( -[VideoConversionTask requiresPhotosAdjustmentRendering](self, "requiresPhotosAdjustmentRendering") )
    {
      +[PAMediaConversionServiceSharedUtilitiesServiceSide registerPhotosAdjustmentsSubsystems](
        &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
        "registerPhotosAdjustmentsSubsystems");
      v22 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask options](self, "options"));
      v23 = objc_retainAutoreleasedReturnValue(
              -[NSMutableDictionary objectForKeyedSubscript:](
                v22,
                "objectForKeyedSubscript:",
                CFSTR("PAMediaConversionServiceOptionAdjustmentInformationKey")));
      objc_release(v22);
      v24 = objc_retainAutoreleasedReturnValue(+[CIImage imageWithCGImage:](&OBJC_CLASS___CIImage, "imageWithCGImage:", arg));
      v25 = objc_retainAutoreleasedReturnValue(
              +[PIPhotoEditHelper imageSourceWithCIImage:orientation:](
                &OBJC_CLASS___PIPhotoEditHelper,
                "imageSourceWithCIImage:orientation:",
                v24,
                1LL));
      v49 = v23;
      v50 = v6;
      v26 = objc_retainAutoreleasedReturnValue(
              +[PAMediaConversionServiceSharedUtilitiesServiceSide compositionForPhotosAdjustmentInformation:error:](
                &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                "compositionForPhotosAdjustmentInformation:error:",
                v23,
                &v50));
      v27 = objc_retain(v50);
      objc_release(v6);
      if ( v26 )
      {
        v47 = v27;
        objc_msgSend(v26, "setObject:forKeyedSubscript:", v25, CFSTR("source"));
        objc_msgSend(v26, "setMediaType:", 1LL);
        v48 = v14;
        v28 = objc_retainAutoreleasedReturnValue(
                +[PAMediaConversionServiceSharedUtilitiesServiceSide exporterImageOptionsForScaleFactor:maximumPixelCount:metadataPolicy:shouldApplyOrientationTransform:outputFileType:](
                  &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                  "exporterImageOptionsForScaleFactor:maximumPixelCount:metadataPolicy:shouldApplyOrientationTransform:outputFileType:",
                  0LL,
                  0LL,
                  1LL,
                  v14,
                  v8));
        v51 = CGSizeZero;
        v46 = v28;
        v29 = objc_retainAutoreleasedReturnValue(
                +[PAMediaConversionServiceSharedUtilitiesServiceSide imageDataForPhotosAdjustmentsComposition:source:exporterImageOptions:outOutputSize:job:](
                  &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
                  "imageDataForPhotosAdjustmentsComposition:source:exporterImageOptions:outOutputSize:job:",
                  v26,
                  v25));
        if ( v29
          || (width = v51.width, v51.width == CGSizeZero.width) && (width = v51.height, v51.height == CGSizeZero.height) )
        {
          -[VideoStillImageExtractionTask setImageData:](self, "setImageData:", v29);
          v31 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](self, "resultInformation"));
          v64[0] = CFSTR("PAMediaConversionServicePixelWidthKey");
          v32 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", (__int64)v51.width));
          v64[1] = CFSTR("PAMediaConversionServicePixelHeightKey");
          v65[0] = v32;
          v33 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", (__int64)v51.height));
          v65[1] = v33;
          v34 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    v65,
                    v64,
                    2LL));
          -[NSMutableDictionary addEntriesFromDictionary:](v31, "addEntriesFromDictionary:", v34);
          objc_release(v34);
          objc_release(v33);
        }
        else
        {
          v66 = NSLocalizedDescriptionKey;
          v67 = CFSTR("Unable to render video still frame or determine output size");
          v31 = objc_retainAutoreleasedReturnValue(
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    &v67,
                    &v66,
                    1LL,
                    width));
          v32 = objc_retainAutoreleasedReturnValue(
                  +[NSError errorWithDomain:code:userInfo:](
                    &OBJC_CLASS___NSError,
                    "errorWithDomain:code:userInfo:",
                    CFSTR("PAMediaConversionServiceErrorDomain"),
                    2LL,
                    v31));
          -[VideoConversionTask setError:](self, "setError:", v32);
        }
        objc_release(v32);
        objc_release(v31);
        objc_release(v29);
        objc_release(v46);
        v27 = v47;
        v14 = v48;
      }
      else
      {
        -[VideoConversionTask setError:](self, "setError:", v27);
      }
      objc_release(v26);
      objc_release(v25);
      v6 = v27;
      v37 = v49;
      goto LABEL_31;
    }
    if ( fabs(v8 + -1.0) > 2.22044605e-16 )
    {
      v35 = +[PAMediaConversionServiceSharedUtilitiesServiceSide newScaledImageForImageRef:scaleFactor:orientation:colorspace:](
              &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
              "newScaledImageForImageRef:scaleFactor:orientation:colorspace:",
              arg,
              1LL,
              sub_10001735C(arg, 0LL, v10),
              v8);
      if ( !v35 )
      {
        v62 = NSLocalizedDescriptionKey;
        v63 = CFSTR("Unable to rotate image to preferred orientation");
        v37 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v63,
                  &v62,
                  1LL));
        v24 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("PAMediaConversionServiceErrorDomain"),
                  2LL,
                  v37));
        -[VideoConversionTask setError:](self, "setError:", v24);
        goto LABEL_31;
      }
      v36 = v35;
      CFAutorelease(v35);
      arg = v36;
    }
    v37 = objc_retainAutoreleasedReturnValue(+[NSMutableData data](&OBJC_CLASS___NSMutableData, "data"));
    v38 = CGImageDestinationCreateWithData((CFMutableDataRef)v37, v14, 1uLL, 0LL);
    if ( v38 )
    {
      v39 = v38;
      CGImageDestinationAddImage(v38, (CGImageRef)arg, (CFDictionaryRef)&__NSDictionary0__struct);
      v40 = CGImageDestinationFinalize(v39);
      CFRelease(v39);
      if ( v40 )
      {
        -[VideoStillImageExtractionTask setImageData:](self, "setImageData:", v37);
        v24 = objc_retainAutoreleasedReturnValue(-[VideoConversionTask resultInformation](self, "resultInformation"));
        v56[0] = CFSTR("PAMediaConversionServicePixelWidthKey");
        v41 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithUnsignedLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithUnsignedLong:",
                  CGImageGetWidth((CGImageRef)arg)));
        v56[1] = CFSTR("PAMediaConversionServicePixelHeightKey");
        v57[0] = v41;
        v42 = objc_retainAutoreleasedReturnValue(
                +[NSNumber numberWithUnsignedLong:](
                  &OBJC_CLASS___NSNumber,
                  "numberWithUnsignedLong:",
                  CGImageGetHeight((CGImageRef)arg)));
        v57[1] = v42;
        v43 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  v57,
                  v56,
                  2LL));
        -[CIImage addEntriesFromDictionary:](v24, "addEntriesFromDictionary:", v43);
        objc_release(v43);
        objc_release(v42);
LABEL_30:
        objc_release(v41);
LABEL_31:
        objc_release(v24);
        objc_release(v37);
        v21 = (void *)v14;
        goto LABEL_32;
      }
      v58 = NSLocalizedDescriptionKey;
      v59 = CFSTR("Unable to finalize image");
      v44 = &v59;
      v45 = &v58;
    }
    else
    {
      v60 = NSLocalizedDescriptionKey;
      v61 = CFSTR("Unable to create image destination");
      v44 = &v61;
      v45 = &v60;
    }
    v24 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              v44,
              v45,
              1LL));
    v41 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              2LL,
              v24));
    -[VideoConversionTask setError:](self, "setError:", v41);
    goto LABEL_30;
  }
LABEL_34:
  objc_release(v3);
}