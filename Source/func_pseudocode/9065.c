-[TSPPackageWriter copyData:withReadChannel:decryptionInfo:size:calculateCRC:preferredFilename:error:]
id __cdecl -[TSPPackageWriter copyData:withReadChannel:decryptionInfo:size:calculateCRC:preferredFilename:error:](
        TSPPackageWriter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        unsigned __int64 a6,
        bool a7,
        id a8,
        id *a9)
{
  _BOOL4 v10; // w25
  id v15; // x19
  id v16; // x21
  unsigned int v17; // w22
  unsigned __int64 v18; // x27
  void *v19; // x21
  TSUZipFileWriter *v20; // x21
  id v21; // x26
  void *v22; // x23
  void *v23; // x21
  unsigned int v24; // w0
  unsigned int v25; // w8
  void *v26; // x20
  unsigned int v27; // w20
  void *v28; // x21
  id v29; // x0
  void *v30; // x23
  __int64 v31; // x5
  id v32; // x21
  void *v33; // x23
  void *v34; // x22
  unsigned int v35; // w20
  TSPPackageWriterCopyDataResult *v36; // x0
  TSPPackageWriterCopyDataResult *v37; // x20
  id v39; // [xsp+8h] [xbp-A8h]
  id v40; // [xsp+10h] [xbp-A0h]
  id v41; // [xsp+18h] [xbp-98h]
  id v42; // [xsp+20h] [xbp-90h]
  id v43; // [xsp+28h] [xbp-88h]
  id v44; // [xsp+30h] [xbp-80h]
  void *v45; // [xsp+38h] [xbp-78h] BYREF
  uint8_t buf[24]; // [xsp+40h] [xbp-70h] BYREF

  v10 = a7;
  v15 = objc_retain(a3);
  v42 = objc_retain(a4);
  v16 = objc_retain(a5);
  v39 = objc_retain(a8);
  v40 = v16;
  -[TSPPackageWriter closeCurrentChannel](self, "closeCurrentChannel");
  v41 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter filenameForData:preferredFilename:](self, "filenameForData:preferredFilename:", v15, v39));
  v44 = objc_retainAutoreleasedReturnValue(objc_msgSend(CFSTR("Data"), "stringByAppendingPathComponent:", v41));
  if ( (unsigned int)UnsafePointer(v16, self->_encryptionKey, 0x100000LL) )
  {
    v43 = objc_retainAutoreleasedReturnValue((id)UnsafePointer(self->_encryptionKey, 0x100000LL));
    v17 = 0;
    v18 = 0LL;
  }
  else
  {
    v43 = objc_msgSend(v16, "mutableCryptoInfoCopy");
    v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "storage"));
    if ( (objc_opt_respondsToSelector() & 1) != 0 )
      v17 = (unsigned int)objc_msgSend(v19, "CRC");
    else
      v17 = 0;
    objc_release(v19);
    v18 = a6;
  }
  v20 = objc_retainAutoreleasedReturnValue(-[TSPPackageWriter zipArchiveWriter](self, "zipArchiveWriter"));
  v21 = objc_retainAutoreleasedReturnValue(-[TSUZipWriter entryWithName:](v20, "entryWithName:", v44));
  objc_release(v20);
  v45 = objc_msgSend(v21, "size");
  v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "packageLocator"));
  if ( v22 )
  {
    v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "packageLocator"));
    v24 = (unsigned int)objc_msgSend(v23, "isEqualToString:", v44);
    if ( v21 )
      v25 = v24;
    else
      v25 = 0;
    if ( v25 == 1 && (v26 = objc_msgSend(v15, "encodedLength"), v26 == objc_msgSend(v21, "size")) )
    {
      v27 = (unsigned int)objc_msgSend(v21, "CRC");
      objc_release(v23);
      objc_release(v22);
      if ( v17 == v27 )
      {
        if ( UnsafePointer != -1 )
          dispatch_once(&UnsafePointer, &stru_1001D1328);
        v28 = objc_retain(UnsafePointer);
        if ( os_log_type_enabled((os_log_t)v28, OS_LOG_TYPE_DEBUG) )
        {
          v29 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "packageLocator"));
          sub_100169228((int)v29, buf, (os_log_t)v28);
        }
        objc_release(v28);
        goto LABEL_27;
      }
    }
    else
    {
      objc_release(v23);
      objc_release(v22);
    }
  }
  v30 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "lastModificationDate"));
  if ( v10 )
    v31 = 0LL;
  else
    v31 = v17;
  v32 = -[TSPPackageWriter newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSizeAndCRCForPreservingLastModificationDate:](
          self,
          "newRawDataWriteChannelForRelativePath:originalLastModificationDate:originalSize:originalCRC:forceCalculatingSi"
          "zeAndCRCForPreservingLastModificationDate:",
          v44,
          v30,
          v18,
          v31,
          0LL);
  objc_release(v30);
  v33 = v39;
  if ( v32 )
  {
    v34 = v40;
    v35 = +[TSPFileManager copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:](
            &OBJC_CLASS___TSPFileManager,
            "copyDataFromReadChannel:decryptionInfo:size:toWriteChannel:encryptionInfo:encodedLength:error:",
            v42,
            v40,
            a6,
            v32,
            v43,
            &v45,
            a9);
  }
  else
  {
    v35 = 0;
    v34 = v40;
  }
  objc_msgSend(v32, "close");
  objc_release(v32);
  if ( !v35 )
  {
    v37 = 0LL;
    goto LABEL_29;
  }
LABEL_27:
  v36 = objc_alloc(&OBJC_CLASS___TSPPackageWriterCopyDataResult);
  v37 = -[TSPPackageWriterCopyDataResult initWithFilename:encryptionInfo:encodedLength:](
          v36,
          "initWithFilename:encryptionInfo:encodedLength:",
          v41,
          v43,
          v45);
  v33 = v39;
  v34 = v40;
LABEL_29:
  objc_release(v21);
  objc_release(v43);
  objc_release(v44);
  objc_release(v41);
  objc_release(v33);
  objc_release(v34);
  objc_release(v42);
  objc_release(v15);
  return v37;
}