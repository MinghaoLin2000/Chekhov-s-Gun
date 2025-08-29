_$s025com_apple_AppStoreDaemon_D9UIService20ViewPresentationTaskC7presentSo07ASDViewH6ResultCyYaKF
__int64 ViewPresentationTask.present()()
{
  __int64 v0; // x20
  _QWORD *v1; // x22
  __int64 v2; // x19
  __int64 v3; // x1
  __int64 v4; // x8
  __int64 v6; // [xsp+18h] [xbp-8h]

  v1[14] = v0;
  v2 = sub_10000C470(0LL);
  v1[15] = sub_10000C460();
  v4 = sub_10000C450(v2, &protocol witness table for MainActor);
  v1[16] = v4;
  v1[17] = v3;
  if ( ((v6 ^ (2 * v6)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _swift_task_switch(sub_1000074A8, v4, v3);
}