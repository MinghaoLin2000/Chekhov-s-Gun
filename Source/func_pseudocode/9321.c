-[TSPDirectoryPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:]
bool __cdecl -[TSPDirectoryPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:](
        TSPDirectoryPackageConverter *self,
        SEL a2,
        id a3,
        bool a4,
        id a5)
{
  NSFileManager *v7; // x19
  NSArray *v8; // x20
  NSString *v9; // x19
  NSString *v10; // x20
  char *v11; // x19
  void *v12; // x22
  bool v13; // w21
  __int64 v14; // x26
  void *v15; // x20
  void *v16; // x19
  char v17; // w28
  unsigned int v18; // w25
  id v19; // x24
  id v20; // x23
  void *v21; // x25
  void *v22; // x27
  void *v23; // x25
  unsigned __int8 v24; // w8
  void *v25; // x0
  void *v26; // x19
  __int64 v27; // x25
  __int64 v28; // x26
  __int64 v29; // x23
  void *v30; // x20
  char v31; // w27
  unsigned int v32; // w23
  id v33; // x24
  unsigned int v34; // w20
  id v35; // x26
  void *v36; // x19
  __int64 v37; // x21
  void *v38; // x25
  __int64 v39; // x23
  void *v40; // x24
  char v41; // w27
  unsigned int v42; // w23
  id v43; // x20
  bool v44; // w23
  id v45; // x24
  void *v46; // x19
  __int64 v47; // x21
  __int64 v48; // x27
  __int64 v49; // x25
  void *v50; // x20
  char v51; // w28
  unsigned int v52; // w23
  id v53; // x25
  NSDirectoryEnumerator *v55; // [xsp+0h] [xbp-440h]
  NSString *v56; // [xsp+8h] [xbp-438h]
  NSURL *v57; // [xsp+10h] [xbp-430h]
  id v58; // [xsp+18h] [xbp-428h]
  id v59; // [xsp+20h] [xbp-420h]
  id v60; // [xsp+28h] [xbp-418h]
  NSDirectoryEnumerator *obj; // [xsp+38h] [xbp-408h]
  id v62; // [xsp+40h] [xbp-400h]
  id v63; // [xsp+40h] [xbp-400h]
  _BOOL4 v64; // [xsp+4Ch] [xbp-3F4h]
  id v65; // [xsp+50h] [xbp-3F0h]
  id v66; // [xsp+58h] [xbp-3E8h]
  char *v67; // [xsp+60h] [xbp-3E0h]
  TSPDirectoryPackageConverter *v68; // [xsp+68h] [xbp-3D8h]
  id v69; // [xsp+70h] [xbp-3D0h]
  id v70; // [xsp+70h] [xbp-3D0h]
  id v71; // [xsp+78h] [xbp-3C8h] BYREF
  __int128 v72; // [xsp+80h] [xbp-3C0h] BYREF
  __int128 v73; // [xsp+90h] [xbp-3B0h]
  __int128 v74; // [xsp+A0h] [xbp-3A0h]
  __int128 v75; // [xsp+B0h] [xbp-390h]
  id v76; // [xsp+C8h] [xbp-378h] BYREF
  __int128 v77; // [xsp+D0h] [xbp-370h] BYREF
  __int128 v78; // [xsp+E0h] [xbp-360h]
  __int128 v79; // [xsp+F0h] [xbp-350h]
  __int128 v80; // [xsp+100h] [xbp-340h]
  objc_super v81; // [xsp+118h] [xbp-328h] BYREF
  id v82; // [xsp+128h] [xbp-318h] BYREF
  __int128 v83; // [xsp+130h] [xbp-310h] BYREF
  __int128 v84; // [xsp+140h] [xbp-300h]
  __int128 v85; // [xsp+150h] [xbp-2F0h]
  __int128 v86; // [xsp+160h] [xbp-2E0h]
  id v87; // [xsp+170h] [xbp-2D0h] BYREF
  id v88; // [xsp+178h] [xbp-2C8h] BYREF
  __int128 v89; // [xsp+180h] [xbp-2C0h] BYREF
  __int128 v90; // [xsp+190h] [xbp-2B0h]
  __int128 v91; // [xsp+1A0h] [xbp-2A0h]
  __int128 v92; // [xsp+1B0h] [xbp-290h]
  _BYTE v93[128]; // [xsp+1C0h] [xbp-280h] BYREF
  _BYTE v94[128]; // [xsp+240h] [xbp-200h] BYREF
  _BYTE v95[128]; // [xsp+2C0h] [xbp-180h] BYREF
  _BYTE v96[128]; // [xsp+340h] [xbp-100h] BYREF
  _QWORD v97[3]; // [xsp+3C0h] [xbp-80h] BYREF

  v64 = a4;
  v65 = objc_retain(a3);
  v66 = objc_retain(a5);
  v68 = self;
  v57 = objc_retainAutoreleasedReturnValue(-[TSPPackageConverter URL](self, "URL"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v97[0] = NSURLIsDirectoryKey;
  v97[1] = NSURLFileSizeKey;
  v97[2] = NSURLContentModificationDateKey;
  v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v97, 3LL));
  v55 = objc_retainAutoreleasedReturnValue(
          -[NSFileManager enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:](
            v7,
            "enumeratorAtURL:includingPropertiesForKeys:options:errorHandler:",
            v57,
            v8,
            0LL,
            0LL));
  objc_release(v8);
  objc_release(v7);
  v9 = objc_retainAutoreleasedReturnValue(-[NSURL path](v57, "path"));
  v10 = objc_retainAutoreleasedReturnValue(-[NSString stringByStandardizingPath](v9, "stringByStandardizingPath"));
  v56 = objc_retainAutoreleasedReturnValue(-[NSString precomposedStringWithCanonicalMapping](v10, "precomposedStringWithCanonicalMapping"));
  objc_release(v10);
  objc_release(v9);
  v11 = -[NSString length](v56, "length");
  v60 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v59 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v58 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableArray);
  v91 = 0u;
  v92 = 0u;
  v89 = 0u;
  v90 = 0u;
  obj = objc_retain(v55);
  v12 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
          obj,
          "countByEnumeratingWithState:objects:count:",
          &v89,
          v96,
          16LL);
  v67 = v11 + 1;
  if ( v12 )
  {
    v69 = 0LL;
    v62 = *(id *)v90;
    v13 = 1;
LABEL_3:
    v14 = 0LL;
    while ( 1 )
    {
      if ( *(id *)v90 != v62 )
        objc_enumerationMutation(obj);
      v15 = *(void **)(*((_QWORD *)&v89 + 1) + 8 * v14);
      v16 = objc_autoreleasePoolPush();
      v17 = -[TSPPackageConverter isCancelled](v68, "isCancelled") || !v13;
      if ( (v17 & 1) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v87 = 0LL;
        v88 = 0LL;
        v18 = (unsigned int)objc_msgSend(v15, "getResourceValue:forKey:error:", &v88, NSURLIsDirectoryKey, &v87);
        v19 = objc_retain(v88);
        v20 = objc_retain(v87);
        objc_release(v69);
        if ( v18 && ((unsigned int)objc_msgSend(v19, "boolValue") & 1) == 0 )
        {
          v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v15, "path"));
          v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "stringByStandardizingPath"));
          v70 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "precomposedStringWithCanonicalMapping"));
          objc_release(v22);
          objc_release(v21);
          v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v70, "substringFromIndex:", v67));
          v24 = -[TSPPackageConverter isDataPath:](v68, "isDataPath:", v23);
          v25 = v60;
          if ( (v24 & 1) == 0 )
          {
            if ( -[TSPPackageConverter isObjectArchivePath:](v68, "isObjectArchivePath:", v23) )
              v25 = v59;
            else
              v25 = v58;
          }
          objc_msgSend(v25, "addObject:", v15, v55);
          objc_release(v23);
          objc_release(v70);
        }
        objc_release(v19);
        v69 = v20;
      }
      objc_autoreleasePoolPop(v16);
      if ( (v17 & 1) != 0 )
        break;
      if ( v12 == (void *)++v14 )
      {
        v12 = -[NSDirectoryEnumerator countByEnumeratingWithState:objects:count:](
                obj,
                "countByEnumeratingWithState:objects:count:",
                &v89,
                v96,
                16LL);
        if ( v12 )
          goto LABEL_3;
        break;
      }
    }
  }
  else
  {
    v69 = 0LL;
    v13 = 1;
  }
  objc_release(obj);
  objc_msgSend(v60, "sortUsingComparator:", &stru_1001D2660);
  v85 = 0u;
  v86 = 0u;
  v83 = 0u;
  v84 = 0u;
  v63 = objc_retain(v60);
  v26 = objc_msgSend(v63, "countByEnumeratingWithState:objects:count:", &v83, v95, 16LL);
  if ( v26 )
  {
    v27 = *(_QWORD *)v84;
LABEL_23:
    v28 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v84 != v27 )
        objc_enumerationMutation(v63);
      v29 = *(_QWORD *)(*((_QWORD *)&v83 + 1) + 8 * v28);
      v30 = objc_autoreleasePoolPush();
      v31 = -[TSPPackageConverter isCancelled](v68, "isCancelled") || !v13;
      if ( (v31 & 1) != 0 )
      {
        v32 = 0;
      }
      else
      {
        v82 = v69;
        v32 = -[TSPDirectoryPackageConverter performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:](
                v68,
                "performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:",
                v66,
                v67,
                v29,
                v64,
                v65,
                &v82);
        v33 = objc_retain(v82);
        objc_release(v69);
        v69 = v33;
      }
      objc_autoreleasePoolPop(v30);
      v13 = v32 != 0;
      if ( (v31 & 1) != 0 )
        break;
      if ( v26 == (void *)++v28 )
      {
        v26 = objc_msgSend(v63, "countByEnumeratingWithState:objects:count:", &v83, v95, 16LL);
        if ( v26 )
          goto LABEL_23;
        break;
      }
    }
  }
  objc_release(v63);
  if ( v13 )
  {
    v81.receiver = v68;
    v81.super_class = (Class)&OBJC_CLASS___TSPDirectoryPackageConverter;
    v34 = -[TSPPackageConverter enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:](
            &v81,
            "enumeratePackageEntriesWithZipArchive:needsReadChannel:accessor:",
            v65,
            v64,
            v66);
  }
  else
  {
    v34 = 0;
  }
  v80 = 0u;
  v78 = 0u;
  v79 = 0u;
  v77 = 0u;
  v35 = objc_retain(v59);
  v36 = objc_msgSend(v35, "countByEnumeratingWithState:objects:count:", &v77, v94, 16LL);
  if ( v36 )
  {
    v37 = *(_QWORD *)v78;
LABEL_37:
    v38 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v78 != v37 )
        objc_enumerationMutation(v35);
      v39 = *(_QWORD *)(*((_QWORD *)&v77 + 1) + 8LL * (_QWORD)v38);
      v40 = objc_autoreleasePoolPush();
      v41 = -[TSPPackageConverter isCancelled](v68, "isCancelled") | v34 ^ 1;
      if ( (v41 & 1) != 0 )
      {
        v42 = 0;
      }
      else
      {
        v76 = v69;
        v42 = -[TSPDirectoryPackageConverter performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:](
                v68,
                "performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:",
                v66,
                v67,
                v39,
                v64,
                v65,
                &v76);
        v43 = objc_retain(v76);
        objc_release(v69);
        v69 = v43;
      }
      objc_autoreleasePoolPop(v40);
      if ( (v41 & 1) != 0 )
        break;
      v38 = (char *)v38 + 1;
      LOBYTE(v34) = v42 != 0;
      if ( v36 == v38 )
      {
        v36 = objc_msgSend(v35, "countByEnumeratingWithState:objects:count:", &v77, v94, 16LL);
        if ( v36 )
          goto LABEL_37;
        break;
      }
    }
  }
  else
  {
    v42 = v34;
  }
  v44 = v42 != 0;
  objc_release(v35);
  v74 = 0u;
  v75 = 0u;
  v72 = 0u;
  v73 = 0u;
  v45 = objc_retain(v58);
  v46 = objc_msgSend(v45, "countByEnumeratingWithState:objects:count:", &v72, v93, 16LL);
  if ( v46 )
  {
    v47 = *(_QWORD *)v73;
LABEL_50:
    v48 = 0LL;
    while ( 1 )
    {
      if ( *(_QWORD *)v73 != v47 )
        objc_enumerationMutation(v45);
      v49 = *(_QWORD *)(*((_QWORD *)&v72 + 1) + 8 * v48);
      v50 = objc_autoreleasePoolPush();
      v51 = -[TSPPackageConverter isCancelled](v68, "isCancelled") || !v44;
      if ( (v51 & 1) != 0 )
      {
        v52 = 0;
      }
      else
      {
        v71 = v69;
        v52 = -[TSPDirectoryPackageConverter performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:](
                v68,
                "performAccessor:filePathCharacterIndex:fileURL:needsReadChannel:zipArchive:error:",
                v66,
                v67,
                v49,
                v64,
                v65,
                &v71);
        v53 = objc_retain(v71);
        objc_release(v69);
        v69 = v53;
      }
      objc_autoreleasePoolPop(v50);
      v44 = v52 != 0;
      if ( (v51 & 1) != 0 )
        break;
      if ( v46 == (void *)++v48 )
      {
        v46 = objc_msgSend(v45, "countByEnumeratingWithState:objects:count:", &v72, v93, 16LL);
        if ( v46 )
          goto LABEL_50;
        break;
      }
    }
  }
  objc_release(v45);
  objc_release(v45);
  objc_release(v35);
  objc_release(v63);
  objc_release(v69);
  objc_release(v56);
  objc_release(obj);
  objc_release(v57);
  objc_release(v66);
  objc_release(v65);
  return v44;
}