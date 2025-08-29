__Z21lite_print_redraw_pdfPU31objcproto20JobLikeThingProtocol8NSObject
__int64 __fastcall lite_print_redraw_pdf(void *a1)
{
  id v1; // x19
  _QWORD v3[4]; // [xsp+8h] [xbp-38h] BYREF
  id v4; // [xsp+28h] [xbp-18h]

  v3[0] = _NSConcreteStackBlock;
  v3[1] = 3254779904LL;
  v3[2] = sub_100025E70;
  v3[3] = &unk_10009DFA8;
  v4 = objc_retain(a1);
  v1 = objc_retain(v4);
  objc_msgSend(v1, "_withActivity:", v3);
  objc_release(v4);
  objc_release(v1);
  return 0LL;
}