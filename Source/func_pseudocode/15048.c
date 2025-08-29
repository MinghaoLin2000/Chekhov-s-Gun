-[ATXHeuristicJSEnv mockClipboardContent:createdAt:fromBundleId:]
void __cdecl -[ATXHeuristicJSEnv mockClipboardContent:createdAt:fromBundleId:](
        ATXHeuristicJSEnv *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v8; // x22
  id v9; // x23
  id v10; // x24
  id v11; // x19
  id v12; // x22
  id v13; // x23
  _QWORD *v14; // x24
  _QWORD v15[4]; // [xsp+8h] [xbp-78h] BYREF
  id v16; // [xsp+28h] [xbp-58h]
  id v17; // [xsp+30h] [xbp-50h]
  id v18; // [xsp+38h] [xbp-48h]
  id v19; // [xsp+40h] [xbp-40h] BYREF
  id location; // [xsp+48h] [xbp-38h] BYREF

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  objc_initWeak(&location, self);
  v15[0] = _NSConcreteStackBlock;
  v15[1] = 3254779904LL;
  v15[2] = sub_10001B14C;
  v15[3] = &unk_100029B70;
  objc_copyWeak(&v19, &location);
  v11 = objc_retain(v8);
  v16 = v11;
  v12 = objc_retain(v9);
  v17 = v12;
  v13 = objc_retain(v10);
  v18 = v13;
  v14 = objc_retainBlock(v15);
  -[JSContext setObject:forKeyedSubscript:](
    self->_jsContext,
    "setObject:forKeyedSubscript:",
    v14,
    CFSTR("getClipboard"));
  objc_release(v14);
  objc_release(v18);
  objc_release(v17);
  objc_release(v16);
  objc_destroyWeak(&v19);
  objc_destroyWeak(&location);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
}