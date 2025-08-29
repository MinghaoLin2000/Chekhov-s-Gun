-[TSPDirectoryPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:]
TSPDirectoryPackageWriter *__cdecl -[TSPDirectoryPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
        TSPDirectoryPackageWriter *self,
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
  id v24; // x20
  id v25; // x28
  NSFileManager *v26; // x22
  id v27; // x23
  void *v28; // x24
  id v29; // x19
  unsigned __int8 v30; // w26
  unsigned __int8 v31; // w26
  TSPDirectoryPackageWriter *v32; // x24
  TSPDirectoryPackageDataWriter *v33; // x0
  TSPDirectoryPackageDataWriter *dataWriter; // x8
  objc_class *v35; // x0
  NSString *v36; // x19
  void *v37; // x25
  void *v38; // x0
  void *v39; // x25
  void *v40; // x25
  objc_class *v42; // x0
  void *v43; // x0
  objc_class *v44; // x0
  void *v45; // x0
  unsigned int v46; // [xsp+60h] [xbp-120h]
  void *v47; // [xsp+60h] [xbp-120h]
  void *v48; // [xsp+60h] [xbp-120h]
  NSString *v49; // [xsp+68h] [xbp-118h]
  NSString *v50; // [xsp+68h] [xbp-118h]
  id v51; // [xsp+70h] [xbp-110h]
  id v52; // [xsp+78h] [xbp-108h]
  id v53; // [xsp+80h] [xbp-100h]
  id v54; // [xsp+88h] [xbp-F8h]
  id v55; // [xsp+90h] [xbp-F0h]
  id v56; // [xsp+98h] [xbp-E8h]
  id v57; // [xsp+A0h] [xbp-E0h]
  objc_super v59; // [xsp+B0h] [xbp-D0h] BYREF
  id v60; // [xsp+C0h] [xbp-C0h] BYREF
  id v61; // [xsp+C8h] [xbp-B8h] BYREF
  id v62; // [xsp+D0h] [xbp-B0h] BYREF
  id v63; // [xsp+D8h] [xbp-A8h] BYREF
  uint8_t buf[4]; // [xsp+E0h] [xbp-A0h] BYREF
  id v65; // [xsp+E4h] [xbp-9Ch]
  __int16 v66; // [xsp+ECh] [xbp-94h]
  NSString *v67; // [xsp+EEh] [xbp-92h]
  __int16 v68; // [xsp+F6h] [xbp-8Ah]
  void *v69; // [xsp+F8h] [xbp-88h]
  __int16 v70; // [xsp+100h] [xbp-80h]
  void *v71; // [xsp+102h] [xbp-7Eh]
  __int16 v72; // [xsp+10Ah] [xbp-76h]
  id v73; // [xsp+10Ch] [xbp-74h]

  v46 = a6;
  v22 = objc_retain(a3);
  v23 = objc_retain(a4);
  v51 = objc_retain(a5);
  v52 = objc_retain(a7);
  v53 = objc_retain(a8);
  v54 = objc_retain(a12);
  v55 = objc_retain(a13);
  v56 = objc_retain(a14);
  v57 = objc_retain(a15);
  v24 = objc_retain(a16);
  v25 = objc_retain(a17);
  v26 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v63 = 0LL;
  LODWORD(a5) = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
                  v26,
                  "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                  v22,
                  1LL,
                  0LL,
                  &v63);
  v27 = objc_retain(v63);
  if ( !(_DWORD)a5 )
  {
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D29F8);
    v28 = objc_retain(UnsafePointer);
    if ( os_log_type_enabled((os_log_t)v28, OS_LOG_TYPE_ERROR) )
    {
      v35 = (objc_class *)objc_opt_class(v27);
      v36 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v35)));
      v37 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "domain"));
      v38 = objc_msgSend(v27, "code");
      *(_DWORD *)buf = 138413314;
      v65 = v22;
      v66 = 2114;
      v67 = v36;
      v68 = 2114;
      v69 = v37;
      v70 = 2048;
      v71 = v38;
      v72 = 2112;
      v73 = v27;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v28,
        OS_LOG_TYPE_ERROR,
        "Failed to create document directory. URL=%@, error=errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v36);
      objc_release(v37);
      objc_release(v36);
    }
    goto LABEL_20;
  }
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "URLByAppendingPathComponent:isDirectory:", CFSTR("Data"), 1LL));
  objc_release(v27);
  v29 = v23;
  v62 = 0LL;
  v30 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
          v26,
          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
          v28,
          0LL,
          0LL,
          &v62);
  v27 = objc_retain(v62);
  if ( (v30 & 1) == 0 )
  {
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D29D8);
    v39 = objc_retain(UnsafePointer);
    v23 = v29;
    if ( os_log_type_enabled((os_log_t)v39, OS_LOG_TYPE_ERROR) )
    {
      v42 = (objc_class *)objc_opt_class(v27);
      v49 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v42)));
      v47 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "domain"));
      v43 = objc_msgSend(v27, "code");
      *(_DWORD *)buf = 138413314;
      v65 = v28;
      v66 = 2114;
      v67 = v49;
      v68 = 2114;
      v69 = v47;
      v70 = 2048;
      v71 = v43;
      v72 = 2112;
      v73 = v27;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v39,
        OS_LOG_TYPE_ERROR,
        "Failed to create data directory in document package. URL=%@, error=errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v49);
      objc_release(v47);
      objc_release(v49);
    }
    objc_release(v39);
    goto LABEL_20;
  }
  objc_release(v28);
  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "URLByAppendingPathComponent:isDirectory:", CFSTR("Metadata"), 1LL));
  objc_release(v27);
  v61 = 0LL;
  v31 = -[NSFileManager createDirectoryAtURL:withIntermediateDirectories:attributes:error:](
          v26,
          "createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
          v28,
          0LL,
          0LL,
          &v61);
  v27 = objc_retain(v61);
  if ( (v31 & 1) == 0 )
  {
    if ( UnsafePointer != -1 )
      dispatch_once(&UnsafePointer, &stru_1001D2A18);
    v40 = objc_retain(UnsafePointer);
    v23 = v29;
    if ( os_log_type_enabled((os_log_t)v40, OS_LOG_TYPE_ERROR) )
    {
      v44 = (objc_class *)objc_opt_class(v27);
      v50 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v44)));
      v48 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "domain"));
      v45 = objc_msgSend(v27, "code");
      *(_DWORD *)buf = 138413314;
      v65 = v28;
      v66 = 2114;
      v67 = v50;
      v68 = 2114;
      v69 = v48;
      v70 = 2048;
      v71 = v45;
      v72 = 2112;
      v73 = v27;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v40,
        OS_LOG_TYPE_ERROR,
        "Failed to create metadata directory in document package. URL=%@, error=errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
        buf,
        0x34u);
      objc_release(v50);
      objc_release(v48);
      objc_release(v50);
    }
    objc_release(v40);
