__ZN17Printd_Parameters15_set_FinishingsEP7NSArrayIP8NSNumberE
void __fastcall Printd_Parameters::_set_Finishings(void **a1, id a2)
{
  id v3; // x0
  void *v4; // x20
  id v5; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v3 = objc_retain(a2);
  v4 = *a1;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_100033B80;
  v6[3] = &unk_10009E528;
  v7 = v3;
  v5 = objc_retain(v3);
  objc_msgSend(v4, "_withGroupingBehavior:", v6);
  objc_release(v7);
  objc_release(v5);
}