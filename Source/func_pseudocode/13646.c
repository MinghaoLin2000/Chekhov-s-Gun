-[IWXPCPackageConverter consumeSandboxInputURLExtension:outputURLExtension:inputSandBoxToken:outputSandBoxToken:]
void __cdecl -[IWXPCPackageConverter consumeSandboxInputURLExtension:outputURLExtension:inputSandBoxToken:outputSandBoxToken:](
        IWXPCPackageConverter *self,
        SEL a2,
        id a3,
        id a4,
        signed __int64 *a5,
        signed __int64 *a6)
{
  id v9; // x20
  id v10; // x21
  id v11; // x23
  signed __int64 v12; // x24
  void *v13; // x25
  id v14; // x22
  signed __int64 v15; // x23
  void *v16; // x24

  v9 = objc_retain(a3);
  v10 = objc_retain(a4);
  if ( objc_msgSend(v9, "length") )
  {
    v11 = objc_retainAutorelease(v9);
    v12 = sandbox_extension_consume(objc_msgSend(v11, "bytes"));
    if ( v12 < 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DF8B0);
      v13 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_1001686C0(v13, v11);
    }
    *a5 = v12;
  }
  if ( objc_msgSend(v10, "length") )
  {
    v14 = objc_retainAutorelease(v10);
    v15 = sandbox_extension_consume(objc_msgSend(v14, "bytes"));
    if ( v15 < 0 )
    {
      if ( TSUDefaultCat_init_token != -1 )
        dispatch_once(&TSUDefaultCat_init_token, &stru_1001DF8D0);
      v16 = TSUDefaultCat_log_t;
      if ( os_log_type_enabled((os_log_t)TSUDefaultCat_log_t, OS_LOG_TYPE_ERROR) )
        sub_10016861C(v16, v14);
    }
    *a6 = v15;
  }
  objc_release(v10);
  objc_release(v9);
}