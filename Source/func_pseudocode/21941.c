-[PAXPCDispatch _handlePassbookUbiquitousContainerExistsMessage:peer:]
void __cdecl -[PAXPCDispatch _handlePassbookUbiquitousContainerExistsMessage:peer:](
        PAXPCDispatch *self,
        SEL a2,
        id a3,
        id a4)
{
  id v4; // x19
  id v5; // x20
  NSNumber *v6; // x22
  void *v7; // x23
  void *v8; // x21
  os_log_s *v9; // x23
  NSNumber *v10; // x24
  xpc_object_t reply; // x20
  _xpc_connection_s *v12; // x21
  int v13; // [xsp+0h] [xbp-50h] BYREF
  NSNumber *v14; // [xsp+4h] [xbp-4Ch]

  v4 = objc_retain(a3);
  if ( (unsigned int)PKCloudKitPassSyncEnabled() )
  {
    v5 = objc_alloc_init((Class)&OBJC_CLASS___ACAccountStore);
    v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "aa_primaryAppleAccount"));
    v7 = objc_retainAutoreleasedReturnValue(-[NSNumber enabledDataclasses](v6, "enabledDataclasses"));
    v8 = objc_msgSend(v7, "containsObject:", kAccountDataclassShoebox);
    objc_release(v7);
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
    {
      v10 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v8));
      v13 = 138543362;
      v14 = v10;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v9,
        OS_LOG_TYPE_DEFAULT,
        "[PassKitUIXPCService] wallet data class enabled: %{public}@",
        (uint8_t *)&v13,
        0xCu);
      objc_release(v10);
    }
    objc_release(v9);
    goto LABEL_7;
  }
  v8 = (void *)+[PAUbiquityController passbookUbiquityContainerExists](
                 &OBJC_CLASS___PAUbiquityController,
                 "passbookUbiquityContainerExists");
  v5 = objc_retainAutoreleasedReturnValue((id)PKLogFacilityTypeGetObject(0LL));
  if ( os_log_type_enabled((os_log_t)v5, OS_LOG_TYPE_DEFAULT) )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", v8));
    v13 = 138543362;
    v14 = v6;
    _os_log_impl(
      (void *)&_mh_execute_header,
      (os_log_t)v5,
      OS_LOG_TYPE_DEFAULT,
      "[PassKitUIXPCService] passbook ubiquity container exists: %{public}@",
      (uint8_t *)&v13,
      0xCu);
LABEL_7:
    objc_release(v6);
  }
  objc_release(v5);
  reply = xpc_dictionary_create_reply(v4);
  xpc_dictionary_set_bool(reply, "containerExists", (bool)v8);
  v12 = objc_retainAutoreleasedReturnValue(xpc_dictionary_get_remote_connection(v4));
  objc_release(v4);
  xpc_connection_send_message(v12, reply);
  objc_release(v12);
  objc_release(reply);
}