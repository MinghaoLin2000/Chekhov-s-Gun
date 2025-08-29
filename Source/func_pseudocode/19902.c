-[lite_job_t _withActivity:]
void __cdecl -[lite_job_t _withActivity:](lite_job_t *self, SEL a2, id a3)
{
  id v4; // x19
  void *v5; // x20
  OS_os_activity *jobActivity; // x0
  OS_os_activity *v7; // x21
  id v8; // x22
  os_activity_s *v9; // x21
  _QWORD v10[4]; // [xsp+0h] [xbp-50h] BYREF
  id v11; // [xsp+20h] [xbp-30h]
  id v12; // [xsp+28h] [xbp-28h]

  v4 = objc_retain(a3);
  v5 = objc_autoreleasePoolPush();
  if ( self->_jobActivity )
    jobActivity = self->_jobActivity;
  else
    jobActivity = (OS_os_activity *)&_os_activity_current;
  v7 = objc_retain(jobActivity);
  if ( self->_jobTransaction )
    os_transaction_needs_more_time();
  v10[0] = _NSConcreteStackBlock;
  v10[1] = 3254779904LL;
  v10[2] = sub_10001B284;
  v10[3] = &unk_100091950;
  v8 = objc_retain(v4);
  v11 = v7;
  v12 = v8;
  v9 = objc_retain(v7);
  os_activity_apply(v9, v10);
  objc_release(v11);
  objc_release(v12);
  objc_release(v9);
  objc_autoreleasePoolPop(v5);
  objc_release(v8);
}