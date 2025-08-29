-[NSFileManager tsu_grantUserWritePosixPermissionAtPath:error:]
bool __cdecl -[NSFileManager tsu_grantUserWritePosixPermissionAtPath:error:](
        NSFileManager *self,
        SEL a2,
        id a3,
        id *a4)
{
  id v6; // x19
  NSDictionary *v7; // x20
  id v8; // x25
  NSString *v9; // x21
  NSNumber *v10; // x24
  NSDictionary *v11; // x27
  unsigned int v12; // w28
  void *v13; // x22
  NSArray *v14; // x26
  id v15; // x24
  void *v16; // x0
  void *v17; // x28
  __int64 v18; // x20
  void *v19; // x21
  void *v20; // x27
  void *v21; // x25
  unsigned __int8 v22; // w22
  bool v23; // w23
  id v24; // x0
  void *v26; // [xsp+8h] [xbp-168h]
  NSString *v27; // [xsp+10h] [xbp-160h]
  NSDictionary *v28; // [xsp+18h] [xbp-158h]
  id *v29; // [xsp+20h] [xbp-150h]
  id v30; // [xsp+28h] [xbp-148h]
  id v31; // [xsp+30h] [xbp-140h] BYREF
  id v32; // [xsp+38h] [xbp-138h] BYREF
  __int128 v33; // [xsp+40h] [xbp-130h] BYREF
  __int128 v34; // [xsp+50h] [xbp-120h]
  __int128 v35; // [xsp+60h] [xbp-110h]
  __int128 v36; // [xsp+70h] [xbp-100h]
  id v37; // [xsp+80h] [xbp-F0h] BYREF
  id v38; // [xsp+88h] [xbp-E8h] BYREF
  _BYTE v39[128]; // [xsp+90h] [xbp-E0h] BYREF

  v6 = objc_retain(a3);
  v38 = 0LL;
  v7 = objc_retainAutoreleasedReturnValue(-[NSFileManager attributesOfItemAtPath:error:](self, "attributesOfItemAtPath:error:", v6, &v38));
  v8 = objc_retain(v38);
  v9 = objc_retainAutoreleasedReturnValue(-[NSDictionary fileType](v7, "fileType"));
  if ( !-[NSString isEqualToString:](v9, "isEqualToString:", NSFileTypeDirectory)
    && !-[NSString isEqualToString:](v9, "isEqualToString:", NSFileTypeRegular)
    && !-[NSString isEqualToString:](v9, "isEqualToString:", NSFileTypeSymbolicLink) )
  {
    v23 = 1;
    goto LABEL_27;
  }
  v29 = a4;
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSNumber numberWithUnsignedInteger:](
            &OBJC_CLASS___NSNumber,
            "numberWithUnsignedInteger:",
            -[NSDictionary filePosixPermissions](v7, "filePosixPermissions") | 0x80));
  v11 = objc_retainAutoreleasedReturnValue(
          +[NSDictionary dictionaryWithObject:forKey:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObject:forKey:",
            v10,
            NSFilePosixPermissions));
  v37 = v8;
  v12 = -[NSFileManager setAttributes:ofItemAtPath:error:](self, "setAttributes:ofItemAtPath:error:", v11, v6, &v37);
  v30 = objc_retain(v37);
  objc_release(v8);
  objc_release(v11);
  objc_release(v10);
  if ( !v12 )
  {
    v23 = 0;
    v8 = v30;
    if ( !a4 )
      goto LABEL_27;
LABEL_23:
    if ( !v23 )
    {
      if ( v8 )
      {
        v8 = objc_retainAutorelease(v8);
        v23 = 0;
        *a4 = v8;
      }
      else
      {
        v24 = objc_retainAutorelease(
                objc_retainAutoreleasedReturnValue(
                  +[NSError tsu_fileWriteUnknownErrorWithUserInfo:](
                    &OBJC_CLASS___NSError,
                    "tsu_fileWriteUnknownErrorWithUserInfo:",
                    0LL)));
        *a4 = v24;
        objc_release(v24);
        v23 = 0;
      }
    }
    goto LABEL_27;
  }
  if ( !-[NSString isEqualToString:](v9, "isEqualToString:", NSFileTypeDirectory) )
  {
    v23 = 1;
    v8 = v30;
    goto LABEL_27;
  }
  v13 = objc_autoreleasePoolPush();
  v33 = 0u;
  v34 = 0u;
  v35 = 0u;
  v36 = 0u;
  v32 = 0LL;
  v14 = objc_retainAutoreleasedReturnValue(-[NSFileManager contentsOfDirectoryAtPath:error:](self, "contentsOfDirectoryAtPath:error:", v6, &v32));
  v15 = objc_retain(v32);
  v16 = -[NSArray countByEnumeratingWithState:objects:count:](
          v14,
          "countByEnumeratingWithState:objects:count:",
          &v33,
          v39,
          16LL);
  if ( v16 )
  {
    v17 = v16;
    v26 = v13;
    v27 = v9;
    v28 = v7;
    v18 = *(_QWORD *)v34;
    while ( 2 )
    {
      v19 = 0LL;
      v20 = v15;
      do
      {
        if ( *(_QWORD *)v34 != v18 )
          objc_enumerationMutation(v14);
        v21 = objc_retainAutoreleasedReturnValue(
                objc_msgSend(
                  v6,
                  "stringByAppendingPathComponent:",
                  *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8LL * (_QWORD)v19)));
        v31 = v20;
        v22 = -[NSFileManager tsu_grantUserWritePosixPermissionAtPath:error:](
                self,
                "tsu_grantUserWritePosixPermissionAtPath:error:",
                v21,
                &v31);
        v15 = objc_retain(v31);
        objc_release(v20);
        objc_release(v21);
        if ( (v22 & 1) == 0 )
        {
          v15 = objc_retain(v15);
          objc_release(v30);
          v23 = 0;
          v8 = v15;
          v9 = v27;
          v7 = v28;
          goto LABEL_19;
        }
        v19 = (char *)v19 + 1;
        v20 = v15;
      }
      while ( v17 != v19 );
      v17 = -[NSArray countByEnumeratingWithState:objects:count:](
              v14,
              "countByEnumeratingWithState:objects:count:",
              &v33,
              v39,
              16LL);
      if ( v17 )
        continue;
      break;
    }
    v23 = 1;
    v9 = v27;
    v7 = v28;
    v8 = v30;
LABEL_19:
    v13 = v26;
  }
  else
  {
    v23 = 1;
    v8 = v30;
  }
  objc_release(v14);
  objc_release(v15);
  objc_autoreleasePoolPop(v13);
  a4 = v29;
  if ( v29 )
    goto LABEL_23;
LABEL_27:
  objc_release(v9);
  objc_release(v7);
  objc_release(v8);
  objc_release(v6);
  return v23;
}