-[StickiesMigration migrateStickiesColorDictRepArray:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[StickiesMigration migrateStickiesColorDictRepArray:reply:](
        StickiesMigration *self,
        SEL a2,
        id a3,
        id a4)
{
  uid_t v5; // w0
  NSFileManager *v6; // x19
  NSString *v7; // x21
  unsigned __int8 v8; // w20
  __int64 v9; // x0
  NSXPCConnection *v10; // x19
  id v11; // x20
  NSMutableArray *v12; // x20
  NSArray *v13; // x19
  void *v14; // x0
  void *i; // x22
  void *v16; // x26
  __int64 v17; // x0
  id v18; // x21
  id v19; // x23
  id v20; // x20
  void *v21; // x19
  void *v22; // x20
  void *v23; // x24
  NSString *v24; // x19
  NSURL *v25; // x24
  NSFileManager *v26; // x28
  void *v27; // x25
  void *v28; // x24
  NSDictionary *v29; // x27
  __int64 v30; // d0
  __int64 v31; // d8
  __int64 v32; // d1
  __int64 v33; // d9
  __int64 v34; // d2
  __int64 v35; // d10
  double v36; // d3
  double v37; // d11
  double v38; // d3 OVERLAPPED
  __int64 v39; // d0
  __int64 v40; // d1
  __int64 v41; // d2
  NSString *v42; // x24
  CGFloat v43; // d2
  CGFloat v44; // d3
  NSString *v45; // x24
  NSNumber *v46; // x24
  NSNumber *v47; // x24
  unsigned int v48; // w24
  void *v49; // x24
  NSXPCConnection *v50; // x19
  id v51; // x20
  NSFileManager *v52; // x19
  unsigned int v53; // w20
  NSFileManager *v54; // x19
  unsigned __int8 v55; // w20
  NSBundle *v56; // x19
  NSString *v57; // x20
  NSDictionary *v58; // x22
  NSError *v59; // x21
  NSString *v60; // [xsp+8h] [xbp-218h]
  NSData *v61; // [xsp+10h] [xbp-210h]
  id v62; // [xsp+18h] [xbp-208h]
  NSString *v63; // [xsp+20h] [xbp-200h]
  NSString *v64; // [xsp+28h] [xbp-1F8h]
  void (__fastcall **v65)(id, _QWORD); // [xsp+30h] [xbp-1F0h]
  NSString *v66; // [xsp+38h] [xbp-1E8h]
  NSMutableArray *v67; // [xsp+50h] [xbp-1D0h]
  id obj; // [xsp+58h] [xbp-1C8h]
  id v69; // [xsp+60h] [xbp-1C0h]
  __int64 v70; // [xsp+68h] [xbp-1B8h]
  NSString *v71; // [xsp+70h] [xbp-1B0h]
  void *v72; // [xsp+78h] [xbp-1A8h]
  __int64 v73; // [xsp+80h] [xbp-1A0h]
  __int128 v75; // [xsp+90h] [xbp-190h] BYREF
  __int128 v76; // [xsp+A0h] [xbp-180h]
  __int128 v77; // [xsp+B0h] [xbp-170h]
  __int128 v78; // [xsp+C0h] [xbp-160h]
  NSErrorUserInfoKey v79; // [xsp+E0h] [xbp-140h] BYREF
  NSString *v80; // [xsp+E8h] [xbp-138h] BYREF
  _QWORD v81[2]; // [xsp+F0h] [xbp-130h] BYREF
  _QWORD v82[2]; // [xsp+100h] [xbp-120h] BYREF
  _BYTE v83[128]; // [xsp+110h] [xbp-110h] BYREF
  NSSize v84; // 0:d0.8,8:d1.8

  v69 = objc_retain(a3);
  v65 = (void (__fastcall **)(id, _QWORD))objc_retain(a4);
  v5 = getuid();
  v66 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", getpwuid(v5)->pw_dir));
  v63 = objc_retainAutoreleasedReturnValue(
          -[NSString stringByAppendingPathComponent:](
            v66,
            "stringByAppendingPathComponent:",
            CFSTR("/Library/.StickiesDatabase")));
  v64 = objc_retainAutoreleasedReturnValue(
          -[NSString stringByAppendingPathComponent:](
            v66,
            "stringByAppendingPathComponent:",
            CFSTR("/Library/StickiesDatabase")));
  v6 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v7 = v64;
  v8 = -[NSFileManager fileExistsAtPath:](v6, "fileExistsAtPath:", v64);
  objc_release(v6);
  if ( (v8 & 1) != 0 )
    goto LABEL_2;
  v52 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  v53 = -[NSFileManager fileExistsAtPath:](v52, "fileExistsAtPath:", v63);
  objc_release(v52);
  if ( v53 )
  {
    v54 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v7 = v64;
    v55 = -[NSFileManager moveItemAtPath:toPath:error:](v54, "moveItemAtPath:toPath:error:", v63, v64, 0LL);
    objc_release(v54);
    if ( (v55 & 1) != 0 )
    {
LABEL_2:
      v61 = objc_retainAutoreleasedReturnValue(+[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v7));
      v71 = objc_retainAutoreleasedReturnValue(
              -[NSString stringByAppendingPathComponent:](
                v66,
                "stringByAppendingPathComponent:",
                CFSTR("/Library/Containers/com.apple.Stickies/Data/Library/Stickies/")));
      v62 = objc_retainAutoreleasedReturnValue(+[NSUnarchiver unarchiveObjectWithData:](&OBJC_CLASS___NSUnarchiver, "unarchiveObjectWithData:", v61));
      v9 = objc_opt_class(&OBJC_CLASS___NSMutableArray);
      if ( (objc_opt_isKindOfClass(v62, v9) & 1) != 0 )
      {
        v10 = objc_retainAutoreleasedReturnValue(-[StickiesMigration connection](self, "connection"));
        v11 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v10, "remoteObjectProxy"));
        objc_msgSend(v11, "totalNumberOfDocumentsToImport:", objc_msgSend(v62, "count"));
        objc_release(v11);
        objc_release(v10);
        if ( objc_msgSend(v62, "count") )
        {
          v60 = objc_retainAutoreleasedReturnValue(
                  -[NSString stringByAppendingPathComponent:](
                    v71,
                    "stringByAppendingPathComponent:",
                    CFSTR(".SavedStickiesState")));
          v12 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
          v13 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithContentsOfFile:](&OBJC_CLASS___NSArray, "arrayWithContentsOfFile:", v60));
          -[NSMutableArray addObjectsFromArray:](v12, "addObjectsFromArray:", v13);
          v67 = v12;
          objc_release(v13);
          v77 = 0u;
          v78 = 0u;
          v75 = 0u;
          v76 = 0u;
          obj = objc_retain(v62);
          v14 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v75, v83, 16LL);
          if ( v14 )
          {
            v73 = 0LL;
            v70 = *(_QWORD *)v76;
            do
            {
              v72 = v14;
              for ( i = 0LL; i != v72; i = (char *)i + 1 )
              {
                if ( *(_QWORD *)v76 != v70 )
                  objc_enumerationMutation(obj);
                v16 = *(void **)(*((_QWORD *)&v75 + 1) + 8LL * (_QWORD)i);
                v17 = objc_opt_class(&OBJC_CLASS___Document);
                if ( ((unsigned int)objc_opt_isKindOfClass(v16, v17) & (v16 != 0LL)) == 1 )
                {
                  v18 = objc_alloc_init((Class)&OBJC_CLASS___NSMutableDictionary);
                  v19 = objc_retainAutoreleasedReturnValue(-[StickiesMigration generateUniqueUUIDAtPath:](self, "generateUniqueUUIDAtPath:", v71));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v19, CFSTR("UUID"));
                  v20 = objc_alloc((Class)&OBJC_CLASS___NSFileWrapper);
                  v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "RTFDData"));
                  v22 = objc_msgSend(v20, "initWithSerializedRepresentation:", v21);
                  objc_release(v21);
                  v23 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "stringByAppendingString:", CFSTR(".rtfd")));
                  v24 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v71, "stringByAppendingPathComponent:", v23));
                  objc_release(v23);
                  NSLog(&CFSTR("path %@").isa, v24);
                  v25 = objc_retainAutoreleasedReturnValue(+[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v24));
                  objc_msgSend(v22, "writeToURL:options:originalContentsURL:error:", v25, 1LL, 0LL, 0LL);
                  objc_release(v25);
                  v26 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
                  v81[0] = NSFileCreationDate;
                  v27 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "creationDate"));
                  v81[1] = NSFileModificationDate;
                  v82[0] = v27;
                  v28 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "modificationDate"));
                  v82[1] = v28;
                  v29 = objc_retainAutoreleasedReturnValue(
                          +[NSDictionary dictionaryWithObjects:forKeys:count:](
                            &OBJC_CLASS___NSDictionary,
                            "dictionaryWithObjects:forKeys:count:",
                            v82,
                            v81,
                            2LL));
                  -[NSFileManager setAttributes:ofItemAtPath:error:](
                    v26,
                    "setAttributes:ofItemAtPath:error:",
                    v29,
                    v24,
                    0LL);
                  objc_release(v29);
                  objc_release(v28);
                  objc_release(v27);
                  objc_release(v26);
                  objc_msgSend(v16, "windowFrame");
                  v31 = v30;
                  v33 = v32;
                  v35 = v34;
                  v37 = v36;
                  if ( ((unsigned int)objc_msgSend(v16, "windowFlags") & 1) != 0 )
                    v38 = 12.0;
                  else
                    v38 = v37;
                  v39 = v31;
                  v40 = v33;
                  v41 = v35;
                  v42 = objc_retainAutoreleasedReturnValue(NSStringFromRect(*(NSRect *)(&v38 - 3)));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v42, CFSTR("Frame"));
                  objc_release(v42);
                  objc_msgSend(v16, "windowFrame");
                  v84.width = v43;
                  v84.height = v44;
                  v45 = objc_retainAutoreleasedReturnValue(NSStringFromSize(v84));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v45, CFSTR("ExpandedSize"));
                  objc_release(v45);
                  v46 = objc_retainAutoreleasedReturnValue(
                          +[NSNumber numberWithInt:](
                            &OBJC_CLASS___NSNumber,
                            "numberWithInt:",
                            (unsigned __int64)objc_msgSend(v16, "windowFlags") & 4));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v46, CFSTR("Translucent"));
                  objc_release(v46);
                  v47 = objc_retainAutoreleasedReturnValue(
                          +[NSNumber numberWithInt:](
                            &OBJC_CLASS___NSNumber,
                            "numberWithInt:",
                            (unsigned __int64)objc_msgSend(v16, "windowFlags") & 2));
                  objc_msgSend(v18, "setObject:forKeyedSubscript:", v47, CFSTR("Floating"));
                  objc_release(v47);
                  v48 = (unsigned int)objc_msgSend(v16, "windowColor");
                  if ( (v48 & 0x80000000) != 0 || (unsigned __int64)objc_msgSend(v69, "count") <= v48 )
                    v48 = 0;
                  v49 = objc_retainAutoreleasedReturnValue(objc_msgSend(v69, "objectAtIndexedSubscript:", v48));
                  objc_msgSend(v18, "addEntriesFromDictionary:", v49);
                  objc_release(v49);
                  -[NSMutableArray addObject:](v67, "addObject:", v18);
                  objc_release(v24);
                  objc_release(v22);
                  objc_release(v19);
                  objc_release(v18);
                }
                v50 = objc_retainAutoreleasedReturnValue(-[StickiesMigration connection](self, "connection"));
                v51 = objc_retainAutoreleasedReturnValue(-[NSXPCConnection remoteObjectProxy](v50, "remoteObjectProxy"));
                objc_msgSend(v51, "updateProgress:", (char *)i + v73 + 1);
                objc_release(v51);
                objc_release(v50);
              }
              v14 = objc_msgSend(obj, "countByEnumeratingWithState:objects:count:", &v75, v83, 16LL);
              v73 += (__int64)i;
            }
            while ( v14 );
          }
          objc_release(obj);
          -[NSMutableArray writeToFile:atomically:](v67, "writeToFile:atomically:", v60, 0LL);
          objc_release(v67);
          objc_release(v60);
        }
        if ( v65 )
          v65[2](v65, 0LL);
      }
      else if ( v65 )
      {
        v79 = NSLocalizedDescriptionKey;
        v56 = objc_retainAutoreleasedReturnValue(+[NSBundle mainBundle](&OBJC_CLASS___NSBundle, "mainBundle"));
        v57 = objc_retainAutoreleasedReturnValue(
                -[NSBundle localizedStringForKey:value:table:](
                  v56,
                  "localizedStringForKey:value:table:",
                  CFSTR("*** Error: Unrecognized format of Stickies database."),
                  &stru_1000043F0,
                  0LL));
        v80 = v57;
        v58 = objc_retainAutoreleasedReturnValue(
                +[NSDictionary dictionaryWithObjects:forKeys:count:](
                  &OBJC_CLASS___NSDictionary,
                  "dictionaryWithObjects:forKeys:count:",
                  &v80,
                  &v79,
                  1LL));
        v59 = objc_retainAutoreleasedReturnValue(
                +[NSError errorWithDomain:code:userInfo:](
                  &OBJC_CLASS___NSError,
                  "errorWithDomain:code:userInfo:",
                  CFSTR("com.apple.StickiesMigration.xpc"),
                  -1LL,
                  v58));
        ((void (__fastcall **)(id, NSError *))v65)[2](v65, v59);
        objc_release(v59);
        objc_release(v58);
        objc_release(v57);
        objc_release(v56);
      }
      objc_release(v62);
      objc_release(v71);
      objc_release(v61);
      goto LABEL_30;
    }
    NSLog(&CFSTR("*** Error: Could not rename file.").isa);
  }
  if ( v65 )
    v65[2](v65, 0LL);
LABEL_30:
  objc_release(v64);
  objc_release(v63);
  objc_release(v66);
  objc_release(v65);
  objc_release(v69);
}