__ZN17Printd_Parameters25_set_OrientationRequestedE12ipp_orient_e
void *__fastcall Printd_Parameters::_set_OrientationRequested(void **this, ipp_orient_e a2)
{
  void *v2; // x0
  _QWORD v4[4]; // [xsp+8h] [xbp-28h] BYREF
  ipp_orient_e v5; // [xsp+28h] [xbp-8h]

  v2 = *this;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3221225472LL;
  v4[2] = sub_100033E8C;
  v4[3] = &unk_10009E578;
  v5 = a2;
  return objc_msgSend(v2, "_withGroupingBehavior:", v4);
}