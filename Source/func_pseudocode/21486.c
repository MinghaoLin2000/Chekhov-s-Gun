-[LSRConnection speechRecognizer:didProcessAudioDuration:]
void __cdecl -[LSRConnection speechRecognizer:didProcessAudioDuration:](LSRConnection *self, SEL a2, id a3, double a4)
{
  _QWORD v4[6]; // [xsp+0h] [xbp-30h] BYREF

  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_100034370;
  v4[3] = &unk_10005A228;
  v4[4] = self;
  *(double *)&v4[5] = a4;
  dispatch_async((dispatch_queue_t)qword_100065418, v4);
}