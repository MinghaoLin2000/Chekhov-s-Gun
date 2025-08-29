-[PAXPCDispatch _handleUbiquitousPassHashForFilenameMessage:peer:]
void __cdecl -[PAXPCDispatch _handleUbiquitousPassHashForFilenameMessage:peer:](
        PAXPCDispatch *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  int v5; // w20
  const char *string; // x2
  NSString *v7; // x21
  NSURL *v8; // x20
  NSURL *v9; // x21
  NSString *v10; // x22
  PKPassLibrary *v11; // x23
  id v12; // x21
  os_log_s *v13; // x23
  NSString *v14; // x22
  xpc_object_t reply; // x20
  id v16; // x21
  _xpc_connection_s *v17; // x22
  int v18; // [xsp+0h] [xbp-50h] BYREF
  id v19; // [xsp+4h] [xbp-4Ch]

  v4 = objc_retain(a3);
  v5 = PKCloudKitPassSyncEnabled();
  string = xpc_dictionary_get_string(v4, "filename");
  if ( v5 )
  {
    v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string));
    v8 = objc_retainAutoreleasedReturnValue(+[NSURL URLWithString:](&OBJC_CLASS___NSURL, "URLWithString:", v7));
    objc_release(v7);
    v9 = objc_retainAutoreleasedReturnValue(-[NSURL URLByDeletingPathExtension](v8, "URLByDeletingPathExtension"));
    v10 = objc_retainAutoreleasedReturnValue(-[NSURL absoluteString](v9, "absoluteString"));
    objc_release(v9);
    v11 = objc_retainAutoreleasedReturnValue(+[PKPassLibrary sharedInstance](&OBJC_CLASS___PKPassLibrary, "sharedInstance"));
    v12 = objc_retainAutoreleasedReturnValue(-[PKPassLibrary manifestHashForPassWithUniqueID:](v11, "manifestHashForPassWithUniqueID:", v10));
    objc_release(v11);
    v13 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
    if ( os_log_type_enabled(v13, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = 138543362;
      v19 = v12;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v13,
        OS_LOG_TYPE_DEFAULT,
        "[PassKitUIXPCService] pass hash from library: %{public}@",
        (uint8_t *)&v18,
        0xCu);
    }
    objc_release(v13);
    objc_release(v10);
  }
  else
  {
    v14 = objc_retainAutoreleasedReturnValue(+[NSString stringWithUTF8String:](&OBJC_CLASS___NSString, "stringWithUTF8String:", string));
    v12 = objc_retainAutoreleasedReturnValue(
            +[PAUbiquityController ubiquitousPassHashForFilename:](
              &OBJC_CLASS___PAUbiquityController,
              "ubiquitousPassHashForFilename:",
              v14));
    objc_release(v14);
    v8 = (NSURL *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
    if ( os_log_type_enabled((os_log_t)v8, OS_LOG_TYPE_DEFAULT) )
    {
      v18 = 138543362;
      v19 = v12;
      _os_log_impl(
        (void *)&_mh_execute_header,
        (os_log_t)v8,
        OS_LOG_TYPE_DEFAULT,
        "[PassKitUIXPCService] pass hash from ubiquity controller: %{public}@",
        (uint8_t *)&v18,
        0xCu);
    }
  }
  objc_release(v8);
  reply = xpc_dictionary_create_reply(v4);
  v16 = objc_retainAutorelease(v12);
  xpc_dictionary_set_data(reply, "hash", objc_msgSend(v16, "bytes"), (size_t)objc_msgSend(v16, "length"));
  v17 = objc_retainAutoreleasedReturnValue(xpc_dictionary_get_remote_connection(v4));
  xpc_connection_send_message(v17, reply);
  objc_release(v17);
  objc_release(reply);
  objc_release(v16);
  objc_release(v4);
}