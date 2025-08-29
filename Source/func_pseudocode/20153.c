__ZN17Printd_Parameters16_set_CompressionEP8NSString
void __fastcall Printd_Parameters::_set_Compression(void **this, id a2)
{
  id v3; // x0
  void *v4; // x20
  id v5; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v3 = objc_retain(a2);
  v4 = *this;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_1000354F8;
  v6[3] = &unk_10009E528;
  v7 = v3;
  v5 = objc_retain(v3);
  objc_msgSend(v4, "_withGroupingBehavior:", v6);
  objc_release(v7);
  objc_release(v5);
}