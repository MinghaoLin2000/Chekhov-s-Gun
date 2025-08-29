-[TSPFilePackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]
TSPFilePackageWriter *__cdecl -[TSPFilePackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
        TSPFilePackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int8 a6,
        id a7,
        id a8,
        unsigned __int64 a9,
        signed __int64 a10,
        bool a11,
        id a12,
        id a13,
        id a14,
        id a15,
        id a16,
        id a17,
        id *a18)
{
  id v22; // x21
  id v23; // x26
  id v24; // x25
  id v25; // x24
  id v26; // x22
  id v27; // x23
  id v28; // x27
  id v29; // x28
  void *v30; // x27
  __int64 v31; // x5
  TSPFilePackageWriter *v32; // x26
  id v33; // x0
  id v34; // x20
  TSUSafeSaveAssistant *v35; // x24
  id v36; // x23
  TSUSafeSaveAssistant *safeSaveAssistant; // x0
  TSUZipFileWriter *v38; // x22
  NSURL *v39; // x24
  TSUZipFileWriter *v40; // x25
  TSUZipFileWriter *delayedZipArchiveWriter; // x0
  void *v42; // x25
  objc_class *v43; // x0
  NSString *v44; // x28
  void *v45; // x22
  unsigned int v46; // w23
  void *v47; // x0
  void *v48; // x24
  const __CFString *v49; // x8
  TSPFilePackageWriter *v50; // x19
  dispatch_queue_global_s *v51; // x23
  TSPFilePackageWriter *v52; // x26
  objc_class *v54; // x0
  NSString *v55; // x20
  void *v56; // x28
  unsigned int v57; // w22
  void *v58; // x0
  void *v59; // x24
  const __CFString *v60; // x8
  id v61; // [xsp+28h] [xbp-188h]
  id v62; // [xsp+58h] [xbp-158h]
  id v63; // [xsp+60h] [xbp-150h]
  id v64; // [xsp+68h] [xbp-148h]
  id v65; // [xsp+70h] [xbp-140h]
  id v66; // [xsp+78h] [xbp-138h]
  id v68; // [xsp+80h] [xbp-130h]
  id v69; // [xsp+88h] [xbp-128h]
  id v70; // [xsp+90h] [xbp-120h]
  void *v71; // [xsp+98h] [xbp-118h]
  void *v72; // [xsp+98h] [xbp-118h]
  unsigned int v73; // [xsp+A0h] [xbp-110h]
  id v74; // [xsp+A0h] [xbp-110h]
  _QWORD v75[4]; // [xsp+B0h] [xbp-100h] BYREF
  id v76; // [xsp+D0h] [xbp-E0h]
  id v77; // [xsp+D8h] [xbp-D8h] BYREF
  id v78; // [xsp+E0h] [xbp-D0h] BYREF
  objc_super v79; // [xsp+E8h] [xbp-C8h] BYREF
  id v80; // [xsp+F8h] [xbp-B8h] BYREF
  uint8_t buf[4]; // [xsp+100h] [xbp-B0h] BYREF
  NSString *v82; // [xsp+104h] [xbp-ACh]
  __int16 v83; // [xsp+10Ch] [xbp-A4h]
  void *v84; // [xsp+10Eh] [xbp-A2h]
  __int16 v85; // [xsp+116h] [xbp-9Ah]
  void *v86; // [xsp+118h] [xbp-98h]
  __int16 v87; // [xsp+120h] [xbp-90h]
  const __CFString *v88; // [xsp+122h] [xbp-8Eh]
  __int16 v89; // [xsp+12Ah] [xbp-86h]
  void *v90; // [xsp+12Ch] [xbp-84h]
  __int16 v91; // [xsp+134h] [xbp-7Ch]
  id v92; // [xsp+136h] [xbp-7Ah]

  v73 = a6;
  v22 = objc_retain(a3);
  v69 = objc_retain(a4);
  v23 = objc_retain(a5);
  v24 = objc_retain(a7);
  v25 = objc_retain(a8);
  v26 = objc_retain(a12);
  v27 = objc_retain(a13);
  v28 = objc_retain(a14);
  v29 = objc_retain(a15);
  v79.receiver = self;
  v79.super_class = (Class)&OBJC_CLASS___TSPFilePackageWriter;
  v80 = 0LL;
  v66 = objc_retain(a16);
  v68 = objc_retain(a17);
  v64 = v28;
  v65 = v29;
  v61 = v28;
  v62 = v26;
  v63 = v27;
  v30 = v23;
  v31 = v73;
  v70 = v24;
  v74 = v25;
  v32 = -[TSPPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
          &v79,
          "initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata"
          ":fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:ori"
          "ginalSupportPackage:fileCoordinatorDelegate:progress:error:",
          v22,
          v69,
          v23,
          v31,
          v24,
          v25,
          a9,
          a10,
          a11,
          v26,
          v27,
          v61,
          v29,
          v66,
          v68,
          &v80);
  v33 = objc_retain(v80);
  v34 = v33;
  if ( v32 && a11 )
  {
    objc_release(v33);
    v78 = 0LL;
    v35 = -[TSUSafeSaveAssistant initForSavingToURL:error:](
            objc_alloc(&OBJC_CLASS___TSUSafeSaveAssistant),
            "initForSavingToURL:error:",
            v22,
            &v78);
    v36 = objc_retain(v78);
    safeSaveAssistant = v32->_safeSaveAssistant;
    v32->_safeSaveAssistant = v35;
    objc_release(safeSaveAssistant);
    if ( v32->_safeSaveAssistant )
    {
      v38 = objc_alloc(&OBJC_CLASS___TSUZipFileWriter);
      v39 = objc_retainAutoreleasedReturnValue(-[TSUSafeSaveAssistant writeURL](v32->_safeSaveAssistant, "writeURL"));
      v77 = v36;
      v40 = -[TSUZipFileWriter initWithURL:error:](v38, "initWithURL:error:", v39, &v77);
      v34 = objc_retain(v77);
      objc_release(v36);
      delayedZipArchiveWriter = v32->_delayedZipArchiveWriter;
      v32->_delayedZipArchiveWriter = v40;
      objc_release(delayedZipArchiveWriter);
      objc_release(v39);
      if ( v32->_delayedZipArchiveWriter )
        goto LABEL_19;
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D26B8);
      v42 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v42, OS_LOG_TYPE_ERROR) )
      {
        v43 = (objc_class *)objc_opt_class(v34);
        v44 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v43)));
        v45 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "domain"));
        v71 = objc_msgSend(v34, "code");
        v46 = (unsigned int)objc_msgSend(v34, "tsp_isRecoverable");
        v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v34, "tsp_hintsDescription"));
        v48 = v47;
        v49 = &stru_1001DFAA0;
        *(_DWORD *)buf = 138544642;
        v82 = v44;
        v83 = 2114;
        if ( v46 )
          v49 = CFSTR("recoverable=YES, ");
        v84 = v45;
        v85 = 2048;
        v86 = v71;
        v87 = 2114;
        v88 = v49;
        v89 = 2114;
        v90 = v47;
        v91 = 2112;
        v92 = v34;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v42,
          OS_LOG_TYPE_ERROR,
          "Failed to create delayed zip writer. error=errorClass=%{public}@, domain=%{public}@, code=%zd, %{public}@hints"
          "=%{public}@ (%@) ",
          buf,
          0x3Eu);
        objc_release(v48);
        objc_release(v45);
        objc_release(v44);
        objc_release(v44);
      }
    }
    else
    {
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D26D8);
      v42 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v42, OS_LOG_TYPE_ERROR) )
      {
        v54 = (objc_class *)objc_opt_class(v36);
        v55 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v54)));
        v56 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "domain"));
        v72 = objc_msgSend(v36, "code");
        v57 = (unsigned int)objc_msgSend(v36, "tsp_isRecoverable");
        v58 = objc_retainAutoreleasedReturnValue(objc_msgSend(v36, "tsp_hintsDescription"));
        v59 = v58;
        v60 = &stru_1001DFAA0;
        *(_DWORD *)buf = 138544642;
        v82 = v55;
        v83 = 2114;
        if ( v57 )
          v60 = CFSTR("recoverable=YES, ");
        v84 = v56;
        v85 = 2048;
        v86 = v72;
        v87 = 2114;
        v88 = v60;
        v89 = 2114;
        v90 = v58;
        v91 = 2112;
        v92 = v36;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v42,
          OS_LOG_TYPE_ERROR,
          "Failed to create safe save assistant. error=errorClass=%{public}@, domain=%{public}@, code=%zd, %{public}@hint"
          "s=%{public}@ (%@) ",
          buf,
          0x3Eu);
        objc_release(v59);
        objc_release(v56);
        objc_release(v55);
        objc_release(v55);
      }
      v34 = v36;
    }
    objc_release(v42);
    v50 = objc_retain(v32);
    v51 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
    v75[0] = _NSConcreteStackBlock;
    v75[1] = 3254779904LL;
    v75[2] = sub_100022B14;
    v75[3] = &unk_1001D2718;
    v52 = objc_retain(v50);
    v76 = v52;
    -[TSPFilePackageWriter closeWithQueue:completion:](v52, "closeWithQueue:completion:", v51, v75);
    objc_release(v51);
    objc_release(v52);
    objc_release(v76);
    objc_release(v52);
    v32 = 0LL;
  }
  if ( a18 && !v32 )
  {
    v32 = 0LL;
    *a18 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsp_ensureSaveErrorWithError:](&OBJC_CLASS___NSError, "tsp_ensureSaveErrorWithError:", v34)));
  }
LABEL_19:
  objc_release(v34);
  objc_release(v68);
  objc_release(v66);
  objc_release(v65);
  objc_release(v64);
  objc_release(v63);
  objc_release(v62);
  objc_release(v74);
  objc_release(v70);
  objc_release(v30);
  objc_release(v69);
  objc_release(v22);
  return v32;
}