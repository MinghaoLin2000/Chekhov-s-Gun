-[AppPredictionIntentsHelperService titleForIntentNoLocalization:withReply:]
void __cdecl -[AppPredictionIntentsHelperService titleForIntentNoLocalization:withReply:](
        AppPredictionIntentsHelperService *self,
        SEL a2,
        id a3,
        id a4)
{
  id v5; // x19
  void (__fastcall **v6)(id, void *, _QWORD); // x20
  void *v7; // x21
  os_log_s *v8; // x22

  v5 = objc_retain(a3);
  v6 = (void (__fastcall **)(id, void *, _QWORD))objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "_titleWithLocalizer:fromBundleURL:", 0LL, 0LL));
  v8 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100005E98());
  if ( os_log_type_enabled(v8, OS_LOG_TYPE_DEBUG) )
    sub_100006DB0(v7, v5, v8);
  objc_release(v8);
  v6[2](v6, v7, 0LL);
  objc_release(v6);
  objc_release(v7);
  objc_release(v5);
}