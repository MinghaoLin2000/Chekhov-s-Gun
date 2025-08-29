+[PAMediaConversionServiceSharedUtilitiesServiceSide renderPhotosAdjustmentsComposition:forConversionJob:]
void __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide renderPhotosAdjustmentsComposition:forConversionJob:](
        id a1,
        SEL a2,
        id a3,
        id a4)
{
  id v7; // x25
  id v8; // x19
  void *v9; // x20
  double v10; // d0
  double v11; // d8
  void *v12; // x20
  void *v13; // x21
  void *v14; // x24
  void *v15; // x22
  void *v16; // x20
  unsigned __int64 v17; // x24
  unsigned __int64 v18; // x26
  _BOOL4 v20; // w28
  char v21; // w8
  NSAssertionHandler *v22; // x25
  os_signpost_id_t v23; // x21
  id v24; // x0
  unsigned __int64 v25; // x21
  void *v26; // x24
  NSError *v27; // x0
  NSError *v28; // x24
  _BOOL4 v29; // w8
  NSAssertionHandler *v30; // x22
  __int64 v31; // x1
  void *v32; // x26
  double v33; // d0
  void *v34; // x23
  dispatch_queue_global_s *v35; // x22
  id v36; // x0
  void *v37; // x23
  double v38; // d0
  id v39; // x0
  id v40; // x0
  void *v41; // x0
  void *v42; // x27
  id v43; // x26
  void *v44; // x23
  void *v45; // x25
  void *v46; // x22
  __int64 v47; // x1
  void *v48; // x28
  double width; // d8
  double height; // d9
  id v51; // x23
  __int64 v52; // x2
  void *v53; // x23
  void *v54; // x28
  void *v55; // x25
  __int64 v56; // x1
  __int64 v57; // x22
  id v58; // x0
  id v59; // x0
  NSAssertionHandler *v60; // x20
  NSAssertionHandler *v61; // x20
  NSAssertionHandler *v62; // x22
  __int64 v63; // [xsp+18h] [xbp-148h]
  os_signpost_id_t spid; // [xsp+20h] [xbp-140h]
  dispatch_block_t block; // [xsp+28h] [xbp-138h]
  _QWORD *v66; // [xsp+30h] [xbp-130h]
  id v67; // [xsp+38h] [xbp-128h]
  id v68; // [xsp+40h] [xbp-120h]
  id v69; // [xsp+48h] [xbp-118h]
  NSDictionary *v70; // [xsp+50h] [xbp-110h]
  void *v71; // [xsp+58h] [xbp-108h]
  id v72; // [xsp+60h] [xbp-100h] BYREF
  id v73; // [xsp+68h] [xbp-F8h] BYREF
  _QWORD v74[4]; // [xsp+70h] [xbp-F0h] BYREF
  id v75; // [xsp+90h] [xbp-D0h]
  _BYTE *v76; // [xsp+98h] [xbp-C8h]
  uint8_t v77[4]; // [xsp+A0h] [xbp-C0h] BYREF
  id v78; // [xsp+A4h] [xbp-BCh]
  _BYTE buf[24]; // [xsp+B0h] [xbp-B0h] BYREF
  __int64 (__fastcall *v80)(); // [xsp+C8h] [xbp-98h]
  __int64 (__fastcall *v81)(); // [xsp+D0h] [xbp-90h]
  id v82; // [xsp+D8h] [xbp-88h]
  NSErrorUserInfoKey v83; // [xsp+E0h] [xbp-80h] BYREF
  const __CFString *v84; // [xsp+E8h] [xbp-78h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  if ( !v8 )
  {
    v60 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v60,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1810LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("job"));
    objc_release(v60);
  }
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "outputFileType"));
  objc_release(v9);
  if ( !v9 )
  {
    v61 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v61,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1811LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("job.outputFileType"));
    objc_release(v61);
  }
  objc_msgSend(a1, "registerPhotosAdjustmentsSubsystems");
  objc_msgSend(v8, "scaleFactor");
  v11 = v10;
  v12 = objc_msgSend(v8, "requestedMaximumPixelCount");
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "metadataPolicy"));
  v14 = objc_msgSend(v8, "applySourceOrientationTransform");
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "outputFileType"));
  v16 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a1,
            "exporterImageOptionsForScaleFactor:maximumPixelCount:metadataPolicy:shouldApplyOrientationTransform:outputFileType:",
            v12,
            v13,
            v14,
            v15,
            v11));
  objc_release(v15);
  objc_release(v13);
  if ( !v16 )
  {
    objc_msgSend(v8, "setStatus:", 2LL);
    v83 = NSLocalizedDescriptionKey;
    v84 = CFSTR("Unable to determine image options");
    v70 = objc_retainAutoreleasedReturnValue(
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v84,
              &v83,
              1LL));
    v28 = objc_retainAutoreleasedReturnValue(
            +[NSError errorWithDomain:code:userInfo:](
              &OBJC_CLASS___NSError,
              "errorWithDomain:code:userInfo:",
              CFSTR("PAMediaConversionServiceErrorDomain"),
              2LL,
              v70));
    objc_msgSend(v8, "setError:", v28);
    goto LABEL_70;
  }
  v70 = (NSDictionary *)objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUPriority), "initWithLevel:", 1LL);
  objc_msgSend(v16, "setPriority:");
  v17 = (unsigned __int64)objc_msgSend(v7, "mediaType");
  v71 = objc_retainAutoreleasedReturnValue(
          +[PIPhotoEditHelper validatedCompositionCopyForComposition:mediaType:](
            &OBJC_CLASS___PIPhotoEditHelper,
            "validatedCompositionCopyForComposition:mediaType:",
            v7,
            objc_msgSend(v7, "mediaType")));
  objc_release(v7);
  v18 = (unsigned __int64)objc_msgSend(v71, "mediaType");
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_INFO) )
  {
    *(_DWORD *)buf = 134218240;
    *(_QWORD *)&buf[4] = v17;
    *(_WORD *)&buf[12] = 2048;
    *(_QWORD *)&buf[14] = v18;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_LOG_TYPE_INFO,
      "Render photos adjustment composition: input/output media types %ld/%ld",
      buf,
      0x16u);
  }
  v20 = v17 == 3 && v18 == 2;
  if ( (v17 | 2) != 3 || (v17 == v18 ? (v21 = 1) : (v21 = v20), (v21 & 1) == 0) )
  {
    v22 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v22,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1836LL,
      CFSTR("Unexpected input/output media type combination %ld/%ld"),
      v17,
      v18);
    objc_release(v22);
  }
  v23 = os_signpost_id_make_with_pointer((os_log_t)&_os_log_default, a1);
  v24 = objc_retain(&_os_log_default);
  spid = v23;
  v25 = v23 - 1;
  if ( v25 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    v26 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "requestIdentifier"));
    *(_DWORD *)buf = 138543362;
    *(_QWORD *)&buf[4] = v26;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_BEGIN,
      spid,
      "com.apple.photos.mediaconversion.service.neutrino",
      "Media conversion request %{public}@",
      buf,
      0xCu);
    objc_release(v26);
  }
  objc_release(&_os_log_default);
  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "destinationResourceURLCollection"));
  v28 = v27;
  if ( v27 )
  {
    v69 = objc_retainAutoreleasedReturnValue(
            -[NSError resourceURLForRole:](
              v27,
              "resourceURLForRole:",
              CFSTR("PAMediaConversionResourceRoleMainResource")));
    if ( !v69 )
    {
      v62 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v62,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        a1,
        CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
        1845LL,
        CFSTR("Missing destination image URL"));
      objc_release(v62);
    }
    if ( (v18 & 0xFFFFFFFFFFFFFFFELL) == 2 )
    {
      v68 = objc_retainAutoreleasedReturnValue(
              -[NSError resourceURLForRole:](
                v28,
                "resourceURLForRole:",
                CFSTR("PAMediaConversionResourceRoleVideoComplement")));
      if ( v68 )
        v29 = 0;
      else
        v29 = v20;
      if ( !v29 )
      {
LABEL_33:
        *(_QWORD *)buf = 0LL;
        *(_QWORD *)&buf[8] = buf;
        *(_QWORD *)&buf[16] = 0x3032000000LL;
        v80 = sub_10000D020;
        v81 = sub_10000D030;
        v82 = 0LL;
        v74[0] = _NSConcreteStackBlock;
        v74[1] = 3254779904LL;
        v74[2] = sub_100014450;
        v74[3] = &unk_1000413C0;
        v76 = buf;
        block = objc_retain(dispatch_block_create(DISPATCH_BLOCK_ASSIGN_CURRENT, &stru_1000413A0));
        v75 = block;
        v66 = objc_retainBlock(v74);
        v67 = objc_alloc_init((Class)&OBJC_CLASS___PICompositionExporter);
        if ( v18 == 3 )
        {
          v32 = (void *)objc_opt_new(&OBJC_CLASS___PICompositionExporterAuxiliaryOptions, v31);
          objc_msgSend(v32, "setPrimaryURL:", v69);
          objc_msgSend(v32, "setVideoComplementURL:", v68);
          objc_msgSend(v32, "setPriority:", v70);
          objc_msgSend(v32, "setOptimizeForBackgroundProcessing:", 1LL);
          objc_msgSend(
            v32,
            "setApplyImageOrientationAsMetadata:",
            (unsigned int)objc_msgSend(v8, "applySourceOrientationTransform") ^ 1);
          objc_msgSend(v32, "setApplyVideoOrientationAsMetadata:", 1LL);
          objc_msgSend(v8, "scaleFactor");
          v34 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    a1,
                    "scalePolicyForScaleFactor:maximumPixelCount:",
                    objc_msgSend(v8, "requestedMaximumPixelCount"),
                    v33));
          if ( v34 )
            objc_msgSend(v32, "setScalePolicy:", v34);
          v35 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
          v36 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v67, "exportComposition:options:completionQueue:completion:", v71, v32, v35, v66));
          objc_release(v35);
          objc_release(v34);
        }
        else
        {
          if ( !v20 )
          {
            objc_msgSend(v67, "exportImageToURL:composition:options:completion:", v69, v71, v16, v66);
LABEL_44:
            dispatch_block_wait(block, 0xFFFFFFFFFFFFFFFFLL);
            v40 = objc_retain(&_os_log_default);
            if ( v25 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
            {
              *(_WORD *)v77 = 0;
              _os_signpost_emit_with_name_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_SIGNPOST_INTERVAL_BEGIN,
                spid,
                "com.apple.photos.mediaconversion.service.neutrino.postprocessing",
                (const char *)&unk_10003D69F,
                v77,
                2u);
            }
            objc_release(&_os_log_default);
            v41 = *(void **)(*(_QWORD *)&buf[8] + 40LL);
            v73 = 0LL;
            v42 = objc_retainAutoreleasedReturnValue(objc_msgSend(v41, "result:", &v73));
            v43 = objc_retain(v73);
            if ( v42 )
            {
              if ( v20 )
              {
                v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "geometry"));
                v45 = objc_msgSend(v44, "scaledSize");
                v46 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "geometry"));
                objc_msgSend(v46, "scaledSize");
                v63 = v47;
                objc_release(v46);
                objc_release(v44);
                v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "outputFileType"));
                width = CGSizeZero.width;
                height = CGSizeZero.height;
                v72 = v43;
                LOBYTE(v46) = +[PAMediaConversionServiceImagingUtilities generatePosterFrameExportForVideoURL:destinationURL:maximumSize:outputFileType:error:](
                                &OBJC_CLASS___PAMediaConversionServiceImagingUtilities,
                                "generatePosterFrameExportForVideoURL:destinationURL:maximumSize:outputFileType:error:",
                                v68,
                                v69,
                                v48,
                                &v72,
                                CGSizeZero.width,
                                height);
                v51 = objc_retain(v72);
                objc_release(v43);
                objc_release(v48);
                if ( ((unsigned __int8)v46 & 1) != 0 )
                {
                  width = (double)(__int64)v45;
                  height = (double)v63;
                  v52 = 1LL;
                }
                else
                {
                  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
                  {
                    *(_DWORD *)v77 = 138543362;
                    v78 = v51;
                    _os_log_error_impl(
                      (void *)&_mh_execute_header,
                      (os_log_t)&_os_log_default,
                      OS_LOG_TYPE_ERROR,
                      "Unable to render separate still image output for live photo -> video transformation: %{public}@",
                      v77,
                      0xCu);
                  }
                  v52 = 2LL;
                }
                v43 = v51;
              }
              else
              {
                v53 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "geometry"));
                v54 = objc_msgSend(v53, "scaledSize");
                v55 = objc_retainAutoreleasedReturnValue(objc_msgSend(v42, "geometry"));
                objc_msgSend(v55, "scaledSize");
                v57 = v56;
                objc_release(v55);
                objc_release(v53);
                width = (double)(__int64)v54;
                height = (double)v57;
                v52 = 1LL;
              }
              objc_msgSend(v8, "setStatus:", v52);
              objc_msgSend(v8, "setOutputImageSize:", width, height);
            }
            else
            {
              if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
              {
                *(_DWORD *)v77 = 138543362;
                v78 = v43;
                _os_log_error_impl(
                  (void *)&_mh_execute_header,
                  (os_log_t)&_os_log_default,
                  OS_LOG_TYPE_ERROR,
                  "Unable to render adjustments to URL destination: %{public}@",
                  v77,
                  0xCu);
              }
              objc_msgSend(v8, "setStatus:", 2LL);
              objc_msgSend(v8, "setError:", v43);
            }
            v58 = objc_retain(&_os_log_default);
            if ( v25 <= 0xFFFFFFFFFFFFFFFDLL && os_signpost_enabled((os_log_t)&_os_log_default) )
            {
              *(_WORD *)v77 = 0;
              _os_signpost_emit_with_name_impl(
                (void *)&_mh_execute_header,
                (os_log_t)&_os_log_default,
                OS_SIGNPOST_INTERVAL_END,
                spid,
                "com.apple.photos.mediaconversion.service.neutrino.postprocessing",
                (const char *)&unk_10003D69F,
                v77,
                2u);
            }
            objc_release(&_os_log_default);
            objc_release(v42);
            objc_release(v43);
            objc_release(v67);
            objc_release(v66);
            objc_release(v75);
            objc_release(block);
            _Block_object_dispose(buf, 8);
            objc_release(v82);
            objc_release(v68);
            goto LABEL_66;
          }
          objc_msgSend(v8, "scaleFactor");
          v32 = objc_retainAutoreleasedReturnValue(
                  objc_msgSend(
                    a1,
                    "exporterVideoOptionsForScaleFactor:maximumPixelCount:",
                    objc_msgSend(v8, "requestedMaximumPixelCount"),
                    v38));
          v39 = objc_unsafeClaimAutoreleasedReturnValue(objc_msgSend(v67, "exportVideoToURL:composition:options:completion:", v68, v71, v32, v66));
        }
        objc_release(v32);
        goto LABEL_44;
      }
      v30 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
      -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
        v30,
        "handleFailureInMethod:object:file:lineNumber:description:",
        a2,
        a1,
        CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
        1851LL,
        CFSTR("Live Photo conversion producing video output must provide image and video output URLs"));
      objc_release(v30);
    }
    v68 = 0LL;
    goto LABEL_33;
  }
  v69 = objc_retainAutoreleasedReturnValue(objc_msgSend(v71, "objectForKeyedSubscript:", CFSTR("source")));
  *(CGSize *)buf = CGSizeZero;
  v37 = objc_retainAutoreleasedReturnValue(
          objc_msgSend(
            a1,
            "imageDataForPhotosAdjustmentsComposition:source:exporterImageOptions:outOutputSize:job:",
            v71,
            v69,
            v16,
            buf,
            v8));
  if ( v37 )
  {
    objc_msgSend(v8, "setStatus:", 1LL);
    objc_msgSend(v8, "setDestinationData:", v37);
    objc_msgSend(v8, "setOutputImageSize:", *(double *)buf, *(double *)&buf[8]);
  }
  else
  {
    objc_msgSend(v8, "setStatus:", 2LL);
  }
  objc_release(v37);
LABEL_66:
  objc_release(v69);
  v59 = objc_retain(&_os_log_default);
  if ( v25 < 0xFFFFFFFFFFFFFFFELL && os_signpost_enabled((os_log_t)&_os_log_default) )
  {
    *(_WORD *)buf = 0;
    _os_signpost_emit_with_name_impl(
      (void *)&_mh_execute_header,
      (os_log_t)&_os_log_default,
      OS_SIGNPOST_INTERVAL_END,
      spid,
      "com.apple.photos.mediaconversion.service.neutrino",
      (const char *)&unk_10003D69F,
      buf,
      2u);
  }
  objc_release(&_os_log_default);
  v7 = v71;
LABEL_70:
  objc_release(v28);
  objc_release(v70);
  objc_release(v16);
  objc_release(v8);
  objc_release(v7);
}