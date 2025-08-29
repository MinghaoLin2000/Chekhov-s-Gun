-[AppPredictionIntentsHelperService createIntentWithIntentType:intentData:withReply:]
void __cdecl -[AppPredictionIntentsHelperService createIntentWithIntentType:intentData:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  void (__fastcall **v9)(id, id, _QWORD); // x21
  id v10; // x22
  os_log_s *v11; // x23
  int v12; // [xsp+0h] [xbp-60h] BYREF
  id v13; // [xsp+4h] [xbp-5Ch]
  __int16 v14; // [xsp+Ch] [xbp-54h]
  id v15; // [xsp+Eh] [xbp-52h]
  __int16 v16; // [xsp+16h] [xbp-4Ah]
  id v17; // [xsp+18h] [xbp-48h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, id, _QWORD))objc_retain(a5);
  v10 = objc_retainAutoreleasedReturnValue((id)INIntentCreate(v7, v8));
  v11 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v11, OS_LOG_TYPE_DEBUG) )
  {
    v12 = 138412802;
    v13 = v10;
    v14 = 2112;
    v15 = v7;
    v16 = 2112;
    v17 = v8;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v11,
      OS_LOG_TYPE_DEBUG,
      "Generated intent: %@ for intentType: %@, data: %@",
      (uint8_t *)&v12,
      0x20u);
  }
  objc_release(v11);
  v9[2](v9, v10, 0LL);
  objc_release(v9);
  objc_release(v10);
  objc_release(v8);
  objc_release(v7);
}