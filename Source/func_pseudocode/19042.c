-[SiriNCAlertViewController _ttsQueueDidEmpty:]
void __cdecl -[SiriNCAlertViewController _ttsQueueDidEmpty:](SiriNCAlertViewController *self, SEL a2, id a3)
{
  void *v4; // x20
  double v5; // d0
  dispatch_time_t v6; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF

  v4 = objc_retainAutoreleasedReturnValue(
         +[SRFUserDefaultsController sharedUserDefaultsController](
           &OBJC_CLASS___SRFUserDefaultsController,
           "sharedUserDefaultsController",
           a3));
  objc_msgSend(v4, "autoDismissTextToSpeechTimeout");
  v6 = dispatch_time(0LL, (__int64)(v5 * 1000000000.0));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000115F0;
  block[3] = &unk_100020670;
  block[4] = self;
  dispatch_after(v6, &_dispatch_main_q, block);
  objc_release(v4);
}