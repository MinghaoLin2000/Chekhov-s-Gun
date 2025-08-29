-[SiriNCService didFinishDraggingWindow]
void __cdecl -[SiriNCService didFinishDraggingWindow](SiriNCService *self, SEL a2)
{
  _QWORD v2[5]; // [xsp+8h] [xbp-28h] BYREF

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_100006CD8;
  v2[3] = &unk_100020670;
  v2[4] = self;
  SiriUIInvokeOnMainQueue(v2, a2);
}