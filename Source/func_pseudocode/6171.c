-[MediaConversionQueueEntry allRequestsHaveRequestPriority:]
bool __cdecl -[MediaConversionQueueEntry allRequestsHaveRequestPriority:](
        MediaConversionQueueEntry *self,
        SEL a2,
        signed __int64 a3)
{
  char v3; // w19
  _QWORD v5[6]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v6; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v7; // [xsp+38h] [xbp-28h]
  __int64 v8; // [xsp+40h] [xbp-20h]
  char v9; // [xsp+48h] [xbp-18h]

  v6 = 0LL;
  v7 = &v6;
  v8 = 0x2020000000LL;
  v9 = 1;
  v5[0] = _NSConcreteStackBlock;
  v5[1] = 3254779904LL;
  v5[2] = sub_10000C8C8;
  v5[3] = &unk_100041180;
  v5[4] = &v6;
  v5[5] = a3;
  -[MediaConversionQueueEntry withLockEnumerateClientRequests:](self, "withLockEnumerateClientRequests:", v5);
  v3 = *((_BYTE *)v7 + 24);
  _Block_object_dispose(&v6, 8);
  return v3;
}