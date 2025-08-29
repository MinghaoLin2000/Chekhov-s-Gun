-[ATXHeuristicJSEnv mockDataSource:returning:]
void __cdecl -[ATXHeuristicJSEnv mockDataSource:returning:](ATXHeuristicJSEnv *self, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  _QWORD *v8; // x22
  _QWORD v9[4]; // [xsp+8h] [xbp-48h] BYREF
  id v10; // [xsp+28h] [xbp-28h]

  v9[0] = _NSConcreteStackBlock;
  v9[1] = 3254779904LL;
  v9[2] = sub_10001B744;
  v9[3] = &unk_100029BC0;
  v10 = objc_retain(a4);
  v6 = objc_retain(v10);
  v7 = objc_retain(a3);
  v8 = objc_retainBlock(v9);
  -[ATXHeuristicJSEnv mockDataSource:block:](self, "mockDataSource:block:", v7, v8);
  objc_release(v7);
  objc_release(v8);
  objc_release(v10);
  objc_release(v6);
}