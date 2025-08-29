-[LSRConnection speechRecognizer:didFinishRecognitionWithError:]
void __cdecl -[LSRConnection speechRecognizer:didFinishRecognitionWithError:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x21
  id v7; // x19
  dispatch_queue_s *v8; // x22
  id v9; // x20
  id v10; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-58h] BYREF
  id v12; // [xsp+28h] [xbp-38h]
  LSRConnection *v13; // [xsp+30h] [xbp-30h]
  id v14; // [xsp+38h] [xbp-28h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = (dispatch_queue_s *)qword_100065418;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_1000344A4;
  block[3] = &unk_10005A1C8;
  v12 = v7;
  v13 = self;
  v14 = v6;
  v9 = objc_retain(v6);
  v10 = objc_retain(v7);
  dispatch_async(v8, block);
  objc_release(v14);
  objc_release(v12);
  objc_release(v9);
  objc_release(v10);
}