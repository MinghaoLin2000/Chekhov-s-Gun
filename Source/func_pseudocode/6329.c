+[PAMediaConversionServiceSharedUtilitiesServiceSide executeConversionJob:]
void __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide executeConversionJob:](id a1, SEL a2, id a3)
{
  id v5; // x19
  void *v6; // x20
  void *v7; // x20
  NSNumber *v8; // x23
  const __CFString *v9; // x2
  void *v10; // x24
  unsigned int v11; // w26
  unsigned int v12; // w23
  void *v13; // x25
  double v14; // d0
  int v15; // w28
  double v16; // d1
  os_signpost_id_t v17; // x23
  id v18; // x0
  void *v19; // x24
  void *v20; // x22
  id v21; // x24
  void *v22; // x25
  id v23; // x25
  void *v24; // x26
  void *v25; // x25
  NSNumber *v26; // x26
  id v27; // x0
  CGImageSource *v28; // x25
  CGImageDestination *v29; // x23
  void *v30; // x27
  void *v31; // x0
  void *v32; // x24
  __int64 v33; // x25
  double v34; // d0
  CGImage *v35; // x0
  CGImage *v36; // x21
  NSAssertionHandler *v37; // x23
  double v38; // d0
  NSNumber *v39; // x21
  void *v40; // x0
  NSNumber *v41; // x21
  size_t PrimaryImageIndex; // x0
  void *v43; // x21
  void *v44; // x23
  __int64 v45; // x2
  void *v46; // x21
  void *v47; // x23
  const char *v48; // x3
  NSAssertionHandler *v49; // x20
  id v50; // [xsp+8h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-B0h] BYREF
  _BYTE v52[14]; // [xsp+14h] [xbp-ACh]
  __int16 v53; // [xsp+22h] [xbp-9Eh]
  unsigned int v54; // [xsp+24h] [xbp-9Ch]
  __int16 v55; // [xsp+28h] [xbp-98h]
  unsigned int v56; // [xsp+2Ah] [xbp-96h]
  __int16 v57; // [xsp+2Eh] [xbp-92h]
  void *v58; // [xsp+30h] [xbp-90h]
  __int16 v59; // [xsp+38h] [xbp-88h]
  int v60; // [xsp+3Ah] [xbp-86h]
  __int16 v61; // [xsp+3Eh] [xbp-82h]
  int v62; // [xsp+40h] [xbp-80h]
  __int16 v63; // [xsp+44h] [xbp-7Ch]
  int v64; // [xsp+46h] [xbp-7Ah]

  v5 = objc_retain(a3);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sourceResourceURLCollection"));
  objc_release(v6);
  if ( !v6 )
  {
    v49 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v49,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1276LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("job.sourceResourceURLCollection"));
    objc_release(v49);
  }
  if ( ((unsigned int)objc_msgSend(v5, "validateSourceAndOptions") & 1) != 0 )
  {
    v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "destinationImageProperties"));
    if ( (unsigned int)objc_msgSend(v5, "sourceRequiresRasterization") )
    {
      v8 = objc_retainAutoreleasedReturnValue(
             +[NSNumber numberWithInteger:](
               &OBJC_CLASS___NSNumber,
               "numberWithInteger:",
               objc_msgSend(v5, "rasterizationDPI")));
      objc_msgSend(v7, "setObject:forKeyedSubscript:", v8, kCGImageSourceRasterizationDPI);
      objc_release(v8);
    }
    if ( objc_msgSend(v5, "colorspaceMode") == (void *)2 )
    {
      v9 = (const __CFString *)&__kCFBooleanTrue;
    }
    else
    {
      if ( objc_msgSend(v5, "colorspaceMode") )
      {
LABEL_12:
        v10 = objc_msgSend(v5, "orientationTransformBehavior");
        if ( ((unsigned int)objc_msgSend(v5, "formatConversionOnly") & 1) != 0 || v10 != (void *)2 )
          v11 = (unsigned int)objc_msgSend(v5, "sourceRequiresRasterization");
        else
          v11 = 1;
        v12 = (unsigned int)objc_msgSend(v5, "hasPhotosAdjustments");
        if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
        {
          v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sourceUTI"));
          objc_msgSend(v5, "sourceImageSize");
          v15 = (int)v14;
          objc_msgSend(v5, "sourceImageSize");
          *(_DWORD *)buf = 67110914;
          *(_DWORD *)v52 = v12;
          *(_WORD *)&v52[4] = 2048;
          *(_QWORD *)&v52[6] = v10;
          v53 = 1024;
          v54 = v12;
          v55 = 1024;
          v56 = v11;
          v57 = 2114;
          v58 = v13;
          v59 = 1024;
          v60 = 1;
          v61 = 1024;
          v62 = v15;
          v63 = 1024;
          v64 = (int)v16;
          _os_log_impl(
            (void *)&_mh_execute_header,
            (os_log_t)&_os_log_default,
            OS_LOG_TYPE_INFO,
            "Image conversion: requiresCustomOrientationTransform %d, orientationBehavior %lu, requiresPhotosAdjustmentRe"
            "ndering %d, requiresDrawing %d, source UTI %{public}@, canProcessFullSizeRaw %d, inputImageSize %dx%d",
            buf,
            0x3Au);
          objc_release(v13);
        }
        if ( v12 )
        {
          v17 = os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, v5);
          v18 = objc_retain(&_os_log_default);
          if ( v17 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
          {
            v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "requestIdentifier"));
            *(_DWORD *)buf = 138543362;
            *(_QWORD *)v52 = v19;
            _os_signpost_emit_with_name_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_SIGNPOST_INTERVAL_BEGIN,
              v17,
              "com.apple.photos.mediaconversion.service.adjusted",
              "Media conversion request %{public}@",
              buf,
              0xCu);
            objc_release(v19);
          }
          objc_release(&_os_log_default);
          objc_msgSend(a1, "registerPhotosAdjustmentsSubsystems");
          if ( !(unsigned int)objc_msgSend(v5, "hasPhotosAdjustments") )
          {
            v37 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
            -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
              v37,
              "handleFailureInMethod:object:file:lineNumber:description:",
              a2,
              a1,
              CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
              1347LL,
              CFSTR("Unknown photos adjustments rendering request"));
            objc_release(v37);
            objc_msgSend(v5, "setStatus:", 2LL);
