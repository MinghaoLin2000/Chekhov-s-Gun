-[TSPDirectoryPackageWriter linkOrCopyData:fromURL:fromTemporaryLocation:decryptionInfo:preferredFilename:error:]
id __cdecl -[TSPDirectoryPackageWriter linkOrCopyData:fromURL:fromTemporaryLocation:decryptionInfo:preferredFilename:error:](
        TSPDirectoryPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6,
        id a7,
        id *a8)
{
  _BOOL4 v11; // w25
  id v14; // x24
  id v15; // x21
  id v16; // x23
  _BOOL4 v17; // w24
  id v18; // x25
  SFUCryptoKey *v19; // x26
  id v20; // x0
  void *v21; // x27
  TSPDocumentSaveValidationPolicy *v22; // x22
  unsigned int v23; // w28
  NSDate *v24; // x22
  unsigned __int8 v25; // w28
  int v26; // w22
  _BOOL4 v27; // w19
  TSPDocumentSaveValidationPolicy *v28; // x20
  unsigned int v29; // w22
  void *v30; // x19
  TSPPackageWriterCopyDataResult *v31; // x19
  unsigned __int8 v32; // w20
  id v33; // x19
  void *v34; // x20
  TSPPackageWriterCopyDataResult *v35; // x0
  objc_class *v37; // x0
  void *v38; // x0
  void *v39; // x22
  objc_class *v40; // x0
  void *v41; // x28
  void *v42; // x0
  id v43; // [xsp+10h] [xbp-F0h]
  NSString *v44; // [xsp+18h] [xbp-E8h]
  id v45; // [xsp+20h] [xbp-E0h]
  NSString *v46; // [xsp+20h] [xbp-E0h]
  id v47; // [xsp+28h] [xbp-D8h]
  id v48; // [xsp+30h] [xbp-D0h]
  id v49; // [xsp+38h] [xbp-C8h]
  id v50; // [xsp+40h] [xbp-C0h]
  id v51; // [xsp+48h] [xbp-B8h] BYREF
  id v52; // [xsp+50h] [xbp-B0h] BYREF
  __int64 v53; // [xsp+58h] [xbp-A8h] BYREF
  uint8_t buf[4]; // [xsp+60h] [xbp-A0h] BYREF
  _BYTE v55[54]; // [xsp+64h] [xbp-9Ch]
  __int64 vars8; // [xsp+108h] [xbp+8h]

  v11 = a5;
  v14 = objc_retain(a3);
  v50 = objc_retain(a4);
  v15 = objc_retain(a6);
  v47 = v14;
  v48 = objc_retain(a7);
  v16 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter filenameForData:preferredFilename:](self, "filenameForData:preferredFilename:", v14));
  v17 = v11;
  v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Data"), "stringByAppendingPathComponent:", v16));
  v18 = objc_retainAutoreleasedReturnValue(-[TSPDirectoryPackageWriter targetDataURLForPath:](self, "targetDataURLForPath:"));
  v53 = 0LL;
  v19 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter encryptionKey](self, "encryptionKey"));
  if ( (unsigned int)UnsafePointer(v15, v19, 0x100000LL) )
    v20 = objc_retainAutoreleasedReturnValue((id)UnsafePointer(v19, 0x100000LL));
  else
    v20 = objc_msgSend(v15, "mutableCryptoInfoCopy");
  v21 = v20;
  if ( !+[TSPFileManager linkOrCopyItemAtURL:decryptionInfo:toURL:encryptionInfo:canLink:encodedLength:error:](
          &OBJC_CLASS___TSPFileManager,
          "linkOrCopyItemAtURL:decryptionInfo:toURL:encryptionInfo:canLink:encodedLength:error:",
          v50,
          v15,
          v18,
          v20,
          -[TSPPackageWriter canLinkData](self, "canLinkData"),
          &v53,
          a8) )
    goto LABEL_22;
  v22 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter documentSaveValidationPolicy](self, "documentSaveValidationPolicy"));
  v23 = (unsigned int)-[TSPDocumentSaveValidationPolicy updateDataModificationDate](v22, "updateDataModificationDate");
  objc_release(v22);
  if ( v23 )
  {
    v24 = objc_retainAutoreleasedReturnValue(+[NSDate date](&OBJC_CLASS___NSDate, "date"));
    v52 = 0LL;
    v25 = (unsigned __int8)objc_msgSend(
                             v18,
                             "setResourceValue:forKey:error:",
                             v24,
                             NSURLContentModificationDateKey,
                             &v52);
    v45 = objc_retain(v52);
    objc_release(v24);
    if ( (v25 & 1) != 0 )
    {
      v26 = 1;
    }
    else
    {
      v28 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter documentSaveValidationPolicy](self, "documentSaveValidationPolicy"));
      v29 = (unsigned int)-[TSPDocumentSaveValidationPolicy failToSaveIfUpdateDataModificationDateFails](
                            v28,
                            "failToSaveIfUpdateDataModificationDateFails");
      objc_release(v28);
      if ( v29 )
      {
        v26 = 0;
        if ( a8 )
          *a8 = objc_retainAutorelease(v45);
      }
      else
      {
        v26 = 1;
      }
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D2B08);
      v30 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v30, OS_LOG_TYPE_ERROR) )
      {
        v37 = (objc_class *)objc_opt_class(v45);
        v44 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v37)));
        v43 = objc_retainAutoreleasedReturnValue(objc_msgSend(v45, "domain"));
        v38 = objc_msgSend(v45, "code");
        *(_DWORD *)buf = 67110402;
        *(_DWORD *)v55 = v26;
        *(_WORD *)&v55[4] = 2112;
        *(_QWORD *)&v55[6] = v18;
        *(_WORD *)&v55[14] = 2114;
        *(_QWORD *)&v55[16] = v44;
        *(_WORD *)&v55[24] = 2114;
        *(_QWORD *)&v55[26] = v43;
        *(_WORD *)&v55[34] = 2048;
        *(_QWORD *)&v55[36] = v38;
        *(_WORD *)&v55[44] = 2112;
        *(_QWORD *)&v55[46] = v45;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v30,
          OS_LOG_TYPE_ERROR,
          "Could not set modificationDate. success=%d targetURL=%@ errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x3Au);
        objc_release(v44);
        objc_release(v43);
        objc_release(v44);
      }
      objc_release(v30);
    }
    objc_release(v45);
    v27 = v26 != 0;
    if ( !v26 )
      goto LABEL_21;
  }
  else
  {
    v27 = 1;
  }
  if ( v17 && (UnsafePointer(v15, v21) & 1) == 0 )
  {
    v51 = 0LL;
    v32 = (unsigned __int8)objc_msgSend(
                             v18,
                             "setResourceValue:forKey:error:",
                             &__kCFBooleanFalse,
                             NSURLIsExcludedFromBackupKey,
                             &v51);
    v33 = objc_retain(v51);
    if ( (v32 & 1) == 0 )
    {
      if ( UnsafePointer != -1 )
        dispatch_once(&UnsafePointer, &stru_1001D2B28);
      v34 = objc_retain(UnsafePointer);
      if ( os_log_type_enabled((os_log_t)v34, OS_LOG_TYPE_ERROR) )
      {
        v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "path"));
        v40 = (objc_class *)objc_opt_class(v33);
        v46 = objc_retain(objc_retainAutoreleasedReturnValue(NSStringFromClass(v40)));
        v41 = objc_retainAutoreleasedReturnValue(objc_msgSend(v33, "domain"));
        v42 = objc_msgSend(v33, "code");
        *(_DWORD *)buf = 138413314;
        *(_QWORD *)v55 = v39;
        *(_WORD *)&v55[8] = 2114;
        *(_QWORD *)&v55[10] = v46;
        *(_WORD *)&v55[18] = 2114;
        *(_QWORD *)&v55[20] = v41;
        *(_WORD *)&v55[28] = 2048;
        *(_QWORD *)&v55[30] = v42;
        *(_WORD *)&v55[38] = 2112;
        *(_QWORD *)&v55[40] = v33;
        _os_log_error_impl(
          (void *)&_mh_execute_header,
          (os_log_t)v34,
          OS_LOG_TYPE_ERROR,
          "Failed to update attributes for data at URL %@. errorClass=%{public}@, domain=%{public}@, code=%zd (%@) ",
          buf,
          0x34u);
        objc_release(v46);
        objc_release(v39);
        objc_release(v41);
        objc_release(v46);
      }
      objc_release(v34);
    }
    objc_release(v33);
    goto LABEL_30;
  }
LABEL_21:
  if ( !v27 )
  {
LABEL_22:
    v31 = 0LL;
    goto LABEL_31;
  }
LABEL_30:
  v35 = objc_alloc(&OBJC_CLASS___TSPPackageWriterCopyDataResult);
  v31 = -[TSPPackageWriterCopyDataResult initWithFilename:encryptionInfo:encodedLength:](
          v35,
          "initWithFilename:encryptionInfo:encodedLength:",
          v16,
          v21,
          v53);
LABEL_31:
  objc_release(v21);
  objc_release(v19);
  objc_release(v18);
  objc_release(v49);
  objc_release(v16);
  objc_release(v48);
  objc_release(v15);
  objc_release(v50);
  objc_release(v47);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v31);
}