-[MediaConversionQueueEntry allRequestsAreBackground]
bool __cdecl -[MediaConversionQueueEntry allRequestsAreBackground](MediaConversionQueueEntry *self, SEL a2)
{
  char v2; // w19
  _QWORD v4[5]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v5; // [xsp+30h] [xbp-30h] BYREF
  __int64 *v6; // [xsp+38h] [xbp-28h]
  __int64 v7; // [xsp+40h] [xbp-20h]
  char v8; // [xsp+48h] [xbp-18h]

  v5 = 0LL;
  v6 = &v5;
  v7 = 0x2020000000LL;
  v8 = 1;
  v4[0] = _NSConcreteStackBlock;
  v4[1] = 3254779904LL;
  v4[2] = sub_10000C660;
  v4[3] = &unk_1000410E0;
  v4[4] = &v5;
  -[MediaConversionQueueEntry withLockEnumerateClientRequests:](self, "withLockEnumerateClientRequests:", v4);
  v2 = *((_BYTE *)v6 + 24);
  _Block_object_dispose(&v5, 8);
  return v2;
}