LABEL_55:
            objc_release(v7);
            goto LABEL_56;
          }
          v50 = 0LL;
          v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(a1, "compositionForConversionJob:error:", v5, &v50));
          v21 = objc_retain(v50);
          if ( !v20 )
          {
            objc_msgSend(v5, "setStatus:", 2LL);
            objc_msgSend(v5, "setError:", v21);
            v40 = v21;
LABEL_54:
            objc_release(v40);
            goto LABEL_55;
          }
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v20, "objectForKeyedSubscript:", CFSTR("orientation")));
          objc_release(v22);
          if ( !v22 )
          {
            v23 = objc_alloc((Class)&OBJC_CLASS___NUGenericAdjustment);
            v24 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUIdentifier), "initWithName:", CFSTR("Orientation"));
            v25 = objc_msgSend(v23, "initWithIdentifier:", v24);
            objc_release(v24);
            v26 = objc_retainAutoreleasedReturnValue(
                    +[NSNumber numberWithInteger:](
                      &OBJC_CLASS___NSNumber,
                      "numberWithInteger:",
                      objc_msgSend(v5, "sourceOrientation")));
            objc_msgSend(v25, "setObject:forKeyedSubscript:", v26, CFSTR("value"));
            objc_release(v26);
            objc_msgSend(v20, "setObject:forKeyedSubscript:", v25, CFSTR("orientation"));
            objc_release(v25);
          }
          objc_release(v21);
          objc_msgSend(a1, "configureSourcesForComposition:fromPhotosAdjustmentsJob:", v20, v5);
          objc_msgSend(a1, "renderPhotosAdjustmentsComposition:forConversionJob:", v20, v5);
          if ( (unsigned int)objc_msgSend(v5, "shouldCheckForOutputCorruption") )
            objc_msgSend(a1, "checkConversionResultForOutputCorruptionAndMarkJobAsFailed:", v5);
          v27 = objc_retain(&_os_log_default);
          if ( v17 - 1 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
          {
            *(_WORD *)buf = 0;
            _os_signpost_emit_with_name_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_SIGNPOST_INTERVAL_END,
              v17,
              "com.apple.photos.mediaconversion.service.adjusted",
              (const char *)&unk_10003D69F,
              buf,
              2u);
          }
          objc_release(&_os_log_default);
LABEL_53:
          v40 = v20;
          goto LABEL_54;
        }
        v28 = (CGImageSource *)objc_msgSend(v5, "imageSource");
        v29 = (CGImageDestination *)objc_msgSend(v5, "imageDestination");
        v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sourceUTI"));
        v20 = objc_retainAutoreleasedReturnValue(
                +[PFUniformTypeUtilities typeWithIdentifier:](
                  &OBJC_CLASS___PFUniformTypeUtilities,
                  "typeWithIdentifier:",
                  v30));
        objc_release(v30);
        if ( v11 )
        {
          v31 = objc_msgSend(v5, "sourceImageRef");
          if ( !v31 )
            goto LABEL_51;
          v32 = v31;
          v33 = sub_10001735C(v31, v20, objc_msgSend(v5, "colorspaceMode"));
          objc_msgSend(v5, "scaleFactor");
          v35 = (CGImage *)objc_msgSend(
                             a1,
                             "newScaledImageForImageRef:scaleFactor:orientation:colorspace:",
                             v32,
                             objc_msgSend(v5, "orientation"),
                             v33,
                             v34);
          if ( !v35 )
          {
            if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
            {
              v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sourceResourceURLCollection"));
              v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "logMessageSummary"));
              *(_DWORD *)buf = 138412290;
              *(_QWORD *)v52 = v47;
              v48 = "Unable to create output image for %@";
              goto LABEL_58;
            }
