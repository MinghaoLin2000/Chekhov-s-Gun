-[SiriNCService _transferToHost:completion:]
void __cdecl -[SiriNCService _transferToHost:completion:](SiriNCService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NCCustomAlert *v8; // x22
  NCCustomAlert *v9; // x23
  void *v10; // x24
  void *v11; // x22
  void *v12; // x23
  double v13; // d0
  double v14; // d8
  double v15; // d1
  double v16; // d9
  double v17; // d2
  double v18; // d10
  double v19; // d3
  double v20; // d11
  SiriNCClientProtocol *v21; // x23
  _QWORD v22[4]; // [xsp+8h] [xbp-88h] BYREF
  id v23; // [xsp+28h] [xbp-68h]
  SiriNCService *v24; // [xsp+30h] [xbp-60h]
  id v25; // [xsp+38h] [xbp-58h]

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(-[SiriNCService alert](self, "alert"));
  objc_release(v8);
  if ( v8 )
  {
    -[SiriNCService setBreakoutState:](self, "setBreakoutState:", 1LL);
    objc_msgSend(v6, "willBreakoutOfNotificationCenter");
    v9 = objc_retainAutoreleasedReturnValue(-[SiriNCService alert](self, "alert"));
    v10 = objc_retainAutoreleasedReturnValue(-[NCCustomAlert contentViewController](v9, "contentViewController"));
    v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "view"));
    objc_release(v10);
    objc_release(v9);
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "window"));
    objc_msgSend(v11, "bounds");
    objc_msgSend(v11, "convertRect:toView:", 0LL);
    objc_msgSend(v12, "convertRectToScreen:");
    v14 = v13;
    v16 = v15;
    v18 = v17;
    v20 = v19;
    objc_release(v12);
    v21 = objc_retainAutoreleasedReturnValue(-[SiriNCService ncClientObjectProxy](self, "ncClientObjectProxy"));
    v22[0] = _NSConcreteStackBlock;
    v22[1] = 3254779904LL;
    v22[2] = sub_100009BA8;
    v22[3] = &unk_100020A60;
    v23 = objc_retain(v6);
    v24 = self;
    v25 = objc_retain(v7);
    -[SiriNCClientProtocol hostPrepareViewTransferWithGlobalRect:completion:](
      v21,
      "hostPrepareViewTransferWithGlobalRect:completion:",
      v22,
      v14,
      v16,
      v18,
      v20);
    objc_release(v21);
    objc_release(v25);
    objc_release(v23);
    objc_release(v11);
  }
  objc_release(v7);
  objc_release(v6);
}