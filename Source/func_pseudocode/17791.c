-[CoreMLModelSecurity secureModelWithContentsOfURL:sandboxExtensionToken:configuration:decryptCredential:withReply:]
void __cdecl -[CoreMLModelSecurity secureModelWithContentsOfURL:sandboxExtensionToken:configuration:decryptCredential:withReply:](
        CoreMLModelSecurity *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x19
  id v12; // x23
  id v13; // x20
  void (__fastcall **v14)(id, _QWORD, id); // x22
  id v15; // x21
  __int64 v16; // x26
  os_log_s *v17; // x24
  int v18; // w8
  MLModel *v19; // x25
  id v20; // x24
  id v21; // x28
  MLModelDescription *v22; // x27
  MLModelConfiguration *v23; // x23
  void *v24; // x28
  os_log_s *v25; // x27
  os_log_s *v26; // x26
  int *v27; // x0
  void *context; // [xsp+0h] [xbp-90h]
  void *contexta; // [xsp+0h] [xbp-90h]
  id v30; // [xsp+8h] [xbp-88h] BYREF
  uint8_t buf[4]; // [xsp+10h] [xbp-80h] BYREF
  id v32; // [xsp+14h] [xbp-7Ch]
  __int16 v33; // [xsp+1Ch] [xbp-74h]
  id v34; // [xsp+1Eh] [xbp-72h]
  __int16 v35; // [xsp+26h] [xbp-6Ah]
  id v36; // [xsp+28h] [xbp-68h]

  v11 = objc_retain(a3);
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v14 = (void (__fastcall **)(id, _QWORD, id))objc_retain(a7);
  context = objc_autoreleasePoolPush();
  v15 = objc_retainAutorelease(v12);
  v16 = sandbox_extension_consume(objc_msgSend(v15, "UTF8String"));
  if ( v16 < 0 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel", context));
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_INFO) )
    {
      v18 = *__error();
      *(_DWORD *)buf = 138412546;
      v32 = v15;
      v33 = 1024;
      LODWORD(v34) = v18;
      _os_log_impl(
        (void *)&_mh_execute_header,
        v17,
        OS_LOG_TYPE_INFO,
        "Sandbox extension(%@) consume failed (%d)",
        buf,
        0x12u);
    }
  }
  else
  {
    v17 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel", context));
    if ( os_log_type_enabled(v17, OS_LOG_TYPE_DEBUG) )
      sub_10000AFC4(v15, v17);
  }
  objc_release(v17);
  v30 = 0LL;
  v19 = objc_retainAutoreleasedReturnValue(
          +[MLModel modelWithContentsOfURL:configuration:error:](
            &OBJC_CLASS___MLModel,
            "modelWithContentsOfURL:configuration:error:",
            v11,
            v13,
            &v30));
  v20 = objc_retain(v30);
  -[CoreMLModelSecurity setDecryptedModel:](self, "setDecryptedModel:", v19);
  if ( !v19 || v20 )
  {
    v25 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
    if ( os_log_type_enabled(v25, OS_LOG_TYPE_ERROR) )
    {
      *(_DWORD *)buf = 138412802;
      v32 = v11;
      v33 = 2112;
      v34 = v13;
      v35 = 2112;
      v36 = v20;
      _os_log_error_impl(
        (void *)&_mh_execute_header,
        v25,
        OS_LOG_TYPE_ERROR,
        "Error loading model from %@ (%@): %@",
        buf,
        0x20u);
    }
    objc_release(v25);
    v14[2](v14, 0LL, v20);
  }
  else
  {
    v21 = objc_alloc((Class)&OBJC_CLASS___MLSecureModel);
    v22 = objc_retainAutoreleasedReturnValue(-[MLModel modelDescription](v19, "modelDescription"));
    v23 = objc_retainAutoreleasedReturnValue(-[MLModel configuration](v19, "configuration"));
    v24 = objc_msgSend(v21, "initWithDescription:configuration:", v22, v23);
    objc_release(v23);
    objc_release(v22);
    ((void (__fastcall **)(id, void *, id))v14)[2](v14, v24, 0LL);
    objc_release(v24);
  }
  if ( (v16 & 0x8000000000000000LL) == 0 && (unsigned int)sandbox_extension_release(v16) == -1 )
  {
    v26 = objc_retainAutoreleasedReturnValue(+[MLLogging coreChannel](&OBJC_CLASS___MLLogging, "coreChannel"));
    if ( os_log_type_enabled(v26, OS_LOG_TYPE_ERROR) )
    {
      v27 = __error();
      sub_10000AF74(v15, v27, buf, v26);
    }
    objc_release(v26);
  }
  objc_release(v19);
  objc_release(v20);
  objc_autoreleasePoolPop(contexta);
  objc_release(v14);
  objc_release(v13);
  objc_release(v15);
  objc_release(v11);
}