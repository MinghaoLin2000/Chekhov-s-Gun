-[HeuristicInterpreter actionsAndExpirersForHeuristicsExcept:bundlePath:now:dataSourcesEndpoint:reply:]
void __cdecl -[HeuristicInterpreter actionsAndExpirersForHeuristicsExcept:bundlePath:now:dataSourcesEndpoint:reply:](
        HeuristicInterpreter *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6,
        id a7)
{
  id v11; // x19
  id v12; // x23
  id v13; // x22
  id v14; // x21
  id v15; // x20
  dispatch_queue_s *v16; // x24
  id v17; // x20
  id v18; // x21
  id v19; // x23
  id v20; // x19
  id v21; // x22
  _QWORD block[4]; // [xsp+8h] [xbp-78h] BYREF
  id v23; // [xsp+28h] [xbp-58h]
  id v24; // [xsp+30h] [xbp-50h]
  id v25; // [xsp+38h] [xbp-48h]
  id v26; // [xsp+40h] [xbp-40h]
  id v27; // [xsp+48h] [xbp-38h]

  v11 = objc_retain(a3);
  v12 = objc_retain(a4);
  v13 = objc_retain(a5);
  v14 = objc_retain(a6);
  v15 = objc_retain(a7);
  v16 = (dispatch_queue_s *)objc_retainAutoreleasedReturnValue((id)sub_100006ED4());
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100006F28;
  block[3] = &unk_100028A50;
  v23 = v13;
  v24 = v11;
  v25 = v12;
  v26 = v14;
  v27 = v15;
  v17 = objc_retain(v15);
  v18 = objc_retain(v14);
  v19 = objc_retain(v12);
  v20 = objc_retain(v11);
  v21 = objc_retain(v13);
  dispatch_async(v16, block);
  objc_release(v16);
  objc_release(v27);
  objc_release(v26);
  objc_release(v25);
  objc_release(v24);
  objc_release(v23);
  objc_release(v17);
  objc_release(v18);
  objc_release(v19);
  objc_release(v20);
  objc_release(v21);
}