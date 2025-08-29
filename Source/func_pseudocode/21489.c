-[LSRConnection speechRecognizer:didRecognizePartialResult:]
void __cdecl -[LSRConnection speechRecognizer:didRecognizePartialResult:](LSRConnection *self, SEL a2, id a3, id a4)
{
  id v5; // x0
  dispatch_queue_s *v6; // x20
  id v7; // x19
  _QWORD v8[5]; // [xsp+0h] [xbp-40h] BYREF
  id v9; // [xsp+28h] [xbp-18h]

  v5 = objc_retain(a4);
  v6 = (dispatch_queue_s *)qword_100065418;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100035800;
  v8[3] = &unk_100059CE8;
  v8[4] = self;
  v9 = v5;
  v7 = objc_retain(v5);
  dispatch_async(v6, v8);
  objc_release(v9);
  objc_release(v7);
}