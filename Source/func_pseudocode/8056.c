-[SPMessagesHelper enableCloudKitMessagesWithCompletionHandler:]
void __cdecl -[SPMessagesHelper enableCloudKitMessagesWithCompletionHandler:](SPMessagesHelper *self, SEL a2, id a3)
{
  id v3; // x19
  dispatch_queue_global_s *v4; // x20
  id v5; // x19
  _QWORD block[4]; // [xsp+8h] [xbp-38h] BYREF
  id v7; // [xsp+28h] [xbp-18h]

  v3 = objc_retain(a3);
  v4 = objc_retainAutoreleasedReturnValue(dispatch_get_global_queue(17LL, 0LL));
  block[0] = _NSConcreteStackBlock;
  block[1] = 3254779904LL;
  block[2] = sub_100003864;
  block[3] = &unk_1000040A0;
  v7 = v3;
  v5 = objc_retain(v3);
  dispatch_async(v4, block);
  objc_release(v4);
  objc_release(v7);
  objc_release(v5);
}