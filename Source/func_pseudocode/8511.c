-[HTMLConverter attributedStringFromHTMLString:baseURL:completionBlock:]
void __cdecl -[HTMLConverter attributedStringFromHTMLString:baseURL:completionBlock:](
        HTMLConverter *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x19
  id v8; // x22
  id v9; // x20
  void *v10; // x21
  void *v11; // x23
  void *v12; // x24
  ICReaderDelegateUtilities *v13; // x25
  void *v14; // x25
  id v15; // x22
  id v16; // x25
  id v17; // x23
  id v18; // x24
  _QWORD v19[4]; // [xsp+0h] [xbp-100h] BYREF
  id v20; // [xsp+20h] [xbp-E0h]
  id v21; // [xsp+28h] [xbp-D8h]
  id v22; // [xsp+30h] [xbp-D0h]
  id v23; // [xsp+38h] [xbp-C8h]
  _QWORD *v24; // [xsp+40h] [xbp-C0h]
  _QWORD *v25; // [xsp+48h] [xbp-B8h]
  _QWORD v26[5]; // [xsp+50h] [xbp-B0h] BYREF
  id v27; // [xsp+78h] [xbp-88h]
  _QWORD v28[5]; // [xsp+80h] [xbp-80h] BYREF
  id v29; // [xsp+A8h] [xbp-58h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = objc_retain(a5);
  v10 = objc_autoreleasePoolPush();
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "dataUsingEncoding:", 4LL));
  v12 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  objc_msgSend(v12, "setObject:forKeyedSubscript:", NSHTMLTextDocumentType, NSDocumentTypeDocumentAttribute);
  objc_msgSend(v12, "setObject:forKeyedSubscript:", &off_100004178, NSCharacterEncodingDocumentAttribute);
  v13 = objc_retainAutoreleasedReturnValue(+[ICReaderDelegateUtilities sharedInstance](&OBJC_CLASS___ICReaderDelegateUtilities, "sharedInstance"));
  objc_msgSend(v12, "setObject:forKeyedSubscript:", v13, NSReaderDelegateDocumentOption);
  objc_release(v13);
  v28[0] = 0LL;
  v28[1] = v28;
  v28[2] = 0x3032000000LL;
  v28[3] = sub_100003000;
  v28[4] = sub_100003010;
  v29 = 0LL;
  v26[0] = 0LL;
  v26[1] = v26;
  v26[2] = 0x3032000000LL;
  v26[3] = sub_100003000;
  v26[4] = sub_100003010;
  v27 = 0LL;
  v14 = objc_msgSend(v9, "copy");
  v19[0] = _NSConcreteStackBlock;
  v19[1] = 3254779904LL;
  v19[2] = sub_100003018;
  v19[3] = &unk_1000040F0;
  v20 = v12;
  v15 = objc_retain(v8);
  v21 = v15;
  v22 = v11;
  v24 = v26;
  v25 = v28;
  v23 = v14;
  v16 = objc_retain(v14);
  v17 = objc_retain(v11);
  v18 = objc_retain(v12);
  dispatch_async(&_dispatch_main_q, v19);
  objc_release(v23);
  objc_release(v22);
  objc_release(v21);
  objc_release(v20);
  objc_release(v16);
  _Block_object_dispose(v26, 8);
  objc_release(v27);
  _Block_object_dispose(v28, 8);
  objc_release(v29);
  objc_release(v17);
  objc_release(v18);
  objc_autoreleasePoolPop(v10);
  objc_release(v9);
  objc_release(v15);
  objc_release(v7);
}