-[TSPPackageConverter writeToURL:packageType:removeEntriesMatchingFilter:error:]
bool __cdecl -[TSPPackageConverter writeToURL:packageType:removeEntriesMatchingFilter:error:](
        TSPPackageConverter *self,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id *a6)
{
  id v10; // x19
  id v11; // x28
  TSUZipFileArchive *v12; // x21
  id v13; // x24
  id v14; // x26
  bool v15; // w23
  TSUZipFileArchive *v16; // x26
  id v17; // x27
  NSProgress *v18; // x24
  TSPDocumentProperties *v19; // x26
  TSPPackage *package; // x8
  TSPFileCoordinatorDelegate *fileCoordinatorDelegate; // x9
  id *v22; // x27
  NSProgress *v23; // x25
  TSPDocumentProperties *v24; // x27
  id *v25; // x28
  unsigned int v26; // w26
  unsigned __int8 v27; // w26
  id *v28; // x27
  unsigned int v29; // w28
  TSUExtendedAttributeCollection *extendedAttributeCollection; // x26
  void *v31; // x23
  id *v32; // x27
  id v33; // x0
  id v34; // x0
  __int64 v36; // [xsp+18h] [xbp-168h]
  id v37; // [xsp+60h] [xbp-120h]
  id v38; // [xsp+68h] [xbp-118h] BYREF
  id v39; // [xsp+70h] [xbp-110h] BYREF
  id obj; // [xsp+78h] [xbp-108h] BYREF
  _QWORD v41[5]; // [xsp+80h] [xbp-100h] BYREF
  id v42; // [xsp+A8h] [xbp-D8h]
  id v43; // [xsp+B0h] [xbp-D0h]
  id v44; // [xsp+B8h] [xbp-C8h]
  __int64 *v45; // [xsp+C0h] [xbp-C0h]
  id v46; // [xsp+C8h] [xbp-B8h] BYREF
  _QWORD v47[5]; // [xsp+D0h] [xbp-B0h] BYREF
  __int64 v48; // [xsp+F8h] [xbp-88h] BYREF
  id *v49; // [xsp+100h] [xbp-80h]
  __int64 v50; // [xsp+108h] [xbp-78h]
  __int64 (__fastcall *v51)(); // [xsp+110h] [xbp-70h]
  __int64 (__fastcall *v52)(); // [xsp+118h] [xbp-68h]
  id v53; // [xsp+120h] [xbp-60h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a5);
  if ( ((unsigned int)objc_msgSend(v10, "isFileURL") & 1) != 0 )
  {
    v48 = 0LL;
    v49 = (id *)&v48;
    v50 = 0x3032000000LL;
    v51 = sub_10001F828;
    v52 = sub_10001F838;
    v53 = 0LL;
    v12 = objc_retainAutoreleasedReturnValue(-[TSPPackage zipArchive](self->_package, "zipArchive"));
    if ( v12 )
    {
      v13 = objc_retainAutoreleasedReturnValue(
              +[TSPPackage objectArchiveEntryPathForPackageLocator:](
                &OBJC_CLASS___TSPPackage,
                "objectArchiveEntryPathForPackageLocator:",
                CFSTR("Metadata")));
      v14 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v12, "entryForName:", v13));
      objc_release(v14);
      if ( v14 )
      {
        objc_release(v13);
LABEL_12:
        v37 = v11;
        v18 = objc_retainAutoreleasedReturnValue(+[NSProgress currentProgress](&OBJC_CLASS___NSProgress, "currentProgress"));
        objc_release(v18);
        if ( v18 )
        {
          v18 = objc_retainAutoreleasedReturnValue(
                  +[NSProgress progressWithTotalUnitCount:](
                    &OBJC_CLASS___NSProgress,
                    "progressWithTotalUnitCount:",
                    -[TSPPackageConverter progressTotalUnitCountWithZipArchive:](
                      self,
                      "progressTotalUnitCountWithZipArchive:",
                      v12)));
          v47[0] = _NSConcreteStackBlock;
          v47[1] = 3254779904LL;
          v47[2] = sub_10001F840;
          v47[3] = &unk_1001D1698;
          v47[4] = self;
          -[NSProgress setCancellationHandler:](v18, "setCancellationHandler:", v47);
        }
        v19 = objc_retainAutoreleasedReturnValue(-[TSPPackage documentProperties](self->_package, "documentProperties"));
        package = self->_package;
        fileCoordinatorDelegate = self->_fileCoordinatorDelegate;
        v22 = v49;
        v46 = v49[5];
        LOBYTE(v36) = 0;
        v23 = +[TSPPackageWriter newPackageWriterWithPackageType:URL:documentTargetURL:relativeURLForExternalData:packageIdentifier:documentProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encryptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:](
                &OBJC_CLASS___TSPPackageWriter,
                "newPackageWriterWithPackageType:URL:documentTargetURL:relativeURLForExternalData:packageIdentifier:docum"
                "entProperties:documentMetadata:fileFormatVersion:updateType:cloneMode:documentSaveValidationPolicy:encry"
                "ptionKey:originalDocumentPackage:originalSupportPackage:fileCoordinatorDelegate:progress:error:",
                a4,
                v10,
                v10,
                v10,
                1LL,
                v19,
                0LL,
                0LL,
                2LL,
                v36,
                0LL,
                0LL,
                package,
                0LL,
                fileCoordinatorDelegate,
                0LL,
                &v46);
        objc_storeStrong(v22 + 5, v46);
        objc_release(v19);
        if ( v23 )
        {
          v41[0] = _NSConcreteStackBlock;
          v41[1] = 3254779904LL;
          v41[2] = sub_10001F850;
          v41[3] = &unk_1001D24C0;
          v41[4] = self;
          v42 = objc_retain(v11);
          v23 = objc_retain(v23);
          v43 = v23;
          v45 = &v48;
          v18 = objc_retain(v18);
          v44 = v18;
          if ( -[TSPPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:](
                 self,
                 "enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:",
                 v12,
                 1LL,
                 v41) )
          {
            v24 = objc_retainAutoreleasedReturnValue(-[TSPPackage documentProperties](self->_package, "documentProperties"));
            v25 = v49;
            obj = v49[5];
            v26 = -[TSPDocumentProperties writeToPackageWriter:error:](v24, "writeToPackageWriter:error:", v23, &obj);
            objc_storeStrong(v25 + 5, obj);
            objc_release(v24);
          }
          else
          {
            v26 = 0;
          }
          v28 = v49;
          v39 = v49[5];
          v29 = (unsigned int)-[NSProgress closeAndReturnError:](v23, "closeAndReturnError:", &v39);
          objc_storeStrong(v28 + 5, v39);
          if ( (v29 & v26) == 1 )
          {
            extendedAttributeCollection = self->_extendedAttributeCollection;
            if ( extendedAttributeCollection )
            {
              v31 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
              v32 = v49;
              v38 = v49[5];
              v27 = -[TSUExtendedAttributeCollection setAttributeCollectionToPath:intent:options:error:](
                      extendedAttributeCollection,
                      "setAttributeCollectionToPath:intent:options:error:",
                      v31,
                      2LL,
                      0LL,
                      &v38);
              objc_storeStrong(v32 + 5, v38);
              objc_release(v31);
            }
            else
            {
              v27 = 1;
            }
          }
          else
          {
            v27 = 0;
          }
          v11 = v37;
          objc_release(v44);
          objc_release(v43);
          objc_release(v42);
        }
        else
        {
          v27 = 0;
        }
LABEL_30:
        objc_release(v23);
        v15 = v27;
LABEL_31:
        objc_release(v18);
        if ( a6 && !v15 )
        {
          v33 = v49[5];
          if ( v33 )
          {
            *a6 = objc_retainAutorelease(v33);
          }
          else
          {
            v34 = objc_retainAutorelease(
                    objc_retainAutoreleasedReturnValue(
                      +[NSError tsp_unknownWriteErrorWithUserInfo:](
                        &OBJC_CLASS___NSError,
                        "tsp_unknownWriteErrorWithUserInfo:",
                        0LL)));
            *a6 = v34;
            objc_release(v34);
          }
        }
        objc_release(v12);
        _Block_object_dispose(&v48, 8);
        objc_release(v53);
        goto LABEL_37;
      }
      if ( (void *)-[TSPPackageConverter packageType](self, "packageType") == (void *)2 )
      {
        v16 = objc_retainAutoreleasedReturnValue(-[TSPPackage componentZipArchive](self->_package, "componentZipArchive"));
        v17 = objc_retainAutoreleasedReturnValue(-[TSUZipArchive entryForName:](v16, "entryForName:", v13));
        objc_release(v17);
        objc_release(v16);
        objc_release(v13);
        if ( v17 )
          goto LABEL_12;
      }
      else
      {
        objc_release(v13);
      }
    }
    else if ( ((unsigned int)objc_msgSend((id)objc_opt_class(self->_package), "hasZipArchive") & 1) == 0 )
    {
      goto LABEL_12;
    }
    v18 = objc_retainAutoreleasedReturnValue(-[TSPPackage lastReloadError](self->_package, "lastReloadError"));
    v23 = v18;
    if ( !v18 )
      v23 = (NSProgress *)objc_retainAutoreleasedReturnValue(
                            +[NSError tsp_unknownReadErrorWithUserInfo:](
                              &OBJC_CLASS___NSError,
                              "tsp_unknownReadErrorWithUserInfo:",
                              0LL));
    objc_storeStrong(v49 + 5, v23);
    v27 = 0;
    v15 = 0;
    if ( v18 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v15 = 0;
  if ( a6 )
    *a6 = objc_autorelease(
            objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                NSURLErrorDomain,
                -1000LL,
                0LL)));
LABEL_37:
  objc_release(v11);
  objc_release(v10);
  return v15;
}