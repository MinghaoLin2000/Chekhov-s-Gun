-[iAUPServer processInTelegram]
void __cdecl -[iAUPServer processInTelegram](iAUPServer *self, SEL a2)
{
  unsigned __int16 *v3; // x22
  unsigned __int8 *v4; // x20
  __int64 v5; // x23
  __int64 v6; // x21
  unsigned int v7; // w8
  void *v8; // x20
  const __CFString **v9; // x2
  const __CFString **v10; // x3
  unsigned __int64 v11; // x8
  iAUPServer *v12; // x0
  __int64 v13; // x2
  char *v14; // x3
  __int64 v15; // x4
  unsigned int v16; // w21
  unsigned int firmwareImageBaseTransferAddress; // w21
  unsigned int v18; // w21
  int v19; // w8
  __int64 v20; // x28
  unsigned int v21; // w22
  unsigned __int64 v22; // x23
  NSUInteger v23; // x21
  NSData *v24; // x0
  __int64 v25; // x8
  iAUPServerDelegate *delegate; // x0
  iAUPServer *v27; // x0
  __int64 v28; // x2
  unsigned int v29; // w8
  char *v30; // x25
  char *v31; // x26
  NSData *v32; // x0
  __int64 v33; // x22
  unsigned int v34; // w8
  _BYTE *v35; // x0
  _BYTE *v36; // x24
  __int16 v37; // w8
  char *v38; // x1
  void *v39; // x0
  void *v40; // x2
  iAUPServerDelegate *v41; // x0
  id v42; // x0
  void *v43; // x26
  __int16 v44; // w8
  char *v45; // x27
  void *v46; // x20
  unsigned __int8 v47; // [xsp+1Bh] [xbp-145h] BYREF
  unsigned int v48; // [xsp+1Ch] [xbp-144h]
  _QWORD v49[6]; // [xsp+20h] [xbp-140h] BYREF
  _QWORD v50[6]; // [xsp+50h] [xbp-110h] BYREF
  const __CFString *v51; // [xsp+80h] [xbp-E0h] BYREF
  const __CFString *v52; // [xsp+88h] [xbp-D8h] BYREF
  const __CFString *v53; // [xsp+90h] [xbp-D0h] BYREF
  const __CFString *v54; // [xsp+98h] [xbp-C8h] BYREF
  const __CFString *v55; // [xsp+A0h] [xbp-C0h] BYREF
  const __CFString *v56; // [xsp+A8h] [xbp-B8h] BYREF
  const __CFString *v57; // [xsp+B0h] [xbp-B0h] BYREF
  const __CFString *v58; // [xsp+B8h] [xbp-A8h] BYREF
  const __CFString *v59; // [xsp+C0h] [xbp-A0h] BYREF
  const __CFString *v60; // [xsp+C8h] [xbp-98h] BYREF
  const __CFString *v61; // [xsp+D0h] [xbp-90h] BYREF
  const __CFString *v62; // [xsp+D8h] [xbp-88h] BYREF
  const __CFString *v63; // [xsp+E0h] [xbp-80h] BYREF
  const __CFString *v64; // [xsp+E8h] [xbp-78h] BYREF
  const __CFString *v65; // [xsp+F0h] [xbp-70h] BYREF
  const __CFString *v66; // [xsp+F8h] [xbp-68h] BYREF
  __int64 vars8; // [xsp+168h] [xbp+8h]

  v3 = -[NSMutableData mutableBytes](self->_telegramDataIn, "mutableBytes");
  v4 = (unsigned __int8 *)v3 + 1;
  v5 = *(unsigned __int8 *)v3;
  v6 = (unsigned int)-[NSMutableData length](self->_telegramDataIn, "length") - 1;
  -[iAUPServer logCommand:payload:length:](self, "logCommand:payload:length:", v5, (char *)v3 + 1, v6);
  if ( (int)v5 > 31 )
  {
    switch ( (int)v5 )
    {
      case ' ':
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[iAUPServer processIdentifyCommand:length:](self, "processIdentifyCommand:length:", v4, v6);
        break;
      case '!':
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[iAUPServer processRequestDownloadCommand:length:](self, "processRequestDownloadCommand:length:", v4, v6);
        break;
      case '"':
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[iAUPServer processDownloadCompleteCommand:length:](self, "processDownloadCompleteCommand:length:", v4, v6);
        break;
      case '#':
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        -[iAUPServer processNotifyAccessoryErrorCommand:length:](
          self,
          "processNotifyAccessoryErrorCommand:length:",
          v4,
          v6);
        break;
      default:
        if ( (_DWORD)v5 == 193 )
        {
          if ( self->_ackAppReentry )
          {
LABEL_55:
            delegate = self->_delegate;
            if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
              __break(0xC471u);
            -[iAUPServerDelegate firmwareUpdateComplete:error:](delegate, "firmwareUpdateComplete:error:", 0LL, 0LL);
          }
        }
        else if ( (_DWORD)v5 == 194 )
        {
          if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
            __break(0xC471u);
          -[iAUPServer processPersonalizationInfo:length:](self, "processPersonalizationInfo:length:", v4, v6);
        }
        break;
    }
    return;
  }
  switch ( (int)v5 )
  {
    case 0:
      v47 = *v4;
      if ( v47 == 1 )
        v7 = bswap32(-[FirmwareBundle productIDCode](self->_firmwareBundle, "productIDCode"));
      else
        v7 = 0;
      v48 = v7;
      v27 = self;
      v28 = 128LL;
      goto LABEL_78;
    case 1:
      if ( *v4 == 136 )
      {
        -[iAUPServer appendToLog:](
          self,
          "appendToLog:",
          CFSTR("ProcessAbort_GeneralFailure from accessory. Cleaning up."));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -1LL,
               0LL);
        v65 = CFSTR("Event");
        v66 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v66;
        v10 = &v65;
        goto LABEL_105;
      }
      -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 129LL, v4, 1LL);
      if ( *v4 == 8 && self->_iAUPVersion == 1 )
      {
        -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 65LL, 0LL, 0LL);
        if ( !self->_ackAppReentry )
          goto LABEL_55;
      }
      return;
    case 2:
      v11 = *v4;
      if ( v11 > 3 )
        return;
      self->objectBlockTransferSizes[v11] = bswap32(v3[1]) >> 16;
      v12 = self;
      v13 = 130LL;
      v14 = (char *)v3 + 1;
      v15 = 3LL;
      goto LABEL_39;
    case 3:
      v16 = bswap32(*(_DWORD *)v4);
      self->_firmwareImageBaseTransferAddress = v16;
      if ( v16 < -[FirmwareBundle firmwareImageBaseAddress](self->_firmwareBundle, "firmwareImageBaseAddress")
        || (firmwareImageBaseTransferAddress = self->_firmwareImageBaseTransferAddress,
            v18 = firmwareImageBaseTransferAddress
                - -[FirmwareBundle firmwareImageBaseAddress](self->_firmwareBundle, "firmwareImageBaseAddress"),
            v18 >= -[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize")) )
      {
        -[iAUPServer appendToLog:](
          self,
          "appendToLog:",
          CFSTR("COMMAND_SetBaseImageTransferAddress: Bound check failed"));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -2LL,
               0LL);
        v63 = CFSTR("Event");
        v64 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v64;
        v10 = &v63;
        goto LABEL_105;
      }
      v12 = self;
      v13 = 131LL;
      v14 = (char *)v3 + 1;
      v15 = 4LL;
LABEL_39:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[iAUPServer sendCommand:payload:payload_length:](v12, "sendCommand:payload:payload_length:", v13, v14, v15);
      return;
    case 4:
      v19 = *v4;
      if ( *v4 )
        goto LABEL_22;
      if ( -[FirmwareBundle firmwareImage](self->_firmwareBundle, "firmwareImage")
        || -[FirmwareBundle firmwareLocalURL](self->_firmwareBundle, "firmwareLocalURL") )
      {
        goto LABEL_67;
      }
      v19 = *v4;
LABEL_22:
      if ( v19 != 2 )
        goto LABEL_25;
      if ( -[FirmwareBundle hash](self->_firmwareBundle, "hash") )
        goto LABEL_67;
      v19 = *v4;
LABEL_25:
      if ( v19 != 1 )
        goto LABEL_28;
      if ( !-[FirmwareBundle certificate](self->_firmwareBundle, "certificate") )
      {
        v19 = *v4;
LABEL_28:
        if ( v19 != 3 || !-[FirmwareBundle signature](self->_firmwareBundle, "signature") )
        {
          -[iAUPServer appendToLog:](self, "appendToLog:", CFSTR("COMMAND_GetObjectSize: request for empty object."));
          v8 = objc_msgSend(
                 objc_alloc((Class)&OBJC_CLASS___NSError),
                 "initWithDomain:code:userInfo:",
                 CFSTR("com.apple.iAUPServer.ErrorDomain"),
                 -4LL,
                 0LL);
          v61 = CFSTR("Event");
          v62 = CFSTR("com.apple.fud.updateFailed");
          v9 = &v62;
          v10 = &v61;
          goto LABEL_105;
        }
      }
LABEL_67:
      switch ( *v4 )
      {
        case 0u:
          v29 = bswap32(-[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize"));
          break;
        case 1u:
          v32 = -[FirmwareBundle certificate](self->_firmwareBundle, "certificate");
          goto LABEL_76;
        case 2u:
          v32 = -[FirmwareBundle hash](self->_firmwareBundle, "hash");
          goto LABEL_76;
        case 3u:
          v32 = -[FirmwareBundle signature](self->_firmwareBundle, "signature");
LABEL_76:
          v29 = bswap32((unsigned int)-[NSData length](v32, "length"));
          break;
        default:
          v29 = 0;
          break;
      }
      v47 = *v4;
      v48 = v29;
      v27 = self;
      v28 = 132LL;
LABEL_78:
      -[iAUPServer sendCommand:payload:payload_length:](v27, "sendCommand:payload:payload_length:", v28, &v47, 5LL);
      return;
    case 5:
      v20 = *v4;
      if ( (unsigned int)v20 > 3 )
        return;
      v21 = v3[1];
      LODWORD(v22) = self->objectBlockTransferSizes[v20];
      if ( *v4 )
      {
        if ( (_DWORD)v20 == 1 )
        {
          if ( -[FirmwareBundle certificate](self->_firmwareBundle, "certificate") )
          {
            v23 = -[NSData length](-[FirmwareBundle certificate](self->_firmwareBundle, "certificate"), "length");
            v24 = -[FirmwareBundle certificate](self->_firmwareBundle, "certificate");
            goto LABEL_83;
          }
        }
        else if ( (_DWORD)v20 == 3 )
        {
          if ( -[FirmwareBundle signature](self->_firmwareBundle, "signature") )
          {
            v23 = -[NSData length](-[FirmwareBundle signature](self->_firmwareBundle, "signature"), "length");
            v24 = -[FirmwareBundle signature](self->_firmwareBundle, "signature");
            goto LABEL_83;
          }
        }
        else if ( (_DWORD)v20 == 2 && -[FirmwareBundle hash](self->_firmwareBundle, "hash") )
        {
          v23 = -[NSData length](-[FirmwareBundle hash](self->_firmwareBundle, "hash"), "length");
          v24 = -[FirmwareBundle hash](self->_firmwareBundle, "hash");
LABEL_83:
          v31 = -[NSData bytes](v24, "bytes");
          goto LABEL_84;
        }
LABEL_89:
        -[iAUPServer appendToLog:](self, "appendToLog:", CFSTR("COMMAND_GetObjectBlock: request for empty object."));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -4LL,
               0LL);
        v59 = CFSTR("Event");
        v60 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v60;
        v10 = &v59;
        goto LABEL_105;
      }
      if ( !-[FirmwareBundle firmwareImage](self->_firmwareBundle, "firmwareImage")
        && !-[FirmwareBundle firmwareLocalURL](self->_firmwareBundle, "firmwareLocalURL") )
      {
        goto LABEL_89;
      }
      v23 = -[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize");
      v30 = (char *)-[NSData bytes](-[FirmwareBundle firmwareImage](self->_firmwareBundle, "firmwareImage"), "bytes")
          + self->_firmwareImageBaseTransferAddress;
      v31 = &v30[--[FirmwareBundle firmwareImageBaseAddress](self->_firmwareBundle, "firmwareImageBaseAddress")];
LABEL_84:
      if ( !v31 && !-[FirmwareBundle firmwareLocalURL](self->_firmwareBundle, "firmwareLocalURL") || !(_DWORD)v23 )
      {
        -[iAUPServer appendToLog:](
          self,
          "appendToLog:",
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("COMMAND_GetObjectBlock Failed, Invalid object_type (%c) or Image (object_total_size = %u)"),
            v20,
            v23));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -4LL,
               0LL);
        v57 = CFSTR("Event");
        v58 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v58;
        v10 = &v57;
        goto LABEL_105;
      }
      v33 = (bswap32(v21) >> 16) * (unsigned int)v22;
      v34 = v23 - v33;
      if ( (unsigned int)v23 < (unsigned int)v33 )
      {
        -[iAUPServer appendToLog:](
          self,
          "appendToLog:",
          CFSTR("COMMAND_GetObjectBlock: bound check failed: block_offset * block_size > object_total_size"));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -2LL,
               0LL);
        v55 = CFSTR("Event");
        v56 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v56;
        v10 = &v55;
LABEL_105:
        -[iAUPServerDelegate firmwareUpdateComplete:error:](
          self->_delegate,
          "firmwareUpdateComplete:error:",
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v9,
            v10,
            1LL),
          v8);
        objc_release(v8);
        return;
      }
      if ( v34 >= (unsigned int)v22 )
        v22 = (unsigned int)v22;
      else
        v22 = v34;
      v35 = malloc_type_malloc((unsigned int)(v22 + 3), 0x475BFE6EuLL);
      if ( !v35 )
      {
        -[iAUPServer appendToLog:](self, "appendToLog:", CFSTR("COMMAND_GetObjectBlock: malloc failed."));
        v8 = objc_msgSend(
               objc_alloc((Class)&OBJC_CLASS___NSError),
               "initWithDomain:code:userInfo:",
               CFSTR("com.apple.iAUPServer.ErrorDomain"),
               -3LL,
               0LL);
        v53 = CFSTR("Event");
        v54 = CFSTR("com.apple.fud.updateFailed");
        v9 = &v54;
        v10 = &v53;
        goto LABEL_105;
      }
      v36 = v35;
      if ( (_DWORD)v20 || !-[FirmwareBundle firmwareLocalURL](self->_firmwareBundle, "firmwareLocalURL") )
      {
        v37 = *(_WORD *)v4;
        v38 = &v31[(unsigned int)v33];
        v36[2] = v4[2];
        *(_WORD *)v36 = v37;
        v39 = v36 + 3;
        v40 = (void *)v22;
      }
      else
      {
        v42 = -[FirmwareBundle getFirmwareDataInRange:error:](
                self->_firmwareBundle,
                "getFirmwareDataInRange:error:",
                v33,
                v22,
                0LL);
        if ( !v42 )
        {
          -[iAUPServer appendToLog:](
            self,
            "appendToLog:",
            CFSTR("COMMAND_GetObjectBlock: Failed to read firmware data from file"));
          v46 = objc_msgSend(
                  objc_alloc((Class)&OBJC_CLASS___NSError),
                  "initWithDomain:code:userInfo:",
                  CFSTR("com.apple.iAUPServer.ErrorDomain"),
                  -4LL,
                  0LL);
          v51 = CFSTR("Event");
          v52 = CFSTR("com.apple.fud.updateFailed");
          -[iAUPServerDelegate firmwareUpdateComplete:error:](
            self->_delegate,
            "firmwareUpdateComplete:error:",
            +[NSDictionary dictionaryWithObjects:forKeys:count:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithObjects:forKeys:count:",
              &v52,
              &v51,
              1LL),
            v46);
          objc_release(v46);
          free(v36);
          return;
        }
        v43 = v42;
        v44 = *(_WORD *)v4;
        v36[2] = v4[2];
        *(_WORD *)v36 = v44;
        v45 = (char *)objc_msgSend(v42, "bytes");
        v40 = objc_msgSend(v43, "length");
        v39 = v36 + 3;
        v38 = v45;
      }
      memcpy(v39, v38, (size_t)v40);
      -[iAUPServer sendCommand:payload:payload_length:](
        self,
        "sendCommand:payload:payload_length:",
        133LL,
        v36,
        (unsigned __int16)(v22 + 3));
      free(v36);
      self->_totalBytesDownloadedInCurrentSession += v22;
      if ( (self->_accessoryCapabilities & 1) == 0 && !self->_startEventSent )
      {
        v50[0] = CFSTR("com.apple.fud.updateStarted");
        v49[0] = CFSTR("Event");
        v49[1] = CFSTR("resumeCount");
        v50[1] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", 0LL);
        v49[2] = CFSTR("cumulativeUpdateTime");
        v50[2] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", 0LL);
        v49[3] = CFSTR("cumulativeCloakTime");
        v50[3] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", 0LL);
        v49[4] = CFSTR("totalBytesForCompleteUpdate");
        v50[4] = +[NSNumber numberWithUnsignedInt:](
                   &OBJC_CLASS___NSNumber,
                   "numberWithUnsignedInt:",
                   -[FirmwareBundle firmwareImageSize](self->_firmwareBundle, "firmwareImageSize"));
        v49[5] = CFSTR("totalBytesDownloadedSoFar");
        v50[5] = +[NSNumber numberWithUnsignedInt:](&OBJC_CLASS___NSNumber, "numberWithUnsignedInt:", 0LL);
        -[iAUPServerDelegate handleFirmwareUpdateStatus:](
          self->_delegate,
          "handleFirmwareUpdateStatus:",
          +[NSDictionary dictionaryWithObjects:forKeys:count:](
            &OBJC_CLASS___NSDictionary,
            "dictionaryWithObjects:forKeys:count:",
            v50,
            v49,
            6LL));
        self->_startEventSent = 1;
      }
      if ( !(_DWORD)v20 )
      {
        v41 = self->_delegate;
        if ( v41 )
          -[iAUPServerDelegate updateProgress:](
            v41,
            "updateProgress:",
            (double)(unsigned int)(v22 + v33) / (double)(unsigned int)v23 * 100.0);
      }
      return;
    case 6:
      v25 = *(unsigned __int16 *)v4;
      self->_accessoryCapabilities = v25;
      NSLog(&CFSTR("_accessoryCapabilities set to 0x%x\n").isa, v25);
      v12 = self;
      v13 = 134LL;
      v14 = 0LL;
      v15 = 0LL;
      goto LABEL_39;
    case 7:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      -[iAUPServer setResumeInfo:length:](self, "setResumeInfo:length:", v4, v6);
      return;
    default:
      return;
  }
}