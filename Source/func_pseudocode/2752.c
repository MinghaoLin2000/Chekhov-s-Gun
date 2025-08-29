-[DeviceSettingsNode reloadFilteredChildren]
void __cdecl -[DeviceSettingsNode reloadFilteredChildren](DeviceSettingsNode *self, SEL a2)
{
  NSMutableArray *v3; // x20
  void *v4; // x21
  NSMutableArray *v5; // x22
  void *v6; // x23
  NSMutableArray *v7; // x20
  _QWORD v8[5]; // [xsp+8h] [xbp-58h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children"));
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 3254779904LL;
  v8[2] = sub_100065C74;
  v8[3] = &unk_1000B9EE8;
  v8[4] = self;
  v4 = objc_retainAutoreleasedReturnValue(-[NSMutableArray indexesOfObjectsPassingTest:](v3, "indexesOfObjectsPassingTest:", v8));
  objc_release(v3);
  v5 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](self, "children"));
  v6 = objc_retainAutoreleasedReturnValue(-[NSMutableArray objectsAtIndexes:](v5, "objectsAtIndexes:", v4));
  v7 = objc_retainAutoreleasedReturnValue(+[NSMutableArray arrayWithArray:](&OBJC_CLASS___NSMutableArray, "arrayWithArray:", v6));
  -[DeviceSettingsNode setFilteredChildren:](self, "setFilteredChildren:", v7);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
}