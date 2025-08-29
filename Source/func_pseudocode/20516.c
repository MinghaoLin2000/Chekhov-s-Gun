-[BrowseService _setupBrowser:]
void __cdecl -[BrowseService _setupBrowser:](BrowseService *self, SEL a2, id a3)
{
  id v4; // x19
  __int64 v5; // x1
  NSString *v6; // x21
  OS_dispatch_queue *v7; // x22
  OS_dispatch_queue *v8; // x25
  NSString *v9; // x26
  OS_dispatch_queue *v10; // x25
  NSString *v11; // x27
  OS_dispatch_queue *v12; // x25
  NSString *v13; // x27
  dispatch_queue_s *queue; // x22
  id v15; // x19
  NSString *v16; // x21
  _QWORD block[5]; // [xsp+10h] [xbp-150h] BYREF
  id v18; // [xsp+38h] [xbp-128h]
  id v19; // [xsp+40h] [xbp-120h]
  _QWORD v20[4]; // [xsp+48h] [xbp-118h] BYREF
  id v21; // [xsp+68h] [xbp-F8h]
  id v22; // [xsp+70h] [xbp-F0h]
  id v23; // [xsp+78h] [xbp-E8h] BYREF
  _QWORD v24[4]; // [xsp+80h] [xbp-E0h] BYREF
  id v25; // [xsp+A0h] [xbp-C0h]
  id v26; // [xsp+A8h] [xbp-B8h]
  id v27; // [xsp+B0h] [xbp-B0h] BYREF
  _QWORD v28[4]; // [xsp+B8h] [xbp-A8h] BYREF
  OS_dispatch_queue *v29; // [xsp+D8h] [xbp-88h]
  NSString *v30; // [xsp+E0h] [xbp-80h]
  id v31; // [xsp+E8h] [xbp-78h] BYREF
  id location[2]; // [xsp+F0h] [xbp-70h] BYREF

  v4 = objc_retain(a3);
  objc_initWeak(location, self);
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<%@@%p>"),
           objc_opt_class(v4, v5),
           v4));
  v7 = objc_retain(self->_queue);
  objc_msgSend(v4, "setSession:", self->_session);
  v28[0] = _NSConcreteStackBlock;
  v28[1] = 3254779904LL;
  v28[2] = sub_100062A54;
  v28[3] = &unk_10009FBA8;
  objc_copyWeak(&v31, location);
  v8 = objc_retain(v7);
  v29 = v8;
  v9 = objc_retain(v6);
  v30 = v9;
  objc_msgSend(v4, "setAddEntity:", v28);
  v24[0] = _NSConcreteStackBlock;
  v24[1] = 3254779904LL;
  v24[2] = sub_100062C48;
  v24[3] = &unk_10009FBA8;
  objc_copyWeak(&v27, location);
  v10 = objc_retain(v8);
  v25 = v10;
  v11 = objc_retain(v9);
  v26 = v11;
  objc_msgSend(v4, "setRemoveEntity:", v24);
  v20[0] = _NSConcreteStackBlock;
  v20[1] = 3254779904LL;
  v20[2] = sub_100062E3C;
  v20[3] = &unk_10009FBA8;
  objc_copyWeak(&v23, location);
  v12 = objc_retain(v10);
  v21 = v12;
  v13 = objc_retain(v11);
  v22 = v13;
  objc_msgSend(v4, "setUpdateEntity:", v20);
  queue = (dispatch_queue_s *)self->_queue;
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100063030;
  block[3] = &unk_10009FBD8;
  block[4] = self;
  v18 = v13;
  v19 = v4;
  v15 = objc_retain(v4);
  v16 = objc_retain(v13);
  dispatch_async(queue, block);
  objc_release(v19);
  objc_release(v18);
  objc_release(v22);
  objc_release(v21);
  objc_destroyWeak(&v23);
  objc_release(v26);
  objc_release(v25);
  objc_destroyWeak(&v27);
  objc_release(v30);
  objc_release(v29);
  objc_destroyWeak(&v31);
  objc_release(v12);
  objc_release(v15);
  objc_release(v16);
  objc_destroyWeak(location);
}