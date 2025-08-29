-[PAXPCDispatch _handleSetPassUbiquityMessageWithUbiquity:peer:]
void __cdecl -[PAXPCDispatch _handleSetPassUbiquityMessageWithUbiquity:peer:](
        PAXPCDispatch *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x19
  id v7; // x20
  os_log_s *v8; // x22
  const void *data; // x0
  NSData *v10; // x22
  id v11; // x23
  id v12; // x25
  void *v13; // x24
  __int64 v14; // x0
  id v15; // x26
  __int64 v16; // x0
  NSFileManager *v17; // x27
  void *v18; // x28
  void *v19; // x26
  const char *string; // x26
  PAUbiquityController *v21; // x27
  void *v22; // x28
  NSString *v23; // x26
  PAUbiquityController *v24; // x27
  _BOOL8 v25; // x26
  _BOOL8 v26; // x2
  void *v27; // [xsp+18h] [xbp-A8h]
  _QWORD v28[5]; // [xsp+20h] [xbp-A0h] BYREF
  id v29; // [xsp+48h] [xbp-78h]
  id v30; // [xsp+50h] [xbp-70h] BYREF
  id v31; // [xsp+58h] [xbp-68h] BYREF
  uint8_t buf[8]; // [xsp+60h] [xbp-60h] BYREF

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v8,
      OS_LOG_TYPE_DEFAULT,
      "[PassKitUIXPCService] sending pass to ubiquity",
      buf,
      2u);
  }
  objc_release(v8);
  *(_QWORD *)buf = 0LL;
  data = xpc_dictionary_get_data(v6, "passData", (size_t *)buf);
  v10 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", data, *(_QWORD *)buf));
  v31 = 0LL;
  v11 = objc_retainAutoreleasedReturnValue(-[PAXPCDispatch _uniqueTemporaryFolderWithError:](self, "_uniqueTemporaryFolderWithError:", &v31));
  v12 = objc_retain(v31);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "URLByAppendingPathComponent:", CFSTR("pass.pkpass")));
  -[NSData writeToURL:atomically:](v10, "writeToURL:atomically:", v13, 1LL);
  if ( v12 )
  {
    v14 = objc_opt_class(self);
    NSLog(&CFSTR("%@: _handleSetPassUbiquityMessage Error creating archive from pass data - %@").isa, v14, v12);
    -[PAXPCDispatch _replyToSetUbiquityRequest:withError:](self, "_replyToSetUbiquityRequest:withError:", v6, v12);
  }
  else
  {
    v30 = 0LL;
    v15 = objc_retainAutoreleasedReturnValue(
            -[PAXPCDispatch _unarchivedFilesWithArchiveAtURL:error:](
              self,
              "_unarchivedFilesWithArchiveAtURL:error:",
              v13,
              &v30));
    v12 = objc_retain(v30);
    if ( v12 )
    {
      v16 = objc_opt_class(self);
      NSLog(&CFSTR("%@: _handleSetPassUbiquityMessage Error unarchiving pass data - %@").isa, v16, v12);
      -[PAXPCDispatch _replyToSetUbiquityRequest:withError:](self, "_replyToSetUbiquityRequest:withError:", v6, v12);
    }
    else
    {
      v17 = objc_retainAutoreleasedReturnValue(+[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"));
      v18 = objc_retainAutoreleasedReturnValue(objc_msgSend(v13, "path"));
      v27 = v15;
      v19 = objc_retainAutoreleasedReturnValue(objc_msgSend(v18, "stringByDeletingLastPathComponent"));
      -[NSFileManager removeItemAtPath:error:](v17, "removeItemAtPath:error:", v19, 0LL);
      objc_release(v19);
      objc_release(v18);
      objc_release(v17);
      string = xpc_dictionary_get_string(v6, "ubiquitousFilename");
      v21 = objc_alloc(&OBJC_CLASS___PAUbiquityController);
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v27, "path"));
      v23 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string));
      v24 = -[PAUbiquityController initWithPassAtPath:ubiquitousFilename:](
              v21,
              "initWithPassAtPath:ubiquitousFilename:",
              v22,
              v23);
      objc_release(v23);
      objc_release(v22);
      v25 = xpc_dictionary_get_bool(v6, "ubiquitous");
      v28[0] = _NSConcreteStackBlock;
      v28[1] = 3254779904LL;
      v28[2] = sub_100004388;
      v28[3] = &unk_1000082A8;
      v28[4] = self;
      v29 = objc_retain(v6);
      v26 = v25;
      v15 = v27;
      -[PAUbiquityController setUbiquitous:withCompletionBlock:](v24, "setUbiquitous:withCompletionBlock:", v26, v28);
      objc_release(v29);
      objc_release(v24);
    }
    objc_release(v15);
  }
  objc_release(v13);
  objc_release(v11);
  objc_release(v12);
  objc_release(v10);
  objc_release(v7);
  objc_release(v6);
}