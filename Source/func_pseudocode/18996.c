-[SiriNCAlertViewController animateDismissalForTearDownWithCompletion:]
void __cdecl -[SiriNCAlertViewController animateDismissalForTearDownWithCompletion:](
        SiriNCAlertViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x20
  void *v5; // x19
  id v6; // x20
  _QWORD v7[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(-[AFUISiriViewController view](self->_siriViewController, "view"));
  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_10000E9F4;
  v7[3] = &unk_100020BD0;
  v8 = v4;
  v6 = objc_retain(v4);
  objc_msgSend(v5, "animateDismissalForTearDownWithCompletion:", v7);
  objc_release(v5);
  objc_release(v8);
  objc_release(v6);
}