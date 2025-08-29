__ZN17Printd_Parameters17_set_PrintQualityE13ipp_quality_e
void *__fastcall Printd_Parameters::_set_PrintQuality(void **this, ipp_quality_e a2)
{
  void *v2; // x0
  _QWORD v4[4]; // [xsp+8h] [xbp-28h] BYREF
  ipp_quality_e v5; // [xsp+28h] [xbp-8h]

  v2 = *this;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3221225472LL;
  v4[2] = sub_100033F18;
  v4[3] = &unk_10009E578;
  v5 = a2;
  return objc_msgSend(v2, "_withGroupingBehavior:", v4);
}