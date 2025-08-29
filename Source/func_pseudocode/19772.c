+[lite_printer_t gatherLogInfo]
id __cdecl +[lite_printer_t gatherLogInfo](id a1, SEL a2)
{
  NSMutableArray *v2; // x0
  void *v3; // x20
  NSMutableArray *v4; // x19
  _QWORD v6[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]
  __int64 vars8; // [xsp+48h] [xbp+8h]

  liteLockPrinters();
  v2 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v3 = (void *)qword_1000C3EA0;
  v6[0] = _NSConcreteStackBlock;
  v6[1] = 3254779904LL;
  v6[2] = sub_10000FF04;
  v6[3] = &unk_1000914A0;
  v4 = objc_retain(v2);
  v7 = v4;
  objc_msgSend(v3, "enumerateKeysAndObjectsUsingBlock:", v6);
  pthread_mutex_unlock(&stru_1000C0FD0);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}