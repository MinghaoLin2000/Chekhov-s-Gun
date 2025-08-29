-[SiriNCAlertViewController dismissSiriViewController:dismissalOptions:delayForTTS:]
void __cdecl -[SiriNCAlertViewController dismissSiriViewController:dismissalOptions:delayForTTS:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5)
{
  _BOOL4 v5; // w22
  id v8; // x19
  id v9; // x20
  AFUISiriViewController *v10; // x21
  _QWORD v11[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  id v13; // [xsp+30h] [xbp-30h] BYREF
  id location; // [xsp+38h] [xbp-28h] BYREF

  v5 = a5;
  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  objc_initWeak(&location, self);
  if ( v5 )
  {
    v10 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
    v11[0] = _NSConcreteStackBlock;
    v11[1] = 3254779904LL;
    v11[2] = sub_10000F8F0;
    v11[3] = &unk_100020C00;
    objc_copyWeak(&v13, &location);
    v12 = objc_retain(v9);
    -[AFUISiriViewController isSynthesisQueueEmpty:](v10, "isSynthesisQueueEmpty:", v11);
    objc_release(v10);
    objc_release(v12);
    objc_destroyWeak(&v13);
  }
  else
  {
    -[SiriNCAlertViewController dismissController:dismissalOptions:](
      self,
      "dismissController:dismissalOptions:",
      self,
      v9);
  }
  objc_destroyWeak(&location);
  objc_release(v9);
  objc_release(v8);
}