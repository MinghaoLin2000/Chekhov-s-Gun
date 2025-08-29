-[LSRConnection reportFailureWithError:]
void __cdecl -[LSRConnection reportFailureWithError:](LSRConnection *self, SEL a2, id a3)
{
  id v4; // x20
  id v5; // x21
  id v6; // x20
  id v7; // x19
  void **v8; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9; // [xsp+8h] [xbp-48h]
  __int64 (__fastcall *v10)(); // [xsp+10h] [xbp-40h]
  void *v11; // [xsp+18h] [xbp-38h]
  LSRConnection *v12; // [xsp+20h] [xbp-30h]
  id v13; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue((id)SFAnalyticsEventTypeGetName(105LL));
  v8 = _NSConcreteStackBlock;
  v9 = 3254779904LL;
  v10 = sub_10003AC54;
  v11 = &unk_100059D68;
  v12 = self;
  v13 = v4;
  v6 = objc_retain(v4);
  AnalyticsSendEventLazy(v5, &v8);
  objc_release(v5);
  v7 = objc_retainAutoreleasedReturnValue(-[LSRConnection _delegate](self, "_delegate", v8, v9, v10, v11, v12));
  objc_msgSend(v7, "localSpeechRecognitionDidFail:", v6);
  objc_release(v7);
  objc_release(v13);
  objc_release(v6);
}