LABEL_51:
            v45 = 2LL;
            goto LABEL_52;
          }
          v36 = v35;
          CGImageDestinationAddImage(v29, v35, (CFDictionaryRef)v7);
          CGImageRelease(v36);
LABEL_46:
          if ( CGImageDestinationFinalize(v29) )
          {
            v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "imageDestinationData"));
            objc_msgSend(v5, "setDestinationData:", v43);
            objc_release(v43);
            v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "imageDestinationData"));
            +[PAMediaConversionServiceSharedUtilitiesServiceSide imageSizeForImageData:](
              &OBJC_CLASS___PAMediaConversionServiceSharedUtilitiesServiceSide,
              "imageSizeForImageData:",
              v44);
            objc_msgSend(v5, "setOutputImageSize:");
            objc_release(v44);
            v45 = 1LL;
LABEL_52:
            objc_msgSend(v5, "setStatus:", v45);
            goto LABEL_53;
          }
          if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
          {
            v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "sourceResourceURLCollection"));
            v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v46, "logMessageSummary"));
            *(_DWORD *)buf = 138412290;
            *(_QWORD *)v52 = v47;
            v48 = "Unable to finalize output image for image conversion of %@";
LABEL_58:
            _os_log_error_impl(
              (void *)&_mh_execute_header,
              (os_log_t)&_os_log_default,
              OS_LOG_TYPE_ERROR,
              v48,
              buf,
              0xCu);
            objc_release(v47);
            objc_release(v46);
            goto LABEL_51;
          }
          goto LABEL_51;
        }
        objc_msgSend(v5, "scaleFactor");
        if ( v38 != 1.0 )
        {
          v39 = objc_retainAutoreleasedReturnValue(
                  +[NSNumber numberWithInteger:](
                    &OBJC_CLASS___NSNumber,
                    "numberWithInteger:",
                    objc_msgSend(v5, "requestedOrCalculatedMaximumLongSideLength")));
          objc_msgSend(v7, "setObject:forKeyedSubscript:", v39, kCGImageDestinationImageMaxPixelSize);
          objc_release(v39);
        }
        objc_msgSend(v7, "setObject:forKeyedSubscript:", kCGImageSourceDecodeToSDR, kCGImageSourceDecodeRequest);
        objc_msgSend(v7, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, kCGImageDestinationCreateHDRGainMap);
        objc_msgSend(v7, "setObject:forKeyedSubscript:", &__kCFBooleanTrue, kCGImageDestinationPreserveGainMap);
        objc_msgSend(v7, "setObject:forKeyedSubscript:", &off_100043E60, kCGImageDestinationLossyCompressionQuality);
        if ( v10 )
        {
          if ( v10 == (void *)1 )
          {
            objc_msgSend(
              v7,
              "setObject:forKeyedSubscript:",
              &__kCFBooleanTrue,
              kCGImageSourceCreateThumbnailWithTransform);
LABEL_44:
            v41 = objc_retainAutoreleasedReturnValue(
                    +[NSNumber numberWithInteger:](
                      &OBJC_CLASS___NSNumber,
                      "numberWithInteger:",
                      objc_msgSend(v5, "requestedOrCalculatedMaximumLongSideLength")));
            objc_msgSend(v7, "setObject:forKeyedSubscript:", v41, kCGImageDestinationImageMaxPixelSize);
            objc_release(v41);
          }
        }
        else if ( (unsigned int)objc_msgSend(v5, "shouldUseEmbeddedImageAsSource") )
        {
          goto LABEL_44;
        }
        PrimaryImageIndex = CGImageSourceGetPrimaryImageIndex(v28);
        CGImageDestinationAddImageFromSource(v29, v28, PrimaryImageIndex, (CFDictionaryRef)v7);
        goto LABEL_46;
      }
      v9 = CFSTR("sRGB");
    }
    objc_msgSend(v7, "setObject:forKeyedSubscript:", v9, kCGImageDestinationOptimizeColorForSharing);
    goto LABEL_12;
  }
  objc_msgSend(v5, "setStatus:", 2LL);
LABEL_56:
  objc_release(v5);
}