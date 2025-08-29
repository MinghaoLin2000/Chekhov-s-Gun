-[AppPredictionIntentsHelperService indexingHashForIntent:withReply:]
void __cdecl -[AppPredictionIntentsHelperService indexingHashForIntent:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, void *, _QWORD); // x20
  os_log_s *v7; // x21
  void *v8; // x21
  os_log_s *v9; // x22
  int v10; // [xsp+0h] [xbp-40h] BYREF
  id v11; // [xsp+4h] [xbp-3Ch]
  __int16 v12; // [xsp+Ch] [xbp-34h]
  id v13; // [xsp+Eh] [xbp-32h]

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, void *, _QWORD))objc_retain(a4);
  v7 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v7, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 138412290;
    v11 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v7,
      OS_LOG_TYPE_DEFAULT,
      "Generated intent before indexingHash: %@",
      (uint8_t *)&v10,
      0xCu);
  }
  objc_release(v7);
  v8 = objc_msgSend(v5, "_indexingHash");
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEFAULT) )
  {
    v10 = 134218242;
    v11 = v8;
    v12 = 2112;
    v13 = v5;
    _os_log_impl(
      (void *)&_mh_execute_header,
      v9,
      OS_LOG_TYPE_DEFAULT,
      "Generated indexing hash: %llu for intent: %@",
      (uint8_t *)&v10,
      0x16u);
  }
  objc_release(v9);
  v6[2](v6, v8, 0LL);
  objc_release(v6);
  objc_release(v5);
}