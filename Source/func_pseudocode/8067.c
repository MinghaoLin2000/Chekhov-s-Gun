-[AppPredictionIntentsHelperService createEventIntentWithStartDate:endDate:withReply:]
void __cdecl -[AppPredictionIntentsHelperService createEventIntentWithStartDate:endDate:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x20
  void (__fastcall **v9)(id, id, _QWORD); // x21
  EKEventStore *v10; // x23
  EKEvent *v11; // x22
  void *v12; // x24
  void *v13; // x23
  id v14; // x24
  os_log_s *v15; // x25
  int v16; // [xsp+0h] [xbp-70h] BYREF
  id v17; // [xsp+4h] [xbp-6Ch]
  __int16 v18; // [xsp+Ch] [xbp-64h]
  id v19; // [xsp+Eh] [xbp-62h]
  __int16 v20; // [xsp+16h] [xbp-5Ah]
  id v21; // [xsp+18h] [xbp-58h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, id, _QWORD))objc_retain(a5);
  v10 = objc_opt_new(&OBJC_CLASS___EKEventStore);
  v11 = objc_retainAutoreleasedReturnValue(+[EKEvent eventWithEventStore:](&OBJC_CLASS___EKEvent, "eventWithEventStore:", v10));
  objc_release(v10);
  -[EKEvent setStartDate:](v11, "setStartDate:", v7);
  -[EKEvent setEndDate:](v11, "setEndDate:", v8);
  v12 = (void *)objc_opt_new(&OBJC_CLASS___EKEventActionHandler);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "createEventIntentForEvent:withSuggestionsInfoUniqueKey:", v11, 0LL));
  objc_release(v12);
  v14 = objc_retainAutoreleasedReturnValue((id)INIntentWithTypedIntent(v13));
  v15 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v15, OS_LOG_TYPE_DEBUG) )
  {
    v16 = 138412802;
    v17 = v14;
    v18 = 2112;
    v19 = v7;
    v20 = 2112;
    v21 = v8;
    _os_log_debug_impl(
      (void *)&_mh_execute_header,
      v15,
      OS_LOG_TYPE_DEBUG,
      "Generated event intent: %@ for startDate: %@, endDate: %@",
      (uint8_t *)&v16,
      0x20u);
  }
  objc_release(v15);
  v9[2](v9, v14, 0LL);
  objc_release(v9);
  objc_release(v14);
  objc_release(v13);
  objc_release(v11);
  objc_release(v8);
  objc_release(v7);
}