LABEL_20:
    objc_release(v28);
    objc_release(self);
    goto LABEL_21;
  }
  objc_release(v28);
  v23 = v29;
  objc_release(v27);
  v59.receiver = self;
  v59.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageWriter;
  v60 = 0LL;
  v32 = -[TSPPackageWriter initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
          &v59,
          "initWithURL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata"
          ":fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:ori"
          "ginalSupportPackage:fileCoordinatorDelegate:progress:error:",
          v22,
          v29,
          v51,
          v46,
          v52,
          v53,
          a9,
          a10,
          a11,
          v54,
          v55,
          v56,
          v57,
          v24,
          v25,
          &v60);
  v27 = objc_retain(v60);
  if ( v32 )
  {
    v33 = -[TSPDirectoryPackageDataWriter initWithURL:](
            objc_alloc(&OBJC_CLASS___TSPDirectoryPackageDataWriter),
            "initWithURL:",
            v22);
    dataWriter = v32->_dataWriter;
    v32->_dataWriter = v33;
    objc_release(dataWriter);
    goto LABEL_23;
  }
LABEL_21:
  v32 = 0LL;
  if ( a18 )
    *a18 = objc_autorelease(objc_retainAutoreleasedReturnValue(+[NSError tsp_ensureSaveErrorWithError:](&OBJC_CLASS___NSError, "tsp_ensureSaveErrorWithError:", v27)));
LABEL_23:
  objc_release(v26);
  objc_release(v27);
  objc_release(v25);
  objc_release(v24);
  objc_release(v57);
  objc_release(v56);
  objc_release(v55);
  objc_release(v54);
  objc_release(v53);
  objc_release(v52);
  objc_release(v51);
  objc_release(v23);
  objc_release(v22);
  return v32;
}