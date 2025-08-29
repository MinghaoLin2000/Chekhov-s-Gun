-[PAUbiquityController setUbiquitous:withCompletionBlock:]
void __cdecl -[PAUbiquityController setUbiquitous:withCompletionBlock:](
        PAUbiquityController *self,
        SEL a2,
        bool a3,
        id a4)
{
  void (__fastcall **v5)(id, id); // x20
  void *v6; // x27
  NSFileManager *v7; // x23
  NSString *v8; // x24
  NSFileManager *v9; // x21
  void *v10; // x0
  void *v11; // x23
  unsigned __int64 v12; // x20
  NSString *v13; // x26
  NSString *v14; // x24
  NSFileManager *v15; // x26
  unsigned int v16; // w27
  int v17; // w28
  bool v18; // zf
  NSFileManager *v19; // x27
  NSDictionary *v20; // x26
  id v21; // x28
  unsigned __int64 v22; // x27
  void *v23; // x24
  bool v24; // cf
  NSDictionary *v25; // x24
  NSError *v26; // x22
  NSError *v27; // x0
  __int64 v28; // x0
  NSError *v29; // x23
  NSFileManager *v30; // x24
  void *v31; // x25
  unsigned __int8 v32; // w26
  void *v33; // x28
  NSFileManager *v34; // x25
  void *v35; // x26
  unsigned __int8 v36; // w27
  id v37; // x24
  NSFileManager *v38; // x24
  void *v39; // x25
  unsigned int v40; // w26
  NSFileManager *v41; // x24
  id v42; // x25
  __int64 v43; // x0
  NSURL *localURL; // x25
  NSDictionary *v45; // x27
  NSError *v46; // x22
  __int64 v47; // x22
  void *v48; // x25
  void *v49; // [xsp+10h] [xbp-D0h]
  void (__fastcall **v50)(id, id); // [xsp+18h] [xbp-C8h]
  _QWORD v51[5]; // [xsp+20h] [xbp-C0h] BYREF
  id v52; // [xsp+48h] [xbp-98h]
  id v53; // [xsp+50h] [xbp-90h] BYREF
  id v54; // [xsp+58h] [xbp-88h] BYREF
  unsigned __int8 v55; // [xsp+67h] [xbp-79h] BYREF
  NSErrorUserInfoKey v56; // [xsp+68h] [xbp-78h] BYREF
  const __CFString *v57; // [xsp+70h] [xbp-70h] BYREF
  NSErrorUserInfoKey v58; // [xsp+78h] [xbp-68h] BYREF
  const __CFString *v59; // [xsp+80h] [xbp-60h] BYREF

  v5 = (void (__fastcall **)(id, id))objc_retain(a4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_ubiquitousURLForFilename:", self->_ubiquitousFilename));
  if ( v6 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v8 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_localURL, "path"));
    v9 = objc_retainAutoreleasedReturnValue(-[NSFileManager enumeratorAtPath:](v7, "enumeratorAtPath:", v8));
    objc_release(v8);
    objc_release(v7);
    v10 = objc_retainAutoreleasedReturnValue(-[NSFileManager nextObject](v9, "nextObject"));
    if ( v10 )
    {
      v11 = v10;
      v49 = v6;
      v50 = v5;
      v12 = 0LL;
      do
      {
        v13 = objc_retainAutoreleasedReturnValue(-[NSURL path](self->_localURL, "path"));
        v14 = objc_retainAutoreleasedReturnValue(-[NSString stringByAppendingPathComponent:](v13, "stringByAppendingPathComponent:", v11));
        objc_release(v13);
        v55 = 0;
        v15 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
        v16 = -[NSFileManager fileExistsAtPath:isDirectory:](v15, "fileExistsAtPath:isDirectory:", v14, &v55);
        v17 = v55;
        objc_release(v15);
        if ( v16 )
          v18 = v17 == 0;
        else
          v18 = 0;
        if ( v18 )
        {
          v19 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
          v20 = objc_retainAutoreleasedReturnValue(-[NSFileManager attributesOfItemAtPath:error:](v19, "attributesOfItemAtPath:error:", v14, 0LL));
          objc_release(v19);
          v21 = objc_retainAutoreleasedReturnValue(-[NSDictionary objectForKeyedSubscript:](v20, "objectForKeyedSubscript:", NSFileSize));
          v22 = (unsigned __int64)objc_msgSend(v21, "integerValue");
          objc_release(v21);
          if ( v22 >= 0x2625A1 )
          {
            NSLog(&CFSTR("Pass can not be moved to ubiquity because the file %@ is too large (>2.5MB)").isa, v11);
            v58 = NSLocalizedDescriptionKey;
            v59 = CFSTR("UBIQUITY_RESOURCE_TOO_LARGE");
            v45 = objc_retainAutoreleasedReturnValue(
                    +[NSDictionary dictionaryWithObjects:forKeys:count:](
                      &OBJC_CLASS___NSDictionary,
                      "dictionaryWithObjects:forKeys:count:",
                      &v59,
                      &v58,
                      1LL));
            v46 = objc_retainAutoreleasedReturnValue(
                    +[NSError errorWithDomain:code:userInfo:](
                      &OBJC_CLASS___NSError,
                      "errorWithDomain:code:userInfo:",
                      PKPassKitErrorDomain,
                      1LL,
                      v45));
            objc_release(v45);
            v5 = v50;
            if ( v50 )
              v50[2](v50, v46);
            objc_release(v46);
            objc_release(v20);
            objc_release(v14);
            objc_release(v11);
            v6 = v49;
            goto LABEL_32;
          }
          v12 += v22;
          objc_release(v20);
        }
        objc_release(v14);
        v23 = objc_retainAutoreleasedReturnValue(-[NSFileManager nextObject](v9, "nextObject"));
        objc_release(v11);
        v11 = v23;
      }
      while ( v23 );
      v24 = v12 >= 0x989681;
      v6 = v49;
      v5 = v50;
      if ( !v24 )
        goto LABEL_18;
      NSLog(&CFSTR("Pass can not be moved to ubiquity because the total file size is too large (>10MB)").isa);
      v56 = NSLocalizedDescriptionKey;
      v57 = CFSTR("UBIQUITY_PASS_TOO_LARGE");
      v25 = objc_retainAutoreleasedReturnValue(
              +[NSDictionary dictionaryWithObjects:forKeys:count:](
                &OBJC_CLASS___NSDictionary,
                "dictionaryWithObjects:forKeys:count:",
                &v57,
                &v56,
                1LL));
      v26 = objc_retainAutoreleasedReturnValue(
              +[NSError errorWithDomain:code:userInfo:](
                &OBJC_CLASS___NSError,
                "errorWithDomain:code:userInfo:",
                PKPassKitErrorDomain,
                1LL,
                v25));
      objc_release(v25);
      if ( v50 )
        v50[2](v50, v26);
      v27 = v26;
      goto LABEL_31;
    }
LABEL_18:
    v55 = 0;
    v29 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)objc_opt_class(self), "_ubiquitousCardsURL"));
    v30 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v31 = objc_retainAutoreleasedReturnValue(-[NSError path](v29, "path"));
    v32 = -[NSFileManager fileExistsAtPath:isDirectory:](v30, "fileExistsAtPath:isDirectory:", v31, &v55);
    objc_release(v31);
    objc_release(v30);
    if ( (v32 & 1) == 0 )
    {
      v33 = v6;
      v34 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v35 = objc_retainAutoreleasedReturnValue(-[NSError path](v29, "path"));
      v54 = 0LL;
      v36 = -[NSFileManager createDirectoryAtPath:withIntermediateDirectories:attributes:error:](
              v34,
              "createDirectoryAtPath:withIntermediateDirectories:attributes:error:",
              v35,
              1LL,
              0LL,
              &v54);
      v37 = objc_retain(v54);
      objc_release(v35);
      objc_release(v34);
      if ( (v36 & 1) == 0 )
      {
        v47 = objc_opt_class(self);
        v48 = objc_retainAutoreleasedReturnValue(-[NSError path](v29, "path"));
        NSLog(&CFSTR("%@: Failed to create ubiquity folder %@").isa, v47, v48);
        objc_release(v48);
        if ( v5 )
          v5[2](v5, v37);
        v6 = v33;
        goto LABEL_30;
      }
      objc_release(v37);
      v6 = v33;
    }
    v38 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
    v39 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
    v40 = -[NSFileManager fileExistsAtPath:](v38, "fileExistsAtPath:", v39);
    objc_release(v39);
    objc_release(v38);
    if ( v40 )
    {
      v41 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v53 = 0LL;
      -[NSFileManager removeItemAtURL:error:](v41, "removeItemAtURL:error:", v6, &v53);
      v42 = objc_retain(v53);
      objc_release(v41);
      v43 = objc_opt_class(self);
      NSLog(&CFSTR("%@: Removed existing pass (Error: %@)").isa, v43, v42);
      objc_release(v42);
    }
    v37 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSFileCoordinator), "initWithFilePresenter:", self);
    localURL = self->_localURL;
    v51[0] = _NSConcreteStackBlock;
    v51[1] = 3254779904LL;
    v51[2] = sub_100005814;
    v51[3] = &unk_100008328;
    v51[4] = self;
    v52 = objc_retain(v5);
    objc_msgSend(
      v37,
      "coordinateWritingItemAtURL:options:writingItemAtURL:options:error:byAccessor:",
      localURL,
      2LL,
      v6,
      8LL,
      0LL,
      v51);
    objc_release(v52);
LABEL_30:
    objc_release(v37);
    v27 = v29;
LABEL_31:
    objc_release(v27);
    goto LABEL_32;
  }
  v28 = objc_opt_class(self);
  NSLog(&CFSTR("%@: Error - No ubiquity path found").isa, v28);
  v9 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
  -[NSFileManager removeItemAtURL:error:](v9, "removeItemAtURL:error:", self->_localURL, 0LL);
LABEL_32:
  objc_release(v9);
  objc_release(v6);
  objc_release(v5);
}