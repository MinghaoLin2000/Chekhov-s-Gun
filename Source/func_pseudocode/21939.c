-[PAXPCDispatch _handleSetPassUbiquityMessageWithCloudKit:peer:]
void __cdecl -[PAXPCDispatch _handleSetPassUbiquityMessageWithCloudKit:peer:](
        PAXPCDispatch *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x20
  os_log_s *v6; // x21
  const void *data; // x0
  NSData *v8; // x21
  PKPassLibrary *v9; // x22
  NSOrderedSet *v10; // x23
  id v11; // x19
  _QWORD v12[5]; // [xsp+0h] [xbp-70h] BYREF
  id v13; // [xsp+28h] [xbp-48h]
  uint8_t buf[8]; // [xsp+30h] [xbp-40h] BYREF

  v5 = objc_retain(a3);
  v6 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
  if ( os_log_type_enabled(v6, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v6,
      OS_LOG_TYPE_DEFAULT,
      "[PassKitUIXPCService] sending pass to pass library",
      buf,
      2u);
  }
  objc_release(v6);
  *(_QWORD *)buf = 0LL;
  data = xpc_dictionary_get_data(v5, "passData", (size_t *)buf);
  v8 = objc_retainAutoreleasedReturnValue(+[NSData dataWithBytes:length:](&OBJC_CLASS___NSData, "dataWithBytes:length:", data, *(_QWORD *)buf));
  v9 = objc_retainAutoreleasedReturnValue(+[PKPassLibrary sharedInstance](&OBJC_CLASS___PKPassLibrary, "sharedInstance"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSOrderedSet orderedSetWithObject:](&OBJC_CLASS___NSOrderedSet, "orderedSetWithObject:", v8));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100003F28;
  v12[3] = &unk_100008278;
  v12[4] = self;
  v13 = v5;
  v11 = objc_retain(v5);
  -[PKPassLibrary addPassesWithData:withCompletionHandler:](v9, "addPassesWithData:withCompletionHandler:", v10, v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v13);
  objc_release(v11);
  objc_release(v8);
}