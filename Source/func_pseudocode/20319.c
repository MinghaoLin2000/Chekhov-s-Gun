__Z24liteNotifyCheckForCancelP10lite_job_t
void __fastcall liteNotifyCheckForCancel(lite_job_t *a1)
{
  id v1; // x19
  _QWORD v2[4]; // [xsp+8h] [xbp-38h] BYREF
  id v3; // [xsp+28h] [xbp-18h]

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 3254779904LL;
  v2[2] = sub_10004159C;
  v2[3] = &unk_10009DFA8;
  v3 = objc_retain(a1);
  v1 = objc_retain(v3);
  objc_msgSend(v1, "_withActivity:", v2);
  objc_release(v3);
  objc_release(v1);
}