-[SiriNCAlertViewController siriViewController:openURL:delaySessionEndForTTS:completion:]
void __cdecl -[SiriNCAlertViewController siriViewController:openURL:delaySessionEndForTTS:completion:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3,
        id a4,
        bool a5,
        id a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x24
  AFUISiriViewController *v13; // x22
  id v14; // x24
  id v15; // x20
  _QWORD v16[4]; // [xsp+0h] [xbp-B0h] BYREF
  id v17; // [xsp+20h] [xbp-90h]
  id v18; // [xsp+28h] [xbp-88h]
  _QWORD *v19; // [xsp+30h] [xbp-80h]
  id v20; // [xsp+38h] [xbp-78h] BYREF
  bool v21; // [xsp+40h] [xbp-70h]
  id location; // [xsp+48h] [xbp-68h] BYREF
  _QWORD v23[3]; // [xsp+50h] [xbp-60h] BYREF
  bool v24; // [xsp+68h] [xbp-48h]

  v10 = objc_retain(a3);
  v11 = objc_retain(a4);
  v12 = objc_retain(a6);
  v23[0] = 0LL;
  v23[1] = v23;
  v23[2] = 0x2020000000LL;
  v24 = a5;
  objc_initWeak(&location, self);
  v13 = objc_retainAutoreleasedReturnValue(-[SiriNCAlertViewController siriViewController](self, "siriViewController"));
  v16[0] = _NSConcreteStackBlock;
  v16[1] = 3254779904LL;
  v16[2] = sub_100010100;
  v16[3] = &unk_100020C30;
  objc_copyWeak(&v20, &location);
  v14 = objc_retain(v12);
  v18 = v14;
  v19 = v23;
  v21 = a5;
  v15 = objc_retain(v11);
  v17 = v15;
  -[AFUISiriViewController isSynthesisQueueEmpty:](v13, "isSynthesisQueueEmpty:", v16);
  objc_release(v13);
  objc_release(v17);
  objc_release(v18);
  objc_destroyWeak(&v20);
  objc_destroyWeak(&location);
  _Block_object_dispose(v23, 8);
  objc_release(v14);
  objc_release(v15);
  objc_release(v10);
}