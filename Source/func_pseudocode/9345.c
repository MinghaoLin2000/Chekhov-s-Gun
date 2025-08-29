-[NSFileCoordinator tsp_coordinateAccessWithIntents:queue:byAccessor:]
void __cdecl -[NSFileCoordinator tsp_coordinateAccessWithIntents:queue:byAccessor:](
        NSFileCoordinator *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v6; // x20
  _QWORD v7[4]; // [xsp+8h] [xbp-38h] BYREF
  id v8; // [xsp+28h] [xbp-18h]

  v7[0] = _NSConcreteStackBlock;
  v7[1] = 3254779904LL;
  v7[2] = sub_100024FB0;
  v7[3] = &unk_1001D29A8;
  v8 = objc_retain(a5);
  v6 = objc_retain(v8);
  objc_msgSend(a4, "addOperationWithBlock:", v7);
  objc_release(v8);
  objc_release(v6);
}