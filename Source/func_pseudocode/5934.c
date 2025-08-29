-[UniversalAccessHelper getAXKeyboardMacBuddyImageWithWidth:withReply:]
void __cdecl -[UniversalAccessHelper getAXKeyboardMacBuddyImageWithWidth:withReply:](
        UniversalAccessHelper *self,
        SEL a2,
        double a3,
        id a4)
{
  id v5; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-48h] BYREF
  id v7; // [xsp+28h] [xbp-28h]

  v5 = objc_retain(a4);
  if ( v5 )
  {
    if ( qword_1000086E0 != -1 )
      dispatch_once(&qword_1000086E0, &stru_1000040C8);
    if ( qword_1000086E8 )
    {
      if ( dlsym((void *)qword_1000086E8, "ACSHGetKeyboardImageForMacBuddyForWidth") )
      {
        v6[0] = _NSConcreteStackBlock;
        v6[1] = 3254779904LL;
        v6[2] = sub_100003764;
        v6[3] = &unk_100004078;
        v7 = objc_retain(v5);
        off_1000086D8(v6, a3);
        objc_release(v7);
        goto LABEL_14;
      }
      if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
        sub_1000038E4();
    }
    else if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    {
      sub_1000038A8();
    }
    (*((void (__fastcall **)(id, _QWORD))v5 + 2))(v5, 0LL);
    goto LABEL_14;
  }
  if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_ERROR) )
    sub_10000386C();
LABEL_14:
  objc_release(v5);
}