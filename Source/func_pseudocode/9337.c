-[TSPFilePackageWriter closeWithQueue:completion:]
void __cdecl -[TSPFilePackageWriter closeWithQueue:completion:](TSPFilePackageWriter *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x22
  dispatch_queue_global_s *v8; // x19
  id v9; // x21
  id v10; // x20
  objc_super v11; // [xsp+8h] [xbp-78h] BYREF
  _QWORD v12[5]; // [xsp+18h] [xbp-68h] BYREF
  id v13; // [xsp+40h] [xbp-40h]
  id v14; // [xsp+48h] [xbp-38h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v12[0] = _NSConcreteStackBlock;
  v12[1] = 3254779904LL;
  v12[2] = sub_100024568;
  v12[3] = &unk_1001D2978;
  v13 = v6;
  v14 = v7;
  v12[4] = self;
  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___TSPFilePackageWriter;
  v9 = objc_retain(v6);
  v10 = objc_retain(v7);
  -[TSPPackageWriter closeWithQueue:completion:](&v11, "closeWithQueue:completion:", v8, v12);
  objc_release(v8);
  objc_release(v13);
  objc_release(v14);
  objc_release(v9);
  objc_release(v10);
}