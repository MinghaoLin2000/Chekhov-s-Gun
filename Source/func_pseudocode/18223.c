-[OSLogService getNextOSLogEntryWithReply:]
void __cdecl -[OSLogService getNextOSLogEntryWithReply:](OSLogService *self, SEL a2, id a3)
{
  id v4; // x0
  OS_dispatch_queue *serial_queue; // x20
  id v6; // x19
  _QWORD block[5]; // [xsp+8h] [xbp-78h] BYREF
  id v8; // [xsp+30h] [xbp-50h]
  __int64 *v9; // [xsp+38h] [xbp-48h]
  __int64 v10; // [xsp+40h] [xbp-40h] BYREF
  __int64 *v11; // [xsp+48h] [xbp-38h]
  __int64 v12; // [xsp+50h] [xbp-30h]
  __int64 (__fastcall *v13)(); // [xsp+58h] [xbp-28h]
  __int64 (__fastcall *v14)(); // [xsp+60h] [xbp-20h]
  id v15; // [xsp+68h] [xbp-18h]

  v4 = objc_retain(a3);
  v10 = 0LL;
  v11 = &v10;
  v12 = 0x3032000000LL;
  v13 = sub_100001954;
  v14 = sub_100001964;
  v15 = 0LL;
  serial_queue = self->_serial_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_10000196C;
  block[3] = &unk_1000042F0;
  v9 = &v10;
  block[4] = self;
  v6 = objc_retain(v4);
  v8 = v6;
  dispatch_sync((dispatch_queue_t)serial_queue, block);
  (*((void (__fastcall **)(id, __int64))v6 + 2))(v6, v11[5]);
  objc_release(v8);
  _Block_object_dispose(&v10, 8);
  objc_release(v15);
  objc_release(v6);
}