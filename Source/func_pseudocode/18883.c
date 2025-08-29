-[SiriNCService dismissAlertWithDismissalOptions:completion:]
void __cdecl -[SiriNCService dismissAlertWithDismissalOptions:completion:](SiriNCService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  _QWORD *v8; // x22
  id v9; // x23
  _QWORD *v10; // x22
  void *v11; // x23
  SiriNCClientProtocol *v12; // x21
  SiriNCAlertViewController *v13; // x26
  id v14; // x25
  id v15; // x26
  dispatch_queue_s *v16; // x0
  AFWatchdogTimer *v17; // x0
  AFWatchdogTimer *dismissalWatchdogTimer; // x8
  void **v19; // [xsp+0h] [xbp-170h] BYREF
  __int64 v20; // [xsp+8h] [xbp-168h]
  __int64 (__fastcall *v21)(); // [xsp+10h] [xbp-160h]
  void *v22; // [xsp+18h] [xbp-158h]
  id v23; // [xsp+20h] [xbp-150h]
  _QWORD v24[4]; // [xsp+28h] [xbp-148h] BYREF
  id v25; // [xsp+48h] [xbp-128h]
  id v26; // [xsp+50h] [xbp-120h] BYREF
  id location; // [xsp+58h] [xbp-118h] BYREF
  _QWORD v28[4]; // [xsp+60h] [xbp-110h] BYREF
  id v29; // [xsp+80h] [xbp-F0h]
  _QWORD v30[5]; // [xsp+88h] [xbp-E8h] BYREF
  id v31; // [xsp+B0h] [xbp-C0h]
  id v32; // [xsp+B8h] [xbp-B8h]
  _QWORD v33[6]; // [xsp+C0h] [xbp-B0h] BYREF
  __int64 v34; // [xsp+F0h] [xbp-80h] BYREF
  __int64 *v35; // [xsp+F8h] [xbp-78h]
  __int64 v36; // [xsp+100h] [xbp-70h]
  char v37; // [xsp+108h] [xbp-68h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v34 = 0LL;
  v35 = &v34;
  v36 = 0x2020000000LL;
  v37 = 0;
  v33[0] = _NSConcreteStackBlock;
  v33[1] = 3254779904LL;
  v33[2] = sub_1000081B0;
  v33[3] = &unk_1000208B0;
  v33[4] = self;
  v33[5] = &v34;
  -[SiriNCService _performThreadSafeAlertStateBlock:](self, "_performThreadSafeAlertStateBlock:", v33);
  if ( *((_BYTE *)v35 + 24) )
  {
    v30[0] = _NSConcreteStackBlock;
    v30[1] = 3254779904LL;
    v30[2] = sub_1000082C0;
    v30[3] = &unk_1000208E0;
    v30[4] = self;
    v32 = objc_retain(v7);
    v31 = objc_retain(v6);
    v8 = objc_retainBlock(v30);
    v9 = objc_alloc((Class)&OBJC_CLASS___AFSafetyBlock);
    v28[0] = _NSConcreteStackBlock;
    v28[1] = 3254779904LL;
    v28[2] = sub_1000084EC;
    v28[3] = &unk_100020940;
    v10 = objc_retain(v8);
    v29 = v10;
    v11 = objc_msgSend(v9, "initWithBlock:", v28);
    if ( -[SiriNCService alertWasDismissed](self, "alertWasDismissed") )
    {
      objc_msgSend(v11, "invokeWithSignal:", 0LL);
    }
    else if ( -[SiriNCService windowedPosition](self, "windowedPosition") )
    {
      v12 = objc_retainAutoreleasedReturnValue(-[SiriNCService ncClientObjectProxy](self, "ncClientObjectProxy"));
      -[SiriNCClientProtocol dismissSiriNCAlertViewControllerWithCompletion:](
        v12,
        "dismissSiriNCAlertViewControllerWithCompletion:",
        v10);
      objc_release(v12);
    }
    else
    {
      objc_initWeak(&location, self);
      v13 = objc_retainAutoreleasedReturnValue(-[SiriNCService alertViewController](self, "alertViewController"));
      v24[0] = _NSConcreteStackBlock;
      v24[1] = 3254779904LL;
      v24[2] = sub_1000085A0;
      v24[3] = &unk_100020970;
      objc_copyWeak(&v26, &location);
      v14 = objc_retain(v11);
      v25 = v14;
      -[SiriNCAlertViewController animateDismissalForTearDownWithCompletion:](
        v13,
        "animateDismissalForTearDownWithCompletion:",
        v24);
      objc_release(v13);
      v15 = objc_alloc((Class)&OBJC_CLASS___AFWatchdogTimer);
      v16 = objc_retain(&_dispatch_main_q);
      v19 = _NSConcreteStackBlock;
      v20 = 3254779904LL;
      v21 = sub_10000879C;
      v22 = &unk_100020670;
      v23 = objc_retain(v14);
      v17 = (AFWatchdogTimer *)objc_msgSend(
                                 v15,
                                 "initWithTimeoutInterval:onQueue:timeoutHandler:",
                                 &_dispatch_main_q,
                                 &v19,
                                 10.0);
      dismissalWatchdogTimer = self->_dismissalWatchdogTimer;
      self->_dismissalWatchdogTimer = v17;
      objc_release(dismissalWatchdogTimer);
      objc_release(&_dispatch_main_q);
      -[AFWatchdogTimer start](self->_dismissalWatchdogTimer, "start", v19, v20, v21, v22);
      objc_release(v23);
      objc_release(v25);
      objc_destroyWeak(&v26);
      objc_destroyWeak(&location);
    }
    objc_release(v11);
    objc_release(v29);
    objc_release(v10);
    objc_release(v31);
    objc_release(v32);
  }
  _Block_object_dispose(&v34, 8);
  objc_release(v7);
  objc_release(v6);
}