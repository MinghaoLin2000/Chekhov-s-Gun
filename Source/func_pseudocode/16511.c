-[iAUPServer setResumeInfo:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer setResumeInfo:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  unsigned int v6; // w25
  unsigned int v7; // w24
  unsigned int v8; // w23
  __int64 v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x22
  __int64 v14; // x20
  NSMutableDictionary *v15; // x0
  NSMutableDictionary *v16; // x21
  const __CFString *v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // [xsp+8h] [xbp-A8h]
  _QWORD v22[5]; // [xsp+18h] [xbp-98h] BYREF
  _QWORD v23[5]; // [xsp+40h] [xbp-70h] BYREF

  if ( (self->_accessoryCapabilities & 1) != 0 )
  {
    if ( self->_startEventSent )
    {
      NSLog(&CFSTR("[setResumeInfo] Information already sent to delegate, skipping this\n").isa, a2, a3, *(_QWORD *)&a4);
    }
    else if ( a4 == 18 )
    {
      v6 = *(unsigned __int16 *)a3;
      v7 = *(_DWORD *)(a3 + 2);
      v8 = *(_DWORD *)(a3 + 6);
      v9 = bswap32(*(_DWORD *)(a3 + 10));
      if ( (unsigned int)v9 > -[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize") )
      {
        v21 = -[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize");
        NSLog(
          &CFSTR("[setResumeInfo] Invalid totalBytesForCompleteUpdate = %lu, firmwareImageSize = %lu\n").isa,
          v18,
          v19,
          v20,
          v9,
          v21);
      }
      else
      {
        v13 = bswap32(*(_DWORD *)(a3 + 14));
        if ( (unsigned int)v13 >= (unsigned int)v9 )
        {
          NSLog(
            &CFSTR("[setResumeInfo] Invalid totalBytesDownloadedSoFar = %lu, totalBytesForCompleteUpdate = %lu\n").isa,
            v10,
            v11,
            v12,
            v13,
            v9);
        }
        else
        {
          v14 = __rev16(v6);
          v22[0] = CFSTR("resumeCount");
          v23[0] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v14);
          v22[1] = CFSTR("cumulativeUpdateTime");
          v23[1] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", bswap32(v7));
          v22[2] = CFSTR("cumulativeCloakTime");
          v23[2] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", bswap32(v8));
          v22[3] = CFSTR("totalBytesForCompleteUpdate");
          v23[3] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v9);
          v22[4] = CFSTR("totalBytesDownloadedSoFar");
          v23[4] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", v13);
          v15 = +[NSMutableDictionary dictionaryWithDictionary:](
                  &OBJC_CLASS___NSMutableDictionary,
                  "dictionaryWithDictionary:",
                  +[NSDictionary dictionaryWithObjects:forKeys:count:](
                    &OBJC_CLASS___NSDictionary,
                    "dictionaryWithObjects:forKeys:count:",
                    v23,
                    v22,
                    5LL));
          v16 = v15;
          if ( (_DWORD)v14 )
            v17 = CFSTR("com.apple.fud.updateResumed");
          else
            v17 = CFSTR("com.apple.fud.updateStarted");
          -[NSMutableDictionary setObject:forKey:](v15, "setObject:forKey:", v17, CFSTR("Event"));
          -[iAUPServerDelegate handleFirmwareUpdateStatus:](self->_delegate, "handleFirmwareUpdateStatus:", v16);
          self->_startEventSent = 1;
          -[iAUPServer sendCommand:payload:payload_length:](
            self,
            "sendCommand:payload:payload_length:",
            135LL,
            0LL,
            0LL);
        }
      }
    }
    else
    {
      NSLog(&CFSTR("[setResumeInfo] Invalid payload length=%d\n").isa, a2, a3, *(_QWORD *)&a4, a4);
    }
  }
  else
  {
    NSLog(&CFSTR("[setResumeInfo] accessory capabilities not set to allow resume\n").isa, a2, a3, *(_QWORD *)&a4);
  }
}