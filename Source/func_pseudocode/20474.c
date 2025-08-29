-[Browse_CUPS start]
void __cdecl -[Browse_CUPS start](Browse_CUPS *self, SEL a2)
{
  os_log_s *v3; // x20
  OS_dispatch_queue *queue; // x20
  OS_dispatch_queue *v5; // x20
  void ***v6; // x21
  OS_dispatch_queue *v7; // x20
  void ***v8; // x21
  uint8_t *v9; // x22
  void **v10; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v11; // [xsp+8h] [xbp-98h]
  __int64 (__fastcall *v12)(); // [xsp+10h] [xbp-90h]
  void *v13; // [xsp+18h] [xbp-88h]
  id v14; // [xsp+20h] [xbp-80h] BYREF
  id location; // [xsp+28h] [xbp-78h] BYREF
  uint8_t buf[8]; // [xsp+30h] [xbp-70h] BYREF
  __int64 v17; // [xsp+38h] [xbp-68h]
  __int64 (__fastcall *v18)(); // [xsp+40h] [xbp-60h]
  void *v19; // [xsp+48h] [xbp-58h]
  id v20; // [xsp+50h] [xbp-50h]
  id v21; // [xsp+58h] [xbp-48h]

  v3 = (os_log_s *)objc_retainAutoreleasedReturnValue(_PKLogCategory(PKLogCategoryNetwork[0]));
  if ( os_log_type_enabled(v3, OS_LOG_TYPE_DEFAULT) )
  {
    *(_WORD *)buf = 0;
    _os_log_impl((void *)&_mh_execute_header, v3, OS_LOG_TYPE_DEFAULT, "Browse_CUPS: Started", buf, 2u);
  }
  objc_release(v3);
  objc_initWeak(&location, self);
  queue = self->_queue;
  v10 = _NSConcreteStackBlock;
  v11 = 3254779904LL;
  v12 = sub_10005F084;
  v13 = &unk_10009F8E8;
  objc_copyWeak(&v14, &location);
  v5 = objc_retain(queue);
  v6 = objc_retain(&v10);
  if ( qword_1000C3FA8 != -1 )
    dispatch_once(&qword_1000C3FA8, &stru_10009F988);
  *(_QWORD *)buf = _NSConcreteStackBlock;
  v17 = 3254779904LL;
  v18 = sub_10005F440;
  v19 = &unk_10009F9D8;
  v7 = objc_retain(v5);
  v20 = v7;
  v8 = objc_retain(v6);
  v21 = v8;
  v9 = objc_retainBlock(buf);
  if ( qword_1000C3FA0 )
    objc_msgSend((id)qword_1000C3FA0, "withPort:", v9, v10, v11, v12, v13);
  else
    (*((void (__fastcall **)(uint8_t *, _QWORD))v9 + 2))(v9, 0LL);
  objc_release(v9);
  objc_release(v21);
  objc_release(v20);
  objc_release(v8);
  objc_release(v7);
  objc_destroyWeak(&v14);
  objc_destroyWeak(&location);
}