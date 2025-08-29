-[lite_job_t _setupCancelSource0]
void __cdecl -[lite_job_t _setupCancelSource0](lite_job_t *self, SEL a2)
{
  dispatch_source_t v3; // x21
  dispatch_source_s *v4; // x22
  dispatch_source_s *v5; // x23
  _QWORD *v6; // x0
  id zis_canceled; // x8
  dispatch_source_s *v8; // x24
  _QWORD *v9; // x0
  id zset_cancel_flag; // x8
  dispatch_source_s *v11; // x24
  _QWORD *v12; // x0
  id zclear_cancel_flag; // x8
  dispatch_source_s *v14; // x24
  _QWORD *v15; // x0
  id zmake_progress; // x8
  OS_dispatch_source *cancel_source; // x25
  dispatch_source_s *v18; // x24
  _QWORD v19[4]; // [xsp+0h] [xbp-140h] BYREF
  id v20; // [xsp+20h] [xbp-120h]
  _QWORD v21[4]; // [xsp+28h] [xbp-118h] BYREF
  id v22; // [xsp+48h] [xbp-F8h]
  id v23; // [xsp+50h] [xbp-F0h] BYREF
  _QWORD v24[4]; // [xsp+58h] [xbp-E8h] BYREF
  id v25; // [xsp+78h] [xbp-C8h]
  id v26; // [xsp+80h] [xbp-C0h] BYREF
  _QWORD v27[4]; // [xsp+88h] [xbp-B8h] BYREF
  id v28; // [xsp+A8h] [xbp-98h]
  id v29; // [xsp+B0h] [xbp-90h] BYREF
  _QWORD handler[4]; // [xsp+B8h] [xbp-88h] BYREF
  dispatch_source_s *v31; // [xsp+D8h] [xbp-68h]
  id v32; // [xsp+E0h] [xbp-60h] BYREF
  id location; // [xsp+E8h] [xbp-58h] BYREF

  v3 = dispatch_source_create((dispatch_source_type_t)&_dispatch_source_type_data_add, 0LL, 0LL, &_dispatch_main_q);
  objc_initWeak(&location, self);
  handler[0] = _NSConcreteStackBlock;
  handler[1] = 3254779904LL;
  handler[2] = sub_10001BA80;
  handler[3] = &unk_10009C2C8;
  objc_copyWeak(&v32, &location);
  v4 = objc_retain(v3);
  v31 = v4;
  dispatch_source_set_event_handler(v4, handler);
  v27[0] = _NSConcreteStackBlock;
  v27[1] = 3254779904LL;
  v27[2] = sub_10001BAE8;
  v27[3] = &unk_10009C2F8;
  objc_copyWeak(&v29, &location);
  v5 = objc_retain(v4);
  v28 = v5;
  v6 = objc_retainBlock(v27);
  zis_canceled = self->zis_canceled;
  self->zis_canceled = v6;
  objc_release(zis_canceled);
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_10001BB40;
  v24[3] = &unk_10009C2C8;
  objc_copyWeak(&v26, &location);
  v8 = objc_retain(v5);
  v25 = v8;
  v9 = objc_retainBlock(v24);
  zset_cancel_flag = self->zset_cancel_flag;
  self->zset_cancel_flag = v9;
  objc_release(zset_cancel_flag);
  v21[0] = _NSConcreteStackBlock;
  v21[1] = 3254779904LL;
  v21[2] = sub_10001BB9C;
  v21[3] = &unk_10009C2C8;
  objc_copyWeak(&v23, &location);
  v11 = objc_retain(v8);
  v22 = v11;
  v12 = objc_retainBlock(v21);
  zclear_cancel_flag = self->zclear_cancel_flag;
  self->zclear_cancel_flag = v12;
  objc_release(zclear_cancel_flag);
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_10001BBF8;
  v19[3] = &unk_10009C328;
  v14 = objc_retain(v11);
  v20 = v14;
  v15 = objc_retainBlock(v19);
  zmake_progress = self->zmake_progress;
  self->zmake_progress = v15;
  objc_release(zmake_progress);
  cancel_source = self->_cancel_source;
  self->_cancel_source = (OS_dispatch_source *)v14;
  v18 = objc_retain(v14);
  objc_release(cancel_source);
  dispatch_resume((dispatch_object_t)self->_cancel_source);
  objc_release(v20);
  objc_release(v22);
  objc_destroyWeak(&v23);
  objc_release(v25);
  objc_destroyWeak(&v26);
  objc_release(v28);
  objc_destroyWeak(&v29);
  objc_release(v31);
  objc_release(v18);
  objc_destroyWeak(&v32);
  objc_destroyWeak(&location);
}