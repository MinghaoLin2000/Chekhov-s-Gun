-[AppPredictionIntentsHelperService eligibleForWidgetsForIntent:withReply:]
void __cdecl -[AppPredictionIntentsHelperService eligibleForWidgetsForIntent:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, void *, _QWORD); // x20
  void *v7; // x22
  void *v8; // x21
  os_log_s *v9; // x22

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, void *, _QWORD))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "_codableDescription"));
  v8 = objc_msgSend(v7, "isEligibleForWidgets");
  objc_release(v7);
  v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEBUG) )
    sub_100006E80(v8, v5, v9);
  objc_release(v9);
  v6[2](v6, v8, 0LL);
  objc_release(v6);
  objc_release(v5);
}