__Z16PKPromptAuthInfoP8NSStringS0_bU13block_pointerFvP15NSURLCredentialE
void __fastcall PKPromptAuthInfo(void *a1, void *a2, char a3, void *a4)
{
  id v7; // x22
  id v8; // x21
  id v9; // x19
  dispatch_queue_global_s *v10; // x23
  id v11; // x19
  id v12; // x20
  id v13; // x21
  _QWORD v14[4]; // [xsp+0h] [xbp-70h] BYREF
  id v15; // [xsp+20h] [xbp-50h]
  id v16; // [xsp+28h] [xbp-48h]
  id v17; // [xsp+30h] [xbp-40h]
  char v18; // [xsp+38h] [xbp-38h]

  v7 = objc_retain(a1);
  v8 = objc_retain(a2);
  v9 = objc_retain(a4);
  v10 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(0LL, 0LL));
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 3254779904LL;
  v14[2] = sub_100043ED4;
  v14[3] = &unk_10009EE20;
  v15 = v7;
  v16 = v8;
  v18 = a3;
  v17 = v9;
  v11 = objc_retain(v9);
  v12 = objc_retain(v8);
  v13 = objc_retain(v7);
  dispatch_async(v10, v14);
  objc_release(v10);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  objc_release(v11);
  objc_release(v12);
  objc_release(v13